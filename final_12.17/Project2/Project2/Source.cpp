#include <GL/glew.h>
#include <GL/freeglut.h>
#include <Windows.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>

bool walk = false, swing_down=false, first_part=true, die=false; 
//swing_down: 擺動時是否在下墜, first_part: 擺動時前半部分, die: 死掉動畫
int swing = 0, die_angle=0; 
//swing: 走路時，手腳擺動的角度, die_angle: 死掉時，人物倒下的角度

GLuint texture[50];

/* 貼圖時使用的一些matrix */
static GLfloat n[6][3] = //normal
{
  {-1.0, 0.0, 0.0},
  {0.0, 1.0, 0.0},
  {1.0, 0.0, 0.0},
  {0.0, -1.0, 0.0},
  {0.0, 0.0, 1.0},
  {0.0, 0.0, -1.0}
};
static GLint faces[6][4] =
{
  {0, 1, 2, 3},
  {3, 2, 6, 7},
  {7, 6, 5, 4},
  {4, 5, 1, 0},
  {5, 6, 2, 1},
  {7, 4, 0, 3}
};

struct Image {
    unsigned long sizeX;
    unsigned long sizeY;
    char* data;
};
typedef struct Image Image;

/* 從texture資料夾 載入bmp圖片 */
int ImageLoad(char* pic, Image* image) {
    FILE* file;
    unsigned long size; // size of the image in bytes.
    unsigned long i; // standard counter.
    unsigned short int planes; // number of planes in image (must be 1)
    unsigned short int bpp; // number of bits per pixel (must be 24)
    char temp; // temporary color storage for bgr-rgb conversion.
    // make sure the file is there.

    char filename[100];
    sprintf(filename, "texture/%s", pic); //加入資料夾的相對路徑

    if ((file = fopen(filename, "rb")) == NULL) {
        printf("File Not Found : %s\n", filename);
        return 0;
    }
    // seek through the bmp header, up to the width/height:
    fseek(file, 18, SEEK_CUR);
    // read the width
    if ((i = fread(&image->sizeX, 4, 1, file)) != 1) {
        printf("Error reading width from %s.\n", filename);
        return 0;
    }
    //printf("Width of %s: %lu\n", filename, image->sizeX);
    // read the height
    if ((i = fread(&image->sizeY, 4, 1, file)) != 1) {
        printf("Error reading height from %s.\n", filename);
        return 0;
    }
    //printf("Height of %s: %lu\n", filename, image->sizeY);
    // calculate the size (assuming 24 bits or 3 bytes per pixel).
    size = image->sizeX * image->sizeY * 3;
    // read the planes
    if ((fread(&planes, 2, 1, file)) != 1) {
        printf("Error reading planes from %s.\n", filename);
        return 0;
    }
    if (planes != 1) {
        printf("Planes from %s is not 1: %u\n", filename, planes);
        return 0;
    }
    // read the bitsperpixel
    if ((i = fread(&bpp, 2, 1, file)) != 1) {
        printf("Error reading bpp from %s.\n", filename);
        return 0;
    }
    if (bpp != 24) {
        printf("Bpp from %s is not 24: %u\n", filename, bpp);
        return 0;
    }
    // seek past the rest of the bitmap header.
    fseek(file, 24, SEEK_CUR);
    // read the data.
    image->data = (char*)malloc(size);
    if (image->data == NULL) {
        printf("Error allocating memory for color-corrected image data");
        return 0;
    }
    if ((i = fread(image->data, size, 1, file)) != 1) {
        printf("Error reading image data from %s.\n", filename);
        return 0;
    }
    for (i = 0; i < size; i += 3) { // reverse all of the colors. (bgr -> rgb)
        temp = image->data[i];
        image->data[i] = image->data[i + 2];
        image->data[i + 2] = temp;
    }
    // we're done.
    return 1;
} 

/* 設定texture的屬性 */
void loadTexture(char* file_name, Image* image, int tex_index) {
    if (!ImageLoad(file_name, image)) {
        exit(1);
    }

    glBindTexture(GL_TEXTURE_2D, texture[tex_index]);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR); //scale linearly when image bigger than texture
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR); //scale linearly when image smalled than texture
    glTexImage2D(GL_TEXTURE_2D, 0, 3, image->sizeX, image->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, image->data);
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
}

/* 畫頭 */
static void drawHead(GLfloat size, GLenum type)
{
    GLfloat v[8][3];
    GLint i;
    v[0][0] = v[1][0] = v[2][0] = v[3][0] = -size / 2;
    v[4][0] = v[5][0] = v[6][0] = v[7][0] = size / 2;
    v[0][1] = v[1][1] = v[4][1] = v[5][1] = -size / 2;
    v[2][1] = v[3][1] = v[6][1] = v[7][1] = size / 2;
    v[0][2] = v[3][2] = v[4][2] = v[7][2] = -size / 2;
    v[1][2] = v[2][2] = v[5][2] = v[6][2] = size / 2;

    for (i = 5; i >= 0; i--) {
        switch (i) {
            case 0:
                glBindTexture(GL_TEXTURE_2D, texture[2]); //right face (model的視角)
            break;
            case 2:
                glBindTexture(GL_TEXTURE_2D, texture[3]); //left face
                break;
            case 4:
                glBindTexture(GL_TEXTURE_2D, texture[0]); //front face
                break;
            default:
                glBindTexture(GL_TEXTURE_2D, texture[1]); //hair
                break;
        }
        glBegin(type);
            glNormal3fv(&n[i][0]);
            glTexCoord2d(0.0, 0.0); glVertex3fv(&v[faces[i][0]][0]);
            glTexCoord2d(0.0, 1.0); glVertex3fv(&v[faces[i][1]][0]);
            glTexCoord2d(1.0, 1.0); glVertex3fv(&v[faces[i][2]][0]);
            glTexCoord2d(1.0, 0.0); glVertex3fv(&v[faces[i][3]][0]);
        glEnd();
    }
}

/* 畫身體 */
static void drawBody(GLfloat size, GLenum type)
{
    GLfloat v[8][3];
    GLint i;
    v[0][0] = v[1][0] = v[2][0] = v[3][0] = -size / 2; //left width
    v[4][0] = v[5][0] = v[6][0] = v[7][0] = size / 2; //right width
    v[0][1] = v[1][1] = v[4][1] = v[5][1] = -size / 1.3; //bottom height
    v[2][1] = v[3][1] = v[6][1] = v[7][1] = size / 2; //upper height
    v[0][2] = v[3][2] = v[4][2] = v[7][2] = -size / 4; //back thickness
    v[1][2] = v[2][2] = v[5][2] = v[6][2] = size / 4; //front thickness
    
    for (i = 5; i >= 0; i--) {
        switch (i) {
            case 4:
                glBindTexture(GL_TEXTURE_2D, texture[4]); //front body
                break;
            default:
                glBindTexture(GL_TEXTURE_2D, texture[5]); //back body
                break;
        }
        glBegin(type);
            glNormal3fv(&n[i][0]);
            glTexCoord2d(0.0, 0.0); glVertex3fv(&v[faces[i][0]][0]);
            glTexCoord2d(0.0, 1.0); glVertex3fv(&v[faces[i][1]][0]);
            glTexCoord2d(1.0, 1.0); glVertex3fv(&v[faces[i][2]][0]);
            glTexCoord2d(1.0, 0.0); glVertex3fv(&v[faces[i][3]][0]);
        glEnd();
    }
}

/* 畫手臂 */
static void drawArm(GLfloat size, GLenum type)
{
    GLfloat v[8][3];
    GLint i;
    v[0][0] = v[1][0] = v[2][0] = v[3][0] = -size / 6; //left width
    v[4][0] = v[5][0] = v[6][0] = v[7][0] = size / 6; //right width
    v[0][1] = v[1][1] = v[4][1] = v[5][1] = -size / 1.3; //bottom height
    v[2][1] = v[3][1] = v[6][1] = v[7][1] = size / 2; //upper height
    v[0][2] = v[3][2] = v[4][2] = v[7][2] = -size / 4; //back thickness
    v[1][2] = v[2][2] = v[5][2] = v[6][2] = size / 4; //front thickness

    for (i = 5; i >= 0; i--) {
        switch (i) {
        case 0:
            glBindTexture(GL_TEXTURE_2D, texture[6]); //side arm
            break;
        case 1:
            glBindTexture(GL_TEXTURE_2D, texture[7]); //shoulder
            break;
        case 3:
            glBindTexture(GL_TEXTURE_2D, texture[10]); //手掌
            break;
        case 4: 
            glBindTexture(GL_TEXTURE_2D, texture[8]); //front arm
            break;
        case 5:
            glBindTexture(GL_TEXTURE_2D, texture[9]); //back arm
            break;
        default:
            glBindTexture(GL_TEXTURE_2D, texture[5]); //others
            break;
        }
        glBegin(type);
            glNormal3fv(&n[i][0]);
            glTexCoord2d(0.0, 0.0); glVertex3fv(&v[faces[i][0]][0]);
            glTexCoord2d(0.0, 1.0); glVertex3fv(&v[faces[i][1]][0]);
            glTexCoord2d(1.0, 1.0); glVertex3fv(&v[faces[i][2]][0]);
            glTexCoord2d(1.0, 0.0); glVertex3fv(&v[faces[i][3]][0]);
        glEnd();
    }
}

/* 畫腿 */
static void drawLeg(GLfloat size, GLenum type)
{
    GLfloat v[8][3];
    GLint i;
    v[0][0] = v[1][0] = v[2][0] = v[3][0] = -size / 4; //left width
    v[4][0] = v[5][0] = v[6][0] = v[7][0] = size / 4; //right width
    v[0][1] = v[1][1] = v[4][1] = v[5][1] = -size / 1.3; //bottom height
    v[2][1] = v[3][1] = v[6][1] = v[7][1] = size / 2; //upper height
    v[0][2] = v[3][2] = v[4][2] = v[7][2] = -size / 4; //back thickness
    v[1][2] = v[2][2] = v[5][2] = v[6][2] = size / 4; //front thickness

    for (i = 5; i >= 0; i--) {
        switch (i) {
        case 0:
            glBindTexture(GL_TEXTURE_2D, texture[13]); //side leg
            break;
        case 3:
            glBindTexture(GL_TEXTURE_2D, texture[14]); //腳底
            break;
        case 4:
            glBindTexture(GL_TEXTURE_2D, texture[11]); //front leg
            break;
        case 5:
            glBindTexture(GL_TEXTURE_2D, texture[12]); //back leg
            break;
        default:
            glBindTexture(GL_TEXTURE_2D, texture[5]); //others
            break;
        }
        glBegin(type);
        glNormal3fv(&n[i][0]);
        glTexCoord2d(0.0, 0.0); glVertex3fv(&v[faces[i][0]][0]);
        glTexCoord2d(0.0, 1.0); glVertex3fv(&v[faces[i][1]][0]);
        glTexCoord2d(1.0, 1.0); glVertex3fv(&v[faces[i][2]][0]);
        glTexCoord2d(1.0, 0.0); glVertex3fv(&v[faces[i][3]][0]);
        glEnd();
    }
}

/* 指定bmp，載入頭部texture */
void setHead(void ) {
    char* file_name = (char*)malloc(100 * sizeof(char)); 
    Image* image1 = (Image*)malloc(sizeof(Image));
    Image* image2 = (Image*)malloc(sizeof(Image));
    Image* image3 = (Image*)malloc(sizeof(Image));
    Image* image4 = (Image*)malloc(sizeof(Image));

    strcpy(file_name, "face_dead_new.bmp");
    loadTexture(file_name, image1, 0); //textureNo 0

    strcpy(file_name, "hair_new.bmp");
    loadTexture(file_name, image2, 1); //textureNo 1

    strcpy(file_name, "side_face_right_new.bmp");
    loadTexture(file_name, image3, 2); //textureNo 2

    strcpy(file_name, "side_face_left_new.bmp");
    loadTexture(file_name, image4, 3); //textureNo 3
}

/* 指定bmp，載入身體texture */
void setBody(void) {
    char* file_name = (char*)malloc(100 * sizeof(char));
    Image* image1 = (Image*)malloc(sizeof(Image));
    Image* image2 = (Image*)malloc(sizeof(Image));

    strcpy(file_name, "front_body_dead_new.bmp");
    loadTexture(file_name, image1, 4); //textureNo 4

    strcpy(file_name, "back_body_new.bmp");
    loadTexture(file_name, image2, 5); //textureNo 5  
}

/* 指定bmp，載入手臂texture */
void setArm(void) {
    char* file_name = (char*)malloc(100 * sizeof(char));
    Image* image1 = (Image*)malloc(sizeof(Image));
    Image* image2 = (Image*)malloc(sizeof(Image));
    Image* image3 = (Image*)malloc(sizeof(Image));
    Image* image4 = (Image*)malloc(sizeof(Image));
    Image* image5 = (Image*)malloc(sizeof(Image));

    strcpy(file_name, "side_hand_new.bmp");
    loadTexture(file_name, image1, 6); //textureNo 6

    strcpy(file_name, "shoulder_new.bmp");
    loadTexture(file_name, image2, 7); //textureNo 7

    strcpy(file_name, "front_hand_new.bmp");
    loadTexture(file_name, image3, 8); //textureNo 8

    strcpy(file_name, "back_hand_new.bmp");
    loadTexture(file_name, image4, 9); //textureNo 9

    strcpy(file_name, "hand_new.bmp");
    loadTexture(file_name, image5, 10); //textureNo 10
}

/* 指定bmp，載入腿texture */
void setLeg(void) {
    char* file_name = (char*)malloc(100 * sizeof(char));
    Image* image1 = (Image*)malloc(sizeof(Image));
    Image* image2 = (Image*)malloc(sizeof(Image));
    Image* image3 = (Image*)malloc(sizeof(Image));
    Image* image4 = (Image*)malloc(sizeof(Image));

    strcpy(file_name, "front_leg_new.bmp");
    loadTexture(file_name, image1, 11); //textureNo 11

    strcpy(file_name, "back_leg_new.bmp");
    loadTexture(file_name, image2, 12); //textureNo 12

    strcpy(file_name, "side_leg_new.bmp");
    loadTexture(file_name, image3, 13); //textureNo 13

    strcpy(file_name, "feet_new.bmp");
    loadTexture(file_name, image4, 14); //textureNo 14
}

void myinit(void)
{
    glClearColor(0.5, 0.5, 0.5, 0.0);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    // Create Texture
    glGenTextures(50, texture); //total 50 textures
    setHead();
    setBody();
    setArm();
    setLeg();

    glShadeModel(GL_SMOOTH);
    glEnable(GL_NORMALIZE); //不要讓glScalef()改到我的法向量
}

void auto_rotate(void) {
    Sleep(80); //每80ms更新一次此function
    
    //手腳擺動
    if (swing_down) {
        swing = (swing - 10) % 40;
        if (swing == 0) {
            if (first_part == true) first_part = false;
            else first_part = true;

            swing_down = false;
        }
    }
    else {
        swing = (swing + 10) % 40;
        if (swing == 30) {
            swing_down = true;
        }
    }

    //人物死掉向後倒地
    if (die) {
        if(die_angle >= -90) die_angle = die_angle - 15;
    }
    
    glutPostRedisplay();
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_TEXTURE_2D);

    //line 410~476 是畫完整人物的code，要移動可以整坨一起動
    glPushMatrix();
        glTranslatef(0.0, -2.0, -12.0); //初始位置(可改)
        glRotatef(180, 0.0, 1.0, 0.0); 

        if (die) { //死掉了
            glTranslatef(0.0, -5.0, 0.0);
            glRotatef(die_angle, 1.0, 0.0, 0.0);
            glTranslatef(0.0, 5.0, 0.0);
        }

        //head
        glPushMatrix();
            drawHead(2.0, GL_QUADS);
        glPopMatrix();

        //body
        glPushMatrix();
            glTranslatef(0.0, -2.0, 0.0);
            drawBody(2.0, GL_QUADS);
        glPopMatrix();

        //left arm
        glPushMatrix();
            glTranslatef(-1.3, -2.0, 0.0);
            if (walk == true) {
                if(first_part) glRotatef(-swing, 1.0, 0.0, 0.0); //擺動前半部分 往前擺
                else glRotatef(swing, 1.0, 0.0, 0.0); //擺動後半部分 往後擺
            }
            drawArm(2.0, GL_QUADS); 
        glPopMatrix();

        //right arm
        glPushMatrix();
            glTranslatef(1.3, -2.0, 0.0);
            if (walk == true) {
                if (first_part) glRotatef(swing, 1.0, 0.0, 0.0); //擺動前半部分 往前擺
                else glRotatef(-swing, 1.0, 0.0, 0.0); //擺動後半部分 往後擺
            }
            glRotatef(180, 0.0, 1.0, 0.0);
            drawArm(2.0, GL_QUADS); 
        glPopMatrix();

        //left leg
        glPushMatrix();
            glTranslatef(-0.5, -4.5, 0.0);
            if (walk == true) {
                glTranslatef(0.0, 1.0, 0.0);
                    if (first_part) glRotatef(swing, 1.0, 0.0, 0.0); //擺動前半部分 往前擺
                    else glRotatef(-swing, 1.0, 0.0, 0.0); //擺動後半部分 往後擺
                glTranslatef(0.0, -1.0, 0.0);
            }
            drawLeg(2.0, GL_QUADS);  
        glPopMatrix();

        //right leg
        glPushMatrix();
            glTranslatef(0.5, -4.5, 0.0);
            if (walk == true) {
                glTranslatef(0.0, 1.0, 0.0);
                    if (first_part) glRotatef(-swing, 1.0, 0.0, 0.0); //擺動前半部分 往前擺
                    else glRotatef(swing, 1.0, 0.0, 0.0); //擺動後半部分 往後擺
                glTranslatef(0.0, -1.0, 0.0);
            }
            glRotatef(180, 0.0, 1.0, 0.0);
            drawLeg(2.0, GL_QUADS);  
        glPopMatrix();
    glPopMatrix(); //finish drawing model

    glDisable(GL_TEXTURE_2D);
    glutSwapBuffers();
}

void myReshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, 1.0 * (GLfloat)w / (GLfloat)h, 1.0, 50.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
}

void keyboard(unsigned char key, int x, int y) {
    glutIgnoreKeyRepeat(0); //do NOT ignore key repeat
    switch (key) {
        case 'w': //walking
        case 'a':
        case 's':
        case 'd':
            if(die==false) walk = true;
            break;
        case'r': //死掉後重生
            if (die) {
                die = false;
                die_angle = 0;
            }
            break;
        case 27: // “esc” on keyboard
            exit(0);
            break;
        default: 
            break;
    }
    glutPostRedisplay();
}

/* 釋放鍵盤時會call此function */
void keyboardUp(unsigned char key, int x, int y) {
    glutIgnoreKeyRepeat(1); //ignore key repeat
    switch (key) {
        case 'w': 
        case 'a':
        case 's':
        case 'd':
            walk = false; //釋放鍵盤時，停止走路
            break;
        case 27: // “esc” on keyboard
            exit(0);
            break;
        default:
            break;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
    switch (button)
    {
        case GLUT_LEFT_BUTTON: //滑鼠左鍵: 中槍死掉 (暫時的)
            if (state == GLUT_DOWN) {
                if (die == false) die = true;
            }
            break;

        default:
            break;
    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(1200, 650);
    glutCreateWindow("final project");

    glewExperimental = GL_TRUE;
    if (glewInit()) {
        exit(EXIT_FAILURE);
    }

    myinit();
    glutDisplayFunc(display);
    glutReshapeFunc(myReshape);
    glutKeyboardFunc(keyboard);
    glutKeyboardUpFunc(keyboardUp);
    glutMouseFunc(mouse);
    glutIdleFunc(auto_rotate);
    glutMainLoop();

    return 0;
}