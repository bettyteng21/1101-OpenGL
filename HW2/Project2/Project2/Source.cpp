/***************************
4108056007 鄧雅文 第2II次作業10/16
***************************/
#include <GL/glut.h>
#include <math.h>

void Display_國(void) {
	glPushMatrix();

	glBegin(GL_POLYGON);	//"國"外框"口"的下面一橫
		
		glVertex2f(-2.6f, 0.15f);
		glVertex2f(-2.58f, 0.09f);
		glVertex2f(-2.4f, 0.115f);
		glVertex2f(-2.3f, 0.125f);
		glVertex2f(-2.2f, 0.12f);
		glVertex2f(-2.155f, 0.126f);
		glVertex2f(-2.15f, 0.15f);
		glVertex2f(-2.155f, 0.18f);
		glVertex2f(-2.2f, 0.19f);
		glVertex2f(-2.285f, 0.193f);
	glEnd();

	glBegin(GL_POLYGON);	//"國"的"或"一撇
		glVertex2f(-2.193f, 0.32f);
		glVertex2f(-2.163f, 0.4f);
		glVertex2f(-2.165f, 0.415f);
		glVertex2f(-2.18f, 0.43f);
		glVertex2f(-2.2f, 0.465f);
		glVertex2f(-2.23f, 0.44f);
		glVertex2f(-2.227, 0.41f);
		glVertex2f(-2.25f, 0.33f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.25f, 0.33f);
		glVertex2f(-2.26f, 0.3f);
		glVertex2f(-2.218f, 0.265f);
		glVertex2f(-2.193f, 0.32f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.218f, 0.265f);
		glVertex2f(-2.24f, 0.23f);
		glVertex2f(-2.28f, 0.265f);
		glVertex2f(-2.26f, 0.3f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.28f, 0.265f);
		glVertex2f(-2.33f, 0.22f);
		glVertex2f(-2.285f, 0.193f);
		glVertex2f(-2.24f, 0.23f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.285f, 0.193f);
		glVertex2f(-2.33f, 0.22f);
		glVertex2f(-2.4f, 0.18f);
		glVertex2f(-2.53f, 0.165f);
		glVertex2f(-2.4f, 0.115f);
	glEnd();

	glBegin(GL_POLYGON);	//"國"的"口"左邊"|"
		glVertex2f(-2.6f, 0.15f);
		glVertex2f(-2.6f, 0.3f);
		glVertex2f(-2.59f, 0.42f);
		glVertex2f(-2.545f, 0.34f);
		glVertex2f(-2.545f, 0.22f);
		glVertex2f(-2.53f, 0.165f);
		glVertex2f(-2.54f, 0.1f);
	glEnd();
		
	glBegin(GL_POLYGON);
		glVertex2f(-2.536f, 0.365f);
		glVertex2f(-2.52f, 0.37f);
		glVertex2f(-2.5f, 0.375f);
		glVertex2f(-2.59f, 0.48f);
		glVertex2f(-2.59f, 0.42f);
		glVertex2f(-2.545f, 0.34f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.5f, 0.375f);
		glVertex2f(-2.48f, 0.4f);
		glVertex2f(-2.44f, 0.425f);
		glVertex2f(-2.47f, 0.46f);
		glVertex2f(-2.59f, 0.48f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.415f, 0.43f);
		glVertex2f(-2.44f, 0.425f);
		glVertex2f(-2.47f, 0.46f);
	glEnd();

	glBegin(GL_POLYGON);	//"或"裡面的東西
		glVertex2f(-2.415f, 0.43f);
		glVertex2f(-2.46f, 0.38f);
		glVertex2f(-2.415f, 0.43f);
		glVertex2f(-2.52f, 0.32f);
		glVertex2f(-2.53f, 0.3f);
		glVertex2f(-2.52f, 0.28f);
		glVertex2f(-2.46f, 0.31f);
		glVertex2f(-2.38f, 0.43f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.48f, 0.285f);
		glVertex2f(-2.515f, 0.26f);
		glVertex2f(-2.515f, 0.22f);
		glVertex2f(-2.495f, 0.205f);
		glVertex2f(-2.4f, 0.248f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.48f, 0.285f);
		glVertex2f(-2.4f, 0.248f);
		glVertex2f(-2.32f, 0.28f);
		glVertex2f(-2.46f, 0.31f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.28f, 0.295f);
		glVertex2f(-2.27f, 0.31f);
		glVertex2f(-2.265f, 0.325f);
		glVertex2f(-2.265f, 0.34f);
		glVertex2f(-2.28f, 0.355f);
		glVertex2f(-2.34f, 0.33f);
		glVertex2f(-2.32f, 0.28f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.32f, 0.28f);
		glVertex2f(-2.34f, 0.33f);
		glVertex2f(-2.415f, 0.38f);
		glVertex2f(-2.46f, 0.31f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.34f, 0.33f);
		glVertex2f(-2.35f, 0.335f);
		glVertex2f(-2.4f, 0.248f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.35f, 0.335f);
		glVertex2f(-2.287f, 0.41f);
		glVertex2f(-2.305f, 0.46f);
		glVertex2f(-2.34f, 0.42f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.35f, 0.335f);
		glVertex2f(-2.34f, 0.42f);
		glVertex2f(-2.415f, 0.38f);
	glEnd();

	glBegin(GL_POLYGON);	//"或"裡面的橫
		glVertex2f(-2.47f, 0.46f);
		glVertex2f(-2.44f, 0.425f);
		glVertex2f(-2.415f, 0.43f);
		glVertex2f(-2.38f, 0.43f);
		glVertex2f(-2.32f, 0.47f);
		glVertex2f(-2.33f, 0.51f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.32f, 0.47f);
		glVertex2f(-2.305f, 0.46f);
		glVertex2f(-2.33f, 0.51f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.275f, 0.53f);
		glVertex2f(-2.26f, 0.49f);
		glVertex2f(-2.24f, 0.495f);
		glVertex2f(-2.245f, 0.54f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.18f, 0.5f);
		glVertex2f(-2.24f, 0.495f);
		glVertex2f(-2.245f, 0.54f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.18f, 0.5f);
		glVertex2f(-2.165f, 0.505f);
		glVertex2f(-2.165f, 0.53f);
		glVertex2f(-2.245f, 0.54f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.173f, 0.55f);
		glVertex2f(-2.165f, 0.53f);
		glVertex2f(-2.245f, 0.54f);
		glVertex2f(-2.265f, 0.56f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.173f, 0.55f);
		glVertex2f(-2.21f, 0.6f);
		glVertex2f(-2.263f, 0.583f);
		glVertex2f(-2.265f, 0.56f);
	glEnd();

	glBegin(GL_POLYGON);	//"或"裡面的撇
		glVertex2f(-2.34f, 0.56f);
		glVertex2f(-2.33f, 0.51f);
		glVertex2f(-2.32f, 0.47f);
		glVertex2f(-2.287f, 0.41f);
		glVertex2f(-2.25f, 0.34f);
		glVertex2f(-2.227f, 0.41f);
		glVertex2f(-2.26f, 0.49f);
		glVertex2f(-2.275f, 0.53f);
		glVertex2f(-2.283f, 0.58f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.25f, 0.34f);
		glVertex2f(-2.25f, 0.33f);
		glVertex2f(-2.227f, 0.41f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.218f, 0.265f);
		glVertex2f(-2.205f, 0.242f);
		glVertex2f(-2.193f, 0.32f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.205f, 0.242f);
		glVertex2f(-2.193f, 0.32f);
		glVertex2f(-2.155f, 0.195f);
		glVertex2f(-2.17f, 0.195f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.15f, 0.22f);
		glVertex2f(-2.14f, 0.23f);
		glVertex2f(-2.137f, 0.249f);
		glVertex2f(-2.193f, 0.32f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.193f, 0.32f);
		glVertex2f(-2.155f, 0.195f);
		glVertex2f(-2.15f, 0.22f);
	glEnd();

	glBegin(GL_POLYGON);	//"國"外框"口"的上面一橫
		glVertex2f(-2.505f, 0.503f);
		glVertex2f(-2.59f, 0.48f);
		glVertex2f(-2.587f, 0.54f);
		glVertex2f(-2.57f, 0.565f);
		glVertex2f(-2.54f, 0.566f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.59f, 0.48f);
		glVertex2f(-2.47f, 0.46f);
		glVertex2f(-2.505f, 0.503f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.54f, 0.566f);
		glVertex2f(-2.52f, 0.58f);
		glVertex2f(-2.5f, 0.595f);
		glVertex2f(-2.34f, 0.56f);
		glVertex2f(-2.505f, 0.503f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.5f, 0.595f);
		glVertex2f(-2.34f, 0.56f);
		glVertex2f(-2.283f, 0.58f);
		glVertex2f(-2.22f, 0.658f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.21f, 0.6f);
		glVertex2f(-2.263f, 0.583f);
		glVertex2f(-2.283f, 0.58f);
		glVertex2f(-2.22f, 0.658f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.21f, 0.6f);
		glVertex2f(-2.13f, 0.61f);
		glVertex2f(-2.12f, 0.66f);
		glVertex2f(-2.22f, 0.658f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.13f, 0.61f);
		glVertex2f(-2.12f, 0.66f);
		glVertex2f(-2.1f, 0.645f);
		glVertex2f(-2.09f, 0.61f);
	glEnd();

	glBegin(GL_POLYGON);	//"國"外框"口"的右邊一豎
		glVertex2f(-2.13f, 0.61f);
		glVertex2f(-2.123f, 0.109f);
		glVertex2f(-2.075f, 0.4f);
		glVertex2f(-2.09f, 0.61f);
	glEnd();

	glBegin(GL_POLYGON);	
		glVertex2f(-2.123f, 0.109f);
		glVertex2f(-2.072f, 0.07f);
		glVertex2f(-2.068f, 0.095f);
		glVertex2f(-2.075f, 0.4f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-2.123f, 0.109f);
		glVertex2f(-2.16f, 0.11f);
		glVertex2f(-2.128f, 0.015f);
		glVertex2f(-2.11f, 0.015f);
		glVertex2f(-2.072f, 0.07f);
	glEnd();

	glPopMatrix();
}

void Display_立(void) {
	glPushMatrix();

	glBegin(GL_POLYGON);	//"立"上面的點
		glVertex2f(-1.687f, 0.617f);
		glVertex2f(-1.685f, 0.585f);
		glVertex2f(-1.64f, 0.603f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.685f, 0.585f);
		glVertex2f(-1.69f, 0.57f);
		glVertex2f(-1.686f, 0.56f);
		glVertex2f(-1.673f, 0.54f);
		glVertex2f(-1.635f, 0.505f);
		glVertex2f(-1.64f, 0.603f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.64f, 0.603f);
		glVertex2f(-1.6f, 0.585f);
		glVertex2f(-1.56f, 0.56f);
		glVertex2f(-1.542f, 0.542f);
		glVertex2f(-1.543f, 0.525f);
		glVertex2f(-1.635f, 0.505f);
	glEnd();

	glBegin(GL_POLYGON);	//"立"上面的橫
		glVertex2f(-1.635f, 0.505f);
		glVertex2f(-1.775f, 0.465f);
		glVertex2f(-1.78f, 0.39f);
		glVertex2f(-1.76f, 0.392f);
		glVertex2f(-1.618f, 0.438f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.775f, 0.465f);
		glVertex2f(-1.767f, 0.48f);
		glVertex2f(-1.79f, 0.466f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.79f, 0.466f);
		glVertex2f(-1.825f, 0.46f);
		glVertex2f(-1.841f, 0.44f);
		glVertex2f(-1.846f, 0.41f);
		glVertex2f(-1.84f, 0.39f);
		glVertex2f(-1.82f, 0.375f);
		glVertex2f(-1.81f, 0.372f);
		glVertex2f(-1.8f, 0.38f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.79f, 0.466f);
		glVertex2f(-1.775f, 0.465f);
		glVertex2f(-1.78f, 0.39f);
		glVertex2f(-1.8f, 0.38f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.635f, 0.505f);
		glVertex2f(-1.618f, 0.438f);
		glVertex2f(-1.52f, 0.453f);
		glVertex2f(-1.49f, 0.527f);
		glVertex2f(-1.543f, 0.525f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.48f, 0.523f);
		glVertex2f(-1.454f, 0.51f);
		glVertex2f(-1.45f, 0.472f);
		glVertex2f(-1.47f, 0.453f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.48f, 0.523f);
		glVertex2f(-1.47f, 0.453f);
		glVertex2f(-1.52f, 0.453f);
		glVertex2f(-1.49f, 0.527f);
	glEnd();

	glBegin(GL_POLYGON);	//"立"左邊豎
		glVertex2f(-1.618f, 0.438f);
		glVertex2f(-1.52f, 0.453f);
		glVertex2f(-1.58f, 0.425f);
	glEnd();

	glBegin(GL_POLYGON);	
		glVertex2f(-1.618f, 0.438f);
		glVertex2f(-1.745f, 0.34f);
		glVertex2f(-1.63f, 0.378f);
		glVertex2f(-1.58f, 0.425f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.745f, 0.34f);
		glVertex2f(-1.753f, 0.32f);
		glVertex2f(-1.753f, 0.276f);
		glVertex2f(-1.739f, 0.262f);
		glVertex2f(-1.729f, 0.262f);
		glVertex2f(-1.54f, 0.376f);
		glVertex2f(-1.63f, 0.378f);
	glEnd();

	glBegin(GL_POLYGON);	//"立"的右邊豎
		glVertex2f(-1.54f, 0.376f);
		glVertex2f(-1.63f, 0.378f);
		glVertex2f(-1.53f, 0.41f);
		glVertex2f(-1.5f, 0.415f);
		glVertex2f(-1.51f, 0.384f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.5f, 0.415f);
		glVertex2f(-1.48f, 0.417f);
		glVertex2f(-1.46f, 0.41f);
		glVertex2f(-1.445f, 0.395f);
		glVertex2f(-1.445f, 0.374f);
		glVertex2f(-1.5f, 0.376f);
		glVertex2f(-1.51f, 0.384f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.5f, 0.376f);
		glVertex2f(-1.56f, 0.29f);
		glVertex2f(-1.54f, 0.253f);
		glVertex2f(-1.46f, 0.35f);
		glVertex2f(-1.445f, 0.374f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.56f, 0.29f);
		glVertex2f(-1.54f, 0.253f);
		glVertex2f(-1.592f, 0.205f);
		glVertex2f(-1.62f, 0.228f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.592f, 0.205f);
		glVertex2f(-1.62f, 0.228f);
		glVertex2f(-1.677f, 0.186f);
		glVertex2f(-1.595f, 0.194f);
	glEnd();

	glBegin(GL_POLYGON);	//"立"下面一橫
		glVertex2f(-1.595f, 0.194f);
		glVertex2f(-1.677f, 0.186f);
		glVertex2f(-1.846f, 0.171f);
		glVertex2f(-1.83f, 0.14f);
		glVertex2f(-1.8f, 0.112f);
		glVertex2f(-1.78f, 0.105f);
		glVertex2f(-1.765f, 0.105f);
		glVertex2f(-1.63f, 0.127f);
	glEnd();

	glBegin(GL_POLYGON);	
		glVertex2f(-1.595f, 0.194f);
		glVertex2f(-1.44f, 0.203f);
		glVertex2f(-1.5f, 0.15f);
		glVertex2f(-1.53f, 0.142f);
		glVertex2f(-1.63f, 0.127f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.44f, 0.203f);
		glVertex2f(-1.38f, 0.195f);
		glVertex2f(-1.43f, 0.153f);
		glVertex2f(-1.5f, 0.15f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.43f, 0.153f);
		glVertex2f(-1.36f, 0.145f);
		glVertex2f(-1.348f, 0.146f);
		glVertex2f(-1.348f, 0.168f);
		glVertex2f(-1.359f, 0.189f);
		glVertex2f(-1.38f, 0.195f);
		glVertex2f(-1.44f, 0.203f);
	glEnd();

	glPopMatrix();
}

void Display_中(void) {
	glPushMatrix();
		
	glBegin(GL_POLYGON);	//"中"的框框
		glVertex2f(-1.18f, 0.525f);
		glVertex2f(-1.2f, 0.52f);
		glVertex2f(-1.185f, 0.5f);
		glVertex2f(-1.17f, 0.5f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.2f, 0.52f);
		glVertex2f(-1.185f, 0.5f);
		glVertex2f(-1.19f, 0.49f);
		glVertex2f(-1.24f, 0.51f);
		glVertex2f(-1.226f, 0.528f);
		glVertex2f(-1.21f, 0.528f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.19f, 0.49f);
		glVertex2f(-1.177f, 0.475f);
		glVertex2f(-1.169f, 0.405f);
		glVertex2f(-1.18f, 0.3f);
		glVertex2f(-1.2f, 0.32f);
		glVertex2f(-1.215f, 0.35f);
		glVertex2f(-1.227f, 0.38f);
		glVertex2f(-1.238f, 0.42f);
		glVertex2f(-1.243f, 0.46f);
		glVertex2f(-1.24f, 0.51f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.169f, 0.405f);
		glVertex2f(-1.16f, 0.36f);
		glVertex2f(-1.16f, 0.347f);
		glVertex2f(-1.166f, 0.34f);
		glVertex2f(-1.227f, 0.38f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.166f, 0.34f);
		glVertex2f(-1.15f, 0.315f);
		glVertex2f(-1.13f, 0.3f);
		glVertex2f(-1.18f, 0.3f);
		glVertex2f(-1.2f, 0.32f);
		glVertex2f(-1.238f, 0.42f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-1.18f, 0.525f);
		glVertex2f(-1.17f, 0.5f);
		glVertex2f(-1.12f, 0.47f);
		glVertex2f(-1.1f, 0.47f);
		glVertex2f(-0.947f, 0.535f);
		glVertex2f(-0.954f, 0.573f);
		glVertex2f(-1.16f, 0.537f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.947f, 0.535f);
		glVertex2f(-0.954f, 0.573f);
		glVertex2f(-0.94f, 0.535f);
	glEnd();

	glBegin(GL_POLYGON);	//"中"的一豎
		glVertex2f(-0.954f, 0.573f);
		glVertex2f(-0.952f, 0.64f);
		glVertex2f(-0.92f, 0.655f);
		glVertex2f(-0.895f, 0.648f);
		glVertex2f(-0.9f, 0.58f);
		glVertex2f(-0.94f, 0.535f);
	glEnd();

	glBegin(GL_POLYGON);	
		glVertex2f(-0.9f, 0.58f);
		glVertex2f(-0.94f, 0.535f);
		glVertex2f(-0.953f, 0.425f);
		glVertex2f(-0.902f, 0.48f);
		glVertex2f(-0.894f, 0.536f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.953f, 0.425f);
		glVertex2f(-0.902f, 0.48f);
		glVertex2f(-0.902f, 0.02f);
		glVertex2f(-0.908f, 0.015f);
		glVertex2f(-0.92f, -0.12f);
		glVertex2f(-0.957f, -0.145f);
		glVertex2f(-0.96f, 0.335f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.9f, 0.58f);
		glVertex2f(-0.78f, 0.58f);
		glVertex2f(-0.82f, 0.54f);
		glVertex2f(-0.894f, 0.536f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.78f, 0.58f);
		glVertex2f(-0.82f, 0.54f);
		glVertex2f(-0.738f, 0.53f);
		glVertex2f(-0.74f, 0.56f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.82f, 0.54f);
		glVertex2f(-0.738f, 0.53f);
		glVertex2f(-0.902f, 0.415f);
		glVertex2f(-0.902f, 0.48f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.953f, 0.425f);
		glVertex2f(-1.05f, 0.375f);
		glVertex2f(-1.068f, 0.32f);
		glVertex2f(-1.05, 0.31f);
		glVertex2f(-0.96f, 0.335f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.902f, 0.4f);
		glVertex2f(-0.88f, 0.405f);
		glVertex2f(-0.82f, 0.395f);
		glVertex2f(-0.82f, 0.385f);
		glVertex2f(-0.835f, 0.38f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.902f, 0.4f);
		glVertex2f(-0.835f, 0.38f);
		glVertex2f(-0.827f, 0.365f);
		glVertex2f(-0.85f, 0.35f);
		glVertex2f(-0.902f, 0.34f);
	glEnd();

	glPopMatrix();
}

void Display_興(void) {
	glPushMatrix();

	glBegin(GL_POLYGON);
		glVertex2f(-0.62f, 0.215f);
		glVertex2f(-0.68f, 0.265f);
		glVertex2f(-0.71f, 0.27f);
		glVertex2f(-0.718f, 0.26f);
		glVertex2f(-0.714f, 0.24f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.62f, 0.215f);
		glVertex2f(-0.68f, 0.178f);
		glVertex2f(-0.695f, 0.178f);
		glVertex2f(-0.72f, 0.2f);
		glVertex2f(-0.72f, 0.22f);
		glVertex2f(-0.714f, 0.24f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.62f, 0.215f);
		glVertex2f(-0.42f, 0.29f);
		glVertex2f(-0.455f, 0.32f);
		glVertex2f(-0.5f, 0.308f);
		glVertex2f(-0.68f, 0.265f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.5f, 0.308f);
		glVertex2f(-0.5f, 0.54f);
		glVertex2f(-0.48f, 0.598f);
		glVertex2f(-0.465f, 0.58f);
		glVertex2f(-0.455f, 0.56f);
		glVertex2f(-0.455f, 0.32f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.5f, 0.54f);
		glVertex2f(-0.52f, 0.565f);
		glVertex2f(-0.52f, 0.58f);
		glVertex2f(-0.48f, 0.598f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.455f, 0.32f);
		glVertex2f(-0.43f, 0.322f);
		glVertex2f(-0.408f, 0.293f);
		glVertex2f(-0.42f, 0.29f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.413f, 0.273f);
		glVertex2f(-0.408f, 0.293f);
		glVertex2f(-0.42f, 0.29f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.43f, 0.322f);
		glVertex2f(-0.408f, 0.293f);
		glVertex2f(-0.389f, 0.332f);
		glVertex2f(-0.387f, 0.54f);
		glVertex2f(-0.423f, 0.51f);
		glVertex2f(-0.43f, 0.5f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.387f, 0.54f);
		glVertex2f(-0.423f, 0.51f);
		glVertex2f(-0.425f, 0.55f);
		glVertex2f(-0.41f, 0.6f);
		glVertex2f(-0.39f, 0.58f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.425f, 0.55f);
		glVertex2f(-0.41f, 0.6f);
		glVertex2f(-0.44f, 0.612f);
		glVertex2f(-0.445f, 0.59f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.44f, 0.612f);
		glVertex2f(-0.445f, 0.59f);
		glVertex2f(-0.455f, 0.585f);
		glVertex2f(-0.46f, 0.6f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.389f, 0.332f);
		glVertex2f(-0.408f, 0.293f);
		glVertex2f(-0.36f, 0.31f);
		glVertex2f(-0.325f, 0.35f);
		glVertex2f(-0.36f, 0.34f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.325f, 0.35f);
		glVertex2f(-0.33f, 0.31f);
		glVertex2f(-0.345f, 0.29f);
		glVertex2f(-0.36f, 0.31f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.36f, 0.34f);
		glVertex2f(-0.325f, 0.35f);
		glVertex2f(-0.318f, 0.363f);
		glVertex2f(-0.32f, 0.455f);
		glVertex2f(-0.32f, 0.6f);
		glVertex2f(-0.36f, 0.47f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.32f, 0.483f);
		glVertex2f(-0.36f, 0.47f);
		glVertex2f(-0.37f, 0.5f);
		glVertex2f(-0.36f, 0.533f);
		glVertex2f(-0.354f, 0.56f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.32f, 0.6f);
		glVertex2f(-0.32f, 0.55f);
		glVertex2f(-0.32f, 0.483f);
		glVertex2f(-0.36f, 0.533f);
		glVertex2f(-0.354f, 0.56f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.32f, 0.6f);
		glVertex2f(-0.34f, 0.615f);
		glVertex2f(-0.36f, 0.59f);
		glVertex2f(-0.354f, 0.56f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.34f, 0.615f);
		glVertex2f(-0.37f, 0.61f);
		glVertex2f(-0.378f, 0.6f);
		glVertex2f(-0.37f, 0.59f);
		glVertex2f(-0.36f, 0.59f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.34f, 0.615f);
		glVertex2f(-0.32f, 0.6f);
		glVertex2f(-0.27f, 0.61f);
		glVertex2f(-0.205f, 0.62f);
		glVertex2f(-0.195f, 0.64f);
		glVertex2f(-0.24f, 0.668f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.27f, 0.61f);
		glVertex2f(-0.205f, 0.62f);
		glVertex2f(-0.19f, 0.615f);
		glVertex2f(-0.21f, 0.585f);
		glVertex2f(-0.275f, 0.56f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.21f, 0.585f);
		glVertex2f(-0.275f, 0.56f);
		glVertex2f(-0.278f, 0.48f);
		glVertex2f(-0.23f, 0.51f);
		glVertex2f(-0.22f, 0.54f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.32f, 0.55f);
		glVertex2f(-0.275f, 0.56f);
		glVertex2f(-0.278f, 0.48f);
		glVertex2f(-0.305f, 0.483f);
		glVertex2f(-0.32f, 0.483f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.278f, 0.48f);
		glVertex2f(-0.23f, 0.51f);
		glVertex2f(-0.24f, 0.46f);
		glVertex2f(-0.27f, 0.46f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.278f, 0.48f);
		glVertex2f(-0.305f, 0.483f);
		glVertex2f(-0.32f, 0.455f);
		glVertex2f(-0.295f, 0.445f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.286f, 0.435f);
	glVertex2f(-0.28f, 0.415f);
	glVertex2f(-0.3f, 0.38f);
	glVertex2f(-0.318f, 0.363f);
	glVertex2f(-0.325f, 0.335f);
	glVertex2f(-0.36f, 0.34f);
	glVertex2f(-0.36f, 0.47f);
	glVertex2f(-0.32f, 0.455f);
	glVertex2f(-0.295f, 0.445f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.24f, 0.46f);
		glVertex2f(-0.27f, 0.46f);
		glVertex2f(-0.286f, 0.435f);
		glVertex2f(-0.28f, 0.415f);
		glVertex2f(-0.28f, 0.36f);
		glVertex2f(-0.24f, 0.37f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.28f, 0.36f);
		glVertex2f(-0.3f, 0.38f);
		glVertex2f(-0.318f, 0.363f);
		glVertex2f(-0.315f, 0.35f);
		glVertex2f(-0.31f, 0.32f);
		glVertex2f(-0.3f, 0.31f);
		glVertex2f(-0.26f, 0.305f);
		glVertex2f(-0.24f, 0.305f);
		glVertex2f(-0.235f, 0.33f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.3f, 0.31f);
		glVertex2f(-0.26f, 0.305f);
		glVertex2f(-0.28f, 0.28f);
		glVertex2f(-0.3f, 0.29f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.315f, 0.35f);
		glVertex2f(-0.31f, 0.32f);
		glVertex2f(-0.33f, 0.31f);
		glVertex2f(-0.325f, 0.35f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.2f, 0.37f);
		glVertex2f(-0.195f, 0.333f);
		glVertex2f(-0.235f, 0.33f);
		glVertex2f(-0.24f, 0.305f);
		glVertex2f(-0.28f, 0.36f);
		glVertex2f(-0.24f, 0.37f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.2f, 0.37f);
		glVertex2f(-0.195f, 0.333f);
		glVertex2f(-0.136f, 0.343f);
		glVertex2f(-0.145f, 0.385f);
		glVertex2f(-0.146f, 0.42f);
		glVertex2f(-0.178f, 0.44f);
		glVertex2f(-0.18f, 0.39f);
		glVertex2f(-0.205f, 0.4f);	
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.195f, 0.333f);
		glVertex2f(-0.136f, 0.343f);
		glVertex2f(-0.18f, 0.31f);
		glVertex2f(-0.195f, 0.32f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.146f, 0.42f);
		glVertex2f(-0.178f, 0.44f);
		glVertex2f(-0.208f, 0.445f);
		glVertex2f(-0.2f, 0.47f);
		glVertex2f(-0.17f, 0.5f);
		glVertex2f(-0.14f, 0.5f);
		glVertex2f(-0.12f, 0.46f);
		glVertex2f(-0.126f, 0.445f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.208f, 0.445f);
		glVertex2f(-0.2f, 0.47f);
		glVertex2f(-0.24f, 0.46f);
		glVertex2f(-0.24f, 0.445f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.208f, 0.445f);
		glVertex2f(-0.225f, 0.445f);
		glVertex2f(-0.205f, 0.4f);
		glVertex2f(-0.18f, 0.39f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.2f, 0.47f);
		glVertex2f(-0.17f, 0.5f);
		glVertex2f(-0.22f, 0.54f);
		glVertex2f(-0.23f, 0.51f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.14f, 0.5f);
		glVertex2f(-0.17f, 0.5f);
		glVertex2f(-0.155f, 0.58f);
		glVertex2f(-0.11f, 0.58f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.11f, 0.58f);
		glVertex2f(-0.108f, 0.65f);
		glVertex2f(-0.12f, 0.658f);
		glVertex2f(-0.19f, 0.615f);
		glVertex2f(-0.21f, 0.585f);
		glVertex2f(-0.155f, 0.58f);
		glVertex2f(-0.11f, 0.58f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.108f, 0.65f);
		glVertex2f(-0.155f, 0.58f);
		glVertex2f(-0.11f, 0.58f);
		glVertex2f(-0.083f, 0.625f);
		glVertex2f(-0.078f, 0.65f);
		glVertex2f(-0.09f, 0.66f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.126f, 0.445f);
		glVertex2f(-0.146f, 0.42f);
		glVertex2f(-0.128f, 0.43f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.145f, 0.385f);
		glVertex2f(-0.136f, 0.343f);
		glVertex2f(0.0f, 0.343f);
		glVertex2f(-0.05f, 0.39f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.01f, 0.4f);
		glVertex2f(0.02f, 0.39f);
		glVertex2f(0.018f, 0.35f);
		glVertex2f(0.0f, 0.343f);
		glVertex2f(-0.05f, 0.39f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.518f, 0.173f);
		glVertex2f(-0.59f, 0.2f);
		glVertex2f(-0.568f, 0.14f);
		glVertex2f(-0.54f, 0.1f);
		glVertex2f(-0.514f, 0.088f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.518f, 0.173f);
		glVertex2f(-0.42f, 0.2f);
		glVertex2f(-0.41f, 0.193f);
		glVertex2f(-0.41f, 0.15f);
		glVertex2f(-0.41f, 0.14f);
		glVertex2f(-0.514f, 0.088f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.41f, 0.193f);
		glVertex2f(-0.37f, 0.21f);
		glVertex2f(-0.37f, 0.198f);
		glVertex2f(-0.38f, 0.19f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.41f, 0.193f);
		glVertex2f(-0.39f, 0.17f);
		glVertex2f(-0.375f, 0.18f);
		glVertex2f(-0.38f, 0.19f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.41f, 0.15f);
		glVertex2f(-0.39f, 0.17f);
		glVertex2f(-0.38f, 0.16f);
		glVertex2f(-0.4f, 0.15f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.41f, 0.193f);
		glVertex2f(-0.42f, 0.2f);
		glVertex2f(-0.41f, 0.15f);
		glVertex2f(-0.39f, 0.17f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.355f, 0.208f);
		glVertex2f(-0.355f, 0.192f);
		glVertex2f(-0.24f, 0.243f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.15f, 0.26f);
		glVertex2f(-0.14f, 0.22f);
		glVertex2f(-0.008f, 0.085f);
		glVertex2f(0.005f, 0.11f);
		glVertex2f(0.008f, 0.15f);
		glVertex2f(0.0f, 0.165f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(-0.14f, 0.22f);
		glVertex2f(-0.008f, 0.085f);
		glVertex2f(-0.01f, 0.06f);
	glEnd();

	glPopMatrix();
}

void Display_大(void) {
	glPushMatrix();

	glBegin(GL_POLYGON);
		glVertex2f(0.485f, 0.645f);
		glVertex2f(0.498f, 0.65f);
		glVertex2f(0.51f, 0.645f);
		glVertex2f(0.512f, 0.615f);
		glVertex2f(0.505f, 0.6f);
		glVertex2f(0.48f, 0.54f);
		glVertex2f(0.46f, 0.55f);
		glVertex2f(0.47f, 0.61f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.505f, 0.6f);
		glVertex2f(0.48f, 0.54f);
		glVertex2f(0.48f, 0.483f);
		glVertex2f(0.5f, 0.495f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.48f, 0.54f);
		glVertex2f(0.46f, 0.55f);
		glVertex2f(0.44f, 0.475f);
		glVertex2f(0.468f, 0.483f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.5f, 0.495f);
		glVertex2f(0.58f, 0.5f);
		glVertex2f(0.588f, 0.49f);
		glVertex2f(0.575f, 0.48f);
		glVertex2f(0.575f, 0.466f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.5f, 0.495f);
		glVertex2f(0.575f, 0.466f);
		glVertex2f(0.58f, 0.457f);
		glVertex2f(0.565f, 0.45f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.5f, 0.495f);
		glVertex2f(0.565f, 0.45f);
		glVertex2f(0.57f, 0.44f);
		glVertex2f(0.55f, 0.435f);
		glVertex2f(0.5f, 0.432f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.5f, 0.495f);
		glVertex2f(0.48f, 0.483f);
		glVertex2f(0.468f, 0.483f);
		glVertex2f(0.44f, 0.475f);
		glVertex2f(0.455f, 0.42f);
		glVertex2f(0.5f, 0.432f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.44f, 0.475f);
		glVertex2f(0.455f, 0.42f);
		glVertex2f(0.45f, 0.36f);
		glVertex2f(0.412f, 0.38f);
		glVertex2f(0.41f, 0.405f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.44f, 0.475f);
		glVertex2f(0.41f, 0.405f);
		glVertex2f(0.32f, 0.37f);
		glVertex2f(0.28f, 0.414f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.28f, 0.414f);
		glVertex2f(0.26f, 0.418f);
		glVertex2f(0.185f, 0.39f);
		glVertex2f(0.183f, 0.36f);
		glVertex2f(0.191f, 0.36f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.28f, 0.414f);
		glVertex2f(0.32f, 0.37f);
		glVertex2f(0.275f, 0.325f);
		glVertex2f(0.255f, 0.315f);
		glVertex2f(0.215f, 0.315f);
		glVertex2f(0.191f, 0.36f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.412f, 0.38f);
		glVertex2f(0.385f, 0.335f);
		glVertex2f(0.385f, 0.32f);
		glVertex2f(0.42f, 0.28f);
		glVertex2f(0.438f, 0.32f);
		glVertex2f(0.45f, 0.36f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.385f, 0.32f);
		glVertex2f(0.42f, 0.28f);
		glVertex2f(0.4f, 0.24f);
		glVertex2f(0.36f, 0.195f);
		glVertex2f(0.36f, 0.29f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.36f, 0.195f);
		glVertex2f(0.335f, 0.19f);
		glVertex2f(0.29f, 0.187f);
		glVertex2f(0.32f, 0.25f);
		glVertex2f(0.36f, 0.29f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.29f, 0.187f);
		glVertex2f(0.32f, 0.25f);
		glVertex2f(0.28f, 0.225f);
		glVertex2f(0.275f, 0.213f);
		glVertex2f(0.27f, 0.195f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.25f, 0.183f);
		glVertex2f(0.24f, 0.19f);
		glVertex2f(0.26f, 0.21f);
		glVertex2f(0.275f, 0.213f);
		glVertex2f(0.27f, 0.195f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.48f, 0.32f);
		glVertex2f(0.66f, 0.25f);
		glVertex2f(0.68f, 0.22f);
		glVertex2f(0.672f, 0.2f);
		glVertex2f(0.59f, 0.23f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.615f, 0.178f);
		glVertex2f(0.64f, 0.15f);
		glVertex2f(0.67f, 0.18f);
		glVertex2f(0.672f, 0.2f);
		glVertex2f(0.59f, 0.23f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.615f, 0.178f);
		glVertex2f(0.605f, 0.17f);
		glVertex2f(0.57f, 0.189f);
		glVertex2f(0.59f, 0.23f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.51f, 0.185f);
		glVertex2f(0.525f, 0.18f);
		glVertex2f(0.54f, 0.18f);
		glVertex2f(0.57f, 0.189f);
		glVertex2f(0.59f, 0.23f);
	glEnd();

	glPopMatrix();
}

void Display_學(void) {
	glPushMatrix();

	glBegin(GL_POLYGON);
		glVertex2f(0.935f, 0.683f);
		glVertex2f(0.96f, 0.65f);
		glVertex2f(0.96f, 0.637f);
		glVertex2f(0.92f, 0.594f);
		glVertex2f(0.887f, 0.613f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.92f, 0.594f);
		glVertex2f(0.887f, 0.613f);
		glVertex2f(0.86f, 0.64f);
		glVertex2f(0.853f, 0.61f);
		glVertex2f(0.847f, 0.55f);
		glVertex2f(0.855f, 0.52f);
		glVertex2f(0.86f, 0.5f);
		glVertex2f(0.865f, 0.49f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.92f, 0.594f);
		glVertex2f(0.95f, 0.59f);
		glVertex2f(0.953f, 0.58f);
		glVertex2f(0.945f, 0.56f);
		glVertex2f(0.865f, 0.49f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.945f, 0.56f);
		glVertex2f(0.865f, 0.49f);
		glVertex2f(0.92f, 0.485f);
		glVertex2f(0.92f, 0.51f);
		glVertex2f(0.93f, 0.523f);
		glVertex2f(0.953f, 0.535f);
		glVertex2f(0.954f, 0.55f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.865f, 0.49f);
		glVertex2f(0.92f, 0.485f);
		glVertex2f(0.972f, 0.48f);
		glVertex2f(0.96f, 0.455f);
		glVertex2f(0.908f, 0.415f);
		glVertex2f(0.908f, 0.37f);
		glVertex2f(0.888f, 0.3f);
		glVertex2f(0.865f, 0.36f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.825f, 0.33f);
		glVertex2f(0.86f, 0.3f);
		glVertex2f(0.888f, 0.3f);
		glVertex2f(0.865f, 0.36f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.825f, 0.33f);
		glVertex2f(0.84f, 0.28f);
		glVertex2f(0.86f, 0.3f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.825f, 0.33f);
		glVertex2f(0.84f, 0.28f);
		glVertex2f(0.815f, 0.24f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.825f, 0.33f);
		glVertex2f(0.815f, 0.24f);
		glVertex2f(0.77f, 0.28f);
		glVertex2f(0.82f, 0.35f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.77f, 0.28f);
		glVertex2f(0.755f, 0.26f);
		glVertex2f(0.745f, 0.24f);
		glVertex2f(0.745f, 0.2f);
		glVertex2f(0.768f, 0.18f);
		glVertex2f(0.785f, 0.18f);
		glVertex2f(0.8f, 0.2f);
		glVertex2f(0.815f, 0.24f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.905f, 0.37f);
		glVertex2f(0.888f, 0.3f);
		glVertex2f(0.91f, 0.328f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.905f, 0.37f);
		glVertex2f(0.925f, 0.328f);
		glVertex2f(0.91f, 0.328f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.905f, 0.37f);
		glVertex2f(0.925f, 0.328f);
		glVertex2f(1.21f, 0.416f);
		glVertex2f(1.105f, 0.425f);
		glVertex2f(1.055f, 0.42f);
		glVertex2f(0.98f, 0.4f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.21f, 0.416f);
		glVertex2f(1.105f, 0.425f);
		glVertex2f(1.16f, 0.44f);
		glVertex2f(1.25f, 0.453f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.21f, 0.416f);
		glVertex2f(1.225f, 0.412f);
		glVertex2f(1.28f, 0.45f);
		glVertex2f(1.25f, 0.453f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.225f, 0.412f);
		glVertex2f(1.28f, 0.45f);
		glVertex2f(1.31f, 0.431f);
		glVertex2f(1.32f, 0.415f);
		glVertex2f(1.32f, 0.395f);
		glVertex2f(1.305f, 0.372f);
		glVertex2f(1.235f, 0.4f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.305f, 0.372f);
		glVertex2f(1.243f, 0.363f);
		glVertex2f(1.233f, 0.37f);
		glVertex2f(1.235f, 0.4f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.16f, 0.33f);
		glVertex2f(1.225f, 0.358f);
		glVertex2f(1.233f, 0.37f);
		glVertex2f(1.235f, 0.4f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.92f, 0.485f);
		glVertex2f(0.96f, 0.455f);
		glVertex2f(0.972f, 0.48f);
		glVertex2f(0.98f, 0.525f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.972f, 0.48f);
		glVertex2f(0.98f, 0.525f);
		glVertex2f(0.99f, 0.53f);
		glVertex2f(0.998f, 0.51f);
		glVertex2f(0.998f, 0.495f);
		glVertex2f(1.0f, 0.44f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.998f, 0.495f);
		glVertex2f(1.02f, 0.488f);
		glVertex2f(1.05f, 0.47f);
		glVertex2f(1.065f, 0.457f);
		glVertex2f(1.065f, 0.445f);
		glVertex2f(1.055f, 0.42f);
		glVertex2f(1.0f, 0.44f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.055f, 0.42f);
		glVertex2f(0.98f, 0.4f);
		glVertex2f(0.985f, 0.425f);
		glVertex2f(1.0f, 0.44f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.99f, 0.543f);
		glVertex2f(0.99f, 0.53f);
		glVertex2f(0.998f, 0.51f);
		glVertex2f(1.03f, 0.54f);
		glVertex2f(1.065f, 0.595f);
		glVertex2f(1.01f, 0.59f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.99f, 0.543f);
		glVertex2f(0.965f, 0.565f);
		glVertex2f(0.965f, 0.585f);
		glVertex2f(1.01f, 0.59f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.03f, 0.54f);
		glVertex2f(1.07f, 0.555f);
		glVertex2f(1.093f, 0.57f);
		glVertex2f(1.098f, 0.594f);
		glVertex2f(1.065f, 0.595f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.03f, 0.54f);
		glVertex2f(1.04f, 0.52f);
		glVertex2f(1.06f, 0.54f);
		glVertex2f(1.07f, 0.555f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.04f, 0.52f);
		glVertex2f(1.06f, 0.54f);
		glVertex2f(1.07f, 0.52f);
		glVertex2f(1.05f, 0.47f);
		glVertex2f(1.02f, 0.488f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.01f, 0.59f);
		glVertex2f(1.055f, 0.675f);
		glVertex2f(1.074f, 0.66f);
		glVertex2f(1.085f, 0.642f);
		glVertex2f(1.085f, 0.63f);
		glVertex2f(1.065f, 0.607f);
		glVertex2f(1.065f, 0.595f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.088f, 0.615f);
		glVertex2f(1.108f, 0.594f);
		glVertex2f(1.155f, 0.594f);
		glVertex2f(1.12f, 0.62f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.155f, 0.594f);
		glVertex2f(1.2f, 0.6f);
		glVertex2f(1.218f, 0.62f);
		glVertex2f(1.218f, 0.655f);
		glVertex2f(1.2f, 0.665f);
		glVertex2f(1.18f, 0.66f);
		glVertex2f(1.15f, 0.638f);
		glVertex2f(1.12f, 0.62f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.155f, 0.594f);
		glVertex2f(1.2f, 0.6f);
		glVertex2f(1.16f, 0.58f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.07f, 0.555f);
		glVertex2f(1.093f, 0.57f);
		glVertex2f(1.1f, 0.56f);
		glVertex2f(1.093f, 0.52f);
		glVertex2f(1.073f, 0.54f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.1f, 0.56f);
		glVertex2f(1.093f, 0.52f);
		glVertex2f(1.093f, 0.51f);
		glVertex2f(1.115f, 0.453f);
		glVertex2f(1.17f, 0.46f);
		glVertex2f(1.177f, 0.48f);
		glVertex2f(1.175f, 0.51f);
		glVertex2f(1.16f, 0.58f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.2f, 0.6f);
		glVertex2f(1.175f, 0.51f);
		glVertex2f(1.16f, 0.58f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.115f, 0.453f);
		glVertex2f(1.085f, 0.453f);
		glVertex2f(1.073f, 0.47f);
		glVertex2f(1.08f, 0.48f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.115f, 0.453f);
		glVertex2f(1.093f, 0.51f);
		glVertex2f(1.08f, 0.505f);
		glVertex2f(1.08f, 0.48f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.115f, 0.453f);
		glVertex2f(1.17f, 0.46f);
		glVertex2f(1.16f, 0.44f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.115f, 0.453f);
		glVertex2f(1.105f, 0.425f);
		glVertex2f(1.16f, 0.44f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.02f, 0.318f);
		glVertex2f(0.995f, 0.31f);
		glVertex2f(1.02f, 0.29f);
		glVertex2f(1.04f, 0.283f);
		glVertex2f(1.063f, 0.283f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.02f, 0.318f);
		glVertex2f(1.06f, 0.342f);
		glVertex2f(1.11f, 0.305f);
		glVertex2f(1.093f, 0.283f);
		glVertex2f(1.063f, 0.283f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.06f, 0.342f);
		glVertex2f(1.08f, 0.36f);
		glVertex2f(1.093f, 0.37f);
		glVertex2f(1.108f, 0.37f);
		glVertex2f(1.12f, 0.33f);
		glVertex2f(1.11f, 0.305f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.063f, 0.287f);
		glVertex2f(1.093f, 0.287f);
		glVertex2f(1.11f, 0.27f);
		glVertex2f(1.12f, 0.258f);
		glVertex2f(1.145f, 0.227f);
		glVertex2f(1.13f, 0.22f);
		glVertex2f(1.08f, 0.21f);
		glVertex2f(1.06f, 0.215f);
		glVertex2f(1.043f, 0.24f);
		glVertex2f(1.043f, 0.255f);
	glEnd();
	
	glBegin(GL_POLYGON);
		glVertex2f(1.043f, 0.24f);
		glVertex2f(1.06f, 0.215f);
		glVertex2f(0.94f, 0.185f);
		glVertex2f(0.945f, 0.21f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.94f, 0.185f);
		glVertex2f(0.925f, 0.19f);
		glVertex2f(0.925f, 0.21f);
		glVertex2f(0.935f, 0.218f);
		glVertex2f(0.945f, 0.21f);
	glEnd();
	
	glBegin(GL_POLYGON);
		glVertex2f(1.12f, 0.258f);
		glVertex2f(1.2f, 0.263f);
		glVertex2f(1.145f, 0.227f);
		glVertex2f(1.13f, 0.22f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.2f, 0.263f);
		glVertex2f(1.145f, 0.227f);
		glVertex2f(1.17f, 0.23f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.2f, 0.263f);
		glVertex2f(1.23f, 0.253f);
		glVertex2f(1.24f, 0.23f);
		glVertex2f(1.225f, 0.22f);
		glVertex2f(1.17f, 0.23f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.08f, 0.21f);
		glVertex2f(1.088f, 0.16f);
		glVertex2f(1.12f, 0.02f);
		glVertex2f(1.13f, 0.22f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.08f, 0.1f);
		glVertex2f(1.088f, 0.16f);
		glVertex2f(1.12f, 0.02f);
		glVertex2f(1.11f, -0.01f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.08f, 0.1f);
		glVertex2f(1.06f, 0.05f);
		glVertex2f(1.07f, -0.04f);
		glVertex2f(1.11f, -0.01f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.03f, 0.01f);
		glVertex2f(1.06f, 0.05f);
		glVertex2f(1.07f, -0.04f);
		glVertex2f(1.03f, -0.066f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(1.03f, 0.01f);
		glVertex2f(1.0f, -0.02f);
		glVertex2f(0.98f, -0.093f);
		glVertex2f(1.03f, -0.066f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.9f, -0.08f);
		glVertex2f(1.0f, -0.02f);
		glVertex2f(0.98f, -0.093f);
		glVertex2f(0.94f, -0.11f);
		glVertex2f(0.9f, -0.12f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.9f, -0.08f);
		glVertex2f(0.86f, -0.09f);
		glVertex2f(0.82f, -0.095f);
		glVertex2f(0.78f, -0.105f);
		glVertex2f(0.82f, -0.118f);
		glVertex2f(0.84f, -0.12f);
		glVertex2f(0.87f, -0.124f);
		glVertex2f(0.9f, -0.12f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.82f, -0.095f);
		glVertex2f(0.78f, -0.105f);
		glVertex2f(0.78f, -0.09f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(0.73f, -0.07f);
		glVertex2f(0.78f, -0.105f);
		glVertex2f(0.78f, -0.09f);
	glEnd();

	glPopMatrix();
}

void Display_National(void) {
	glPushMatrix();
	glColor3f(0.29803f, 0.53725f, 0.63922f);

	glBegin(GL_TRIANGLE_STRIP);	//N
		glVertex2f(-2.55f, -0.475f);
		glVertex2f(-2.52f, -0.475f);
		glVertex2f(-2.55f, -0.6f);
		glVertex2f(-2.52f, -0.7f);
		glVertex2f(-2.55f, -0.7f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//N
		glVertex2f(-2.52f, -0.475f);
		glVertex2f(-2.52f, -0.53f);
		glVertex2f(-2.395f, -0.655f);
		glVertex2f(-2.395f, -0.7f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//N
		glVertex2f(-2.395f, -0.475f);
		glVertex2f(-2.36f, -0.475f);
		glVertex2f(-2.395f, -0.655f);
		glVertex2f(-2.36f, -0.7f);
		glVertex2f(-2.395f, -0.7f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//a
		glVertex2f(-2.3f, -0.585f);
		glVertex2f(-2.273f, -0.59f);
		glVertex2f(-2.28f, -0.553f);
		glVertex2f(-2.26f, -0.57f);
		glVertex2f(-2.26f, -0.543f);
		glVertex2f(-2.24f, -0.56f);
		glVertex2f(-2.24f, -0.54f);
		glVertex2f(-2.2f, -0.562f);
		glVertex2f(-2.2f, -0.54f);
		glVertex2f(-2.19f, -0.6f);
		glVertex2f(-2.18f, -0.548f);
		glVertex2f(-2.19f, -0.6f);
		glVertex2f(-2.16f, -0.58f);
		glVertex2f(-2.185f, -0.685f);
		glVertex2f(-2.16f, -0.69f);
		glVertex2f(-2.185f, -0.7f);
		glVertex2f(-2.15f, -0.7f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//a
		glVertex2f(-2.19f, -0.6f);
		glVertex2f(-2.19f, -0.625f);
		glVertex2f(-2.24f, -0.608f);
		glVertex2f(-2.26f, -0.638f);
		glVertex2f(-2.27f, -0.615f);
		glVertex2f(-2.273f, -0.65f);
		glVertex2f(-2.29f, -0.63f);
		glVertex2f(-2.276f, -0.66f);
		glVertex2f(-2.3f, -0.643f);
		glVertex2f(-2.276f, -0.67f);
		glVertex2f(-2.305f, -0.67f);
		glVertex2f(-2.26f, -0.688f);
		glVertex2f(-2.28f, -0.7f);
		glVertex2f(-2.24f, -0.69f);
		glVertex2f(-2.25f, -0.71f);
		glVertex2f(-2.22f, -0.685f);
		glVertex2f(-2.22f, -0.708f);
		glVertex2f(-2.185f, -0.66f);
		glVertex2f(-2.185f, -0.685f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//t
		glVertex2f(-2.06f, -0.485f);
		glVertex2f(-2.09f, -0.5f);
		glVertex2f(-2.06f, -0.678f);
		glVertex2f(-2.09f, -0.69f);
		glVertex2f(-2.053f, -0.685f);
		glVertex2f(-2.065f, -0.71f);
		glVertex2f(-2.03f, -0.688f);
		glVertex2f(-2.03f, -0.71f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//t
		glVertex2f(-2.11f, -0.54f);
		glVertex2f(-2.11f, -0.56f);
		glVertex2f(-2.035f, -0.54f);
		glVertex2f(-2.035f, -0.56f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//i
		glVertex2f(-1.98f, -0.48f);
		glVertex2f(-1.95f, -0.48f);
		glVertex2f(-1.98f, -0.51f);
		glVertex2f(-1.95f, -0.51f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//i
		glVertex2f(-1.98f, -0.54f);
		glVertex2f(-1.95f, -0.54f);
		glVertex2f(-1.98f, -0.705f);
		glVertex2f(-1.95f, -0.705f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//o
		glVertex2f(-1.9f, -0.6f);
		glVertex2f(-1.867f, -0.59f);
		glVertex2f(-1.88f, -0.56f);
		glVertex2f(-1.85f, -0.57f);
		glVertex2f(-1.84f, -0.54f);
		glVertex2f(-1.82f, -0.56f);
		glVertex2f(-1.82f, -0.536f);
		glVertex2f(-1.8f, -0.565f);
		glVertex2f(-1.8f, -0.54f);
		glVertex2f(-1.783f, -0.58f);
		glVertex2f(-1.77f, -0.555f);
		glVertex2f(-1.775f, -0.6f);
		glVertex2f(-1.75f, -0.58f);
		glVertex2f(-1.775f, -0.64f);
		glVertex2f(-1.743f, -0.62f);
		glVertex2f(-1.778f, -0.66f);
		glVertex2f(-1.75f, -0.665f);
		glVertex2f(-1.8f, -0.683f);
		glVertex2f(-1.77f, -0.69f);
		glVertex2f(-1.82f, -0.689f);
		glVertex2f(-1.8f, -0.71f);
		glVertex2f(-1.845f, -0.683f);
		glVertex2f(-1.83f, -0.713f);
		glVertex2f(-1.865f, -0.663f);
		glVertex2f(-1.86f, -0.7f);
		glVertex2f(-1.87f, -0.64f);
		glVertex2f(-1.89f, -0.67f);
		glVertex2f(-1.873f, -0.62f);
		glVertex2f(-1.903f, -0.63f);
		glVertex2f(-1.867f, -0.59f);
		glVertex2f(-1.9f, -0.6f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//n
		glVertex2f(-1.69f, -0.54f);
		glVertex2f(-1.66f, -0.54f);
		glVertex2f(-1.69f, -0.705f);
		glVertex2f(-1.66f, -0.705f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//n
		glVertex2f(-1.66f, -0.56f);
		glVertex2f(-1.66f, -0.583f);
		glVertex2f(-1.63f, -0.54f);
		glVertex2f(-1.63f, -0.563f);
		glVertex2f(-1.6f, -0.538f);
		glVertex2f(-1.605f, -0.563f);
		glVertex2f(-1.57f, -0.55f);
		glVertex2f(-1.583f, -0.58f);
		glVertex2f(-1.55f, -0.58f);
		glVertex2f(-1.583f, -0.705f);
		glVertex2f(-1.55f, -0.705f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//a
		glVertex2f(-1.49f, -0.585f);
		glVertex2f(-1.463f, -0.59f);
		glVertex2f(-1.47f, -0.553f);
		glVertex2f(-1.45f, -0.57f);
		glVertex2f(-1.45f, -0.543f);
		glVertex2f(-1.43f, -0.56f);
		glVertex2f(-1.43f, -0.54f);
		glVertex2f(-1.39f, -0.562f);
		glVertex2f(-1.39f, -0.54f);
		glVertex2f(-1.38f, -0.6f);
		glVertex2f(-1.37f, -0.548f);
		glVertex2f(-1.38f, -0.6f);
		glVertex2f(-1.35f, -0.58f);
		glVertex2f(-1.375f, -0.685f);
		glVertex2f(-1.35f, -0.69f);
		glVertex2f(-1.375f, -0.7f);
		glVertex2f(-1.34f, -0.7f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//a
		glVertex2f(-1.38f, -0.6f);
		glVertex2f(-1.38f, -0.625f);
		glVertex2f(-1.43f, -0.608f);
		glVertex2f(-1.45f, -0.638f);
		glVertex2f(-1.46f, -0.615f);
		glVertex2f(-1.463f, -0.65f);
		glVertex2f(-1.48f, -0.63f);
		glVertex2f(-1.466f, -0.66f);
		glVertex2f(-1.49f, -0.643f);
		glVertex2f(-1.466f, -0.67f);
		glVertex2f(-1.495f, -0.67f);
		glVertex2f(-1.45f, -0.688f);
		glVertex2f(-1.47f, -0.7f);
		glVertex2f(-1.43f, -0.69f);
		glVertex2f(-1.44f, -0.71f);
		glVertex2f(-1.41f, -0.685f);
		glVertex2f(-1.41f, -0.708f);
		glVertex2f(-1.375f, -0.66f);
		glVertex2f(-1.375f, -0.685f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//l
		glVertex2f(-1.285f, -0.475f);
		glVertex2f(-1.255f, -0.475f);
		glVertex2f(-1.285f, -0.708f);
		glVertex2f(-1.255f, -0.708f);
	glEnd();

	glPopMatrix();
}

void Display_Chung(void) {
	glPushMatrix();

	glBegin(GL_TRIANGLE_STRIP);	//c
		glVertex2f(-0.923f, -0.545f);
		glVertex2f(-0.95f, -0.546f);
		glVertex2f(-0.925f, -0.53f);
		glVertex2f(-0.97f, -0.52f);
		glVertex2f(-0.95f, -0.495f);
		glVertex2f(-0.995f, -0.505f);
		glVertex2f(-0.98f, -0.48f);
		glVertex2f(-1.02f, -0.503f);
		glVertex2f(-1.03f, -0.475f);
		glVertex2f(-1.05f, -0.51f);
		glVertex2f(-1.075f, -0.49f);
		glVertex2f(-1.085f, -0.54f);
		glVertex2f(-1.112f, -0.53f);
		glVertex2f(-1.095f, -0.57f);
		glVertex2f(-1.123f, -0.557f);
		glVertex2f(-1.095f, -0.61f);
		glVertex2f(-1.123f, -0.62f);
		glVertex2f(-1.088f, -0.64f);
		glVertex2f(-1.11f, -0.66f);
		glVertex2f(-1.06f, -0.67f);
		glVertex2f(-1.07f, -0.7f);
		glVertex2f(-1.03f, -0.683f);
		glVertex2f(-1.035f, -0.713f);
		glVertex2f(-1.01f, -0.684f);
		glVertex2f(-1.0f, -0.713f);
		glVertex2f(-0.98f, -0.674f);
		glVertex2f(-0.96f, -0.695f);
		glVertex2f(-0.953f, -0.645f);
		glVertex2f(-0.923f, -0.65f);
		glVertex2f(-0.95f, -0.63f);
		glVertex2f(-0.92f, -0.63f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//h
		glVertex2f(-0.862f, -0.475f);
		glVertex2f(-0.835f, -0.475f);
		glVertex2f(-0.862f, -0.705f);
		glVertex2f(-0.835f, -0.705f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//h
		glVertex2f(-0.835f, -0.56f);
		glVertex2f(-0.835f, -0.583f);
		glVertex2f(-0.805f, -0.54f);
		glVertex2f(-0.805f, -0.563f);
		glVertex2f(-0.775f, -0.538f);
		glVertex2f(-0.78f, -0.563f);
		glVertex2f(-0.745f, -0.55f);
		glVertex2f(-0.758f, -0.58f);
		glVertex2f(-0.725f, -0.58f);
		glVertex2f(-0.758f, -0.705f);
		glVertex2f(-0.725f, -0.705f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//u
		glVertex2f(-0.662f, -0.54f);
		glVertex2f(-0.63f, -0.54f);
		glVertex2f(-0.662f, -0.66f);
		glVertex2f(-0.63f, -0.65f);
		glVertex2f(-0.653f, -0.69f);
		glVertex2f(-0.625f, -0.67f);
		glVertex2f(-0.635f, -0.705f);
		glVertex2f(-0.61f, -0.685f);
		glVertex2f(-0.61f, -0.715f);
		glVertex2f(-0.59f, -0.686f);
		glVertex2f(-0.595f, -0.715f);
		glVertex2f(-0.58f, -0.683f);
		glVertex2f(-0.57f, -0.702f);
		glVertex2f(-0.55f, -0.66f);
		glVertex2f(-0.55f, -0.683f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//u
		glVertex2f(-0.55f, -0.54f);
		glVertex2f(-0.52f, -0.54f);
		glVertex2f(-0.55f, -0.705f);
		glVertex2f(-0.52f, -0.705f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//n
		glVertex2f(-0.46f, -0.54f);
		glVertex2f(-0.43f, -0.54f);
		glVertex2f(-0.46f, -0.705f);
		glVertex2f(-0.43f, -0.705f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//n
		glVertex2f(-0.43f, -0.56f);
		glVertex2f(-0.43f, -0.583f);
		glVertex2f(-0.4f, -0.54f);
		glVertex2f(-0.4f, -0.563f);
		glVertex2f(-0.37f, -0.538f);
		glVertex2f(-0.375f, -0.563f);
		glVertex2f(-0.34f, -0.55f);
		glVertex2f(-0.353f, -0.58f);
		glVertex2f(-0.32f, -0.58f);
		glVertex2f(-0.353f, -0.705f);
		glVertex2f(-0.32f, -0.705f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//g
		glVertex2f(-0.15f, -0.558f);
		glVertex2f(-0.15f, -0.59f);
		glVertex2f(-0.18f, -0.537f);
		glVertex2f(-0.17f, -0.565f);
		glVertex2f(-0.2f, -0.535f);
		glVertex2f(-0.19f, -0.56f);
		glVertex2f(-0.22f, -0.538f);
		glVertex2f(-0.21f, -0.563f);
		glVertex2f(-0.24f, -0.55f);
		glVertex2f(-0.23f, -0.58f);
		glVertex2f(-0.26f, -0.58f);
		glVertex2f(-0.236f, -0.6f);
		glVertex2f(-0.27f, -0.62f);
		glVertex2f(-0.236f, -0.64f);
		glVertex2f(-0.265f, -0.65f);
		glVertex2f(-0.225f, -0.667f);
		glVertex2f(-0.25f, -0.68f);
		glVertex2f(-0.21f, -0.683f);
		glVertex2f(-0.22f, -0.705f);
		glVertex2f(-0.19f, -0.685f);
		glVertex2f(-0.19f, -0.71f);
		glVertex2f(-0.17f, -0.678f);
		glVertex2f(-0.17f, -0.705f);
		glVertex2f(-0.15f, -0.65f);
		glVertex2f(-0.15f, -0.685f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//g
		glVertex2f(-0.15f, -0.54f);
		glVertex2f(-0.12f, -0.54f);
		glVertex2f(-0.15f, -0.72f);
		glVertex2f(-0.12f, -0.73f);
		glVertex2f(-0.16f, -0.74f);
		glVertex2f(-0.14f, -0.76f);
		glVertex2f(-0.18f, -0.75f);
		glVertex2f(-0.18f, -0.775f);
		glVertex2f(-0.2f, -0.753f);
		glVertex2f(-0.2f, -0.778f);
		glVertex2f(-0.22f, -0.75f);
		glVertex2f(-0.22f, -0.773f);
		glVertex2f(-0.23f, -0.74f);
		glVertex2f(-0.26f, -0.745f);
		glVertex2f(-0.233f, -0.725f);
		glVertex2f(-0.262f, -0.725f);
	glEnd();

	glPopMatrix();
}

void Display_Hsing(void) {
	glPushMatrix();

	glBegin(GL_TRIANGLE_STRIP);	//H
		glVertex2f(0.023f, -0.475f);
		glVertex2f(0.055f, -0.475f);
		glVertex2f(0.023f, -0.705f);
		glVertex2f(0.055f, -0.705f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//H
		glVertex2f(0.055f, -0.57f);
		glVertex2f(0.055f, -0.603f);
		glVertex2f(0.18f, -0.57f);
		glVertex2f(0.18f, -0.603f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//H
		glVertex2f(0.18f, -0.475f);
		glVertex2f(0.213f, -0.475f);
		glVertex2f(0.18f, -0.705f);
		glVertex2f(0.213f, -0.705f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//s
		glVertex2f(0.4f, -0.585f);
		glVertex2f(0.375f, -0.59f);
		glVertex2f(0.398f, -0.57f);
		glVertex2f(0.365f, -0.57f);
		glVertex2f(0.38f, -0.547f);
		glVertex2f(0.355f, -0.56f);
		glVertex2f(0.36f, -0.54f);
		glVertex2f(0.34f, -0.558f);
		glVertex2f(0.338f, -0.536f);
		glVertex2f(0.32f, -0.56f);
		glVertex2f(0.31f, -0.54f);
		glVertex2f(0.302f, -0.569f);
		glVertex2f(0.28f, -0.555f);
		glVertex2f(0.298f, -0.58f);
		glVertex2f(0.27f, -0.574f);
		glVertex2f(0.302f, -0.59f);
		glVertex2f(0.27f, -0.6f);
		glVertex2f(0.32f, -0.6f);
		glVertex2f(0.31f, -0.63f);
		glVertex2f(0.38f, -0.618f);
		glVertex2f(0.365f, -0.644f);
		glVertex2f(0.408f, -0.64f);
		glVertex2f(0.381f, -0.66f);
		glVertex2f(0.408f, -0.67f);
		glVertex2f(0.375f, -0.676f);
		glVertex2f(0.395f, -0.69f);
		glVertex2f(0.36f, -0.685f);
		glVertex2f(0.36f, -0.712f);
		glVertex2f(0.34f, -0.69f);
		glVertex2f(0.34f, -0.715f);
		glVertex2f(0.308f, -0.68f);
		glVertex2f(0.3f, -0.703f);
		glVertex2f(0.297f, -0.665f);
		glVertex2f(0.277f, -0.68f);
		glVertex2f(0.295f, -0.653f);
		glVertex2f(0.268f, -0.653f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//i
		glVertex2f(0.46f, -0.48f);
		glVertex2f(0.49f, -0.48f);
		glVertex2f(0.46f, -0.51f);
		glVertex2f(0.49f, -0.51f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//i
		glVertex2f(0.46f, -0.54f);
		glVertex2f(0.49f, -0.54f);
		glVertex2f(0.46f, -0.705f);
		glVertex2f(0.49f, -0.705f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//n
		glVertex2f(0.553f, -0.54f);
		glVertex2f(0.583f, -0.54f);
		glVertex2f(0.553f, -0.705f);
		glVertex2f(0.583f, -0.705f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//n
		glVertex2f(0.583f, -0.56f);
		glVertex2f(0.583f, -0.583f);
		glVertex2f(0.613f, -0.54f);
		glVertex2f(0.613f, -0.563f);
		glVertex2f(0.643f, -0.538f);
		glVertex2f(0.638f, -0.563f);
		glVertex2f(0.673f, -0.55f);
		glVertex2f(0.66f, -0.58f);
		glVertex2f(0.693f, -0.58f);
		glVertex2f(0.66f, -0.705f);
		glVertex2f(0.693f, -0.705f);
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP);	//g
		glVertex2f(0.863f, -0.558f);
		glVertex2f(0.863f, -0.59f);
		glVertex2f(0.833f, -0.537f);
		glVertex2f(0.843f, -0.565f);
		glVertex2f(0.813f, -0.535f);
		glVertex2f(0.823f, -0.56f);
		glVertex2f(0.793f, -0.538f);
		glVertex2f(0.803f, -0.563f);
		glVertex2f(0.773f, -0.55f);
		glVertex2f(0.783f, -0.58f);
		glVertex2f(0.753f, -0.58f);
		glVertex2f(0.777f, -0.6f);
		glVertex2f(0.743f, -0.62f);
		glVertex2f(0.777f, -0.64f);
		glVertex2f(0.748f, -0.65f);
		glVertex2f(0.788f, -0.667f);
		glVertex2f(0.763f, -0.68f);
		glVertex2f(0.803f, -0.683f);
		glVertex2f(0.793f, -0.705f);
		glVertex2f(0.823f, -0.685f);
		glVertex2f(0.823f, -0.71f);
		glVertex2f(0.843f, -0.678f);
		glVertex2f(0.843f, -0.705f);
		glVertex2f(0.863f, -0.65f);
		glVertex2f(0.863f, -0.685f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//g
		glVertex2f(0.863f, -0.54f);
		glVertex2f(0.893f, -0.54f);
		glVertex2f(0.863f, -0.72f);
		glVertex2f(0.893f, -0.73f);
		glVertex2f(0.853f, -0.74f);
		glVertex2f(0.873f, -0.76f);
		glVertex2f(0.833f, -0.75f);
		glVertex2f(0.833f, -0.775f);
		glVertex2f(0.813f, -0.753f);
		glVertex2f(0.813f, -0.778f);
		glVertex2f(0.793f, -0.75f);
		glVertex2f(0.793f, -0.773f);
		glVertex2f(0.783f, -0.74f);
		glVertex2f(0.753f, -0.745f);
		glVertex2f(0.78f, -0.725f);
		glVertex2f(0.751f, -0.725f);
	glEnd();

	glPopMatrix();
}

void Display_University(void) {
	glPushMatrix();

	glBegin(GL_TRIANGLE_STRIP);	//U
		glVertex2f(1.032f, -0.475f);
		glVertex2f(1.065f, -0.475f);
		glVertex2f(1.032f, -0.64f);
		glVertex2f(1.065f, -0.64f);
		glVertex2f(1.05f, -0.68f);
		glVertex2f(1.075f, -0.66f);
		glVertex2f(1.1f, -0.71f);
		glVertex2f(1.1f, -0.68f);
		glVertex2f(1.125f, -0.715f);
		glVertex2f(1.125f, -0.685f);
		glVertex2f(1.16f, -0.71f);
		glVertex2f(1.15f, -0.682f);
		glVertex2f(1.195f, -0.693f);
		glVertex2f(1.18f, -0.665f);
		glVertex2f(1.22f, -0.66f);
		glVertex2f(1.188f, -0.64f);
		glVertex2f(1.22f, -0.475f);
		glVertex2f(1.188f, -0.475f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//n
		glVertex2f(1.286f, -0.54f);
		glVertex2f(1.316f, -0.54f);
		glVertex2f(1.286f, -0.705f);
		glVertex2f(1.316f, -0.705f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//n
		glVertex2f(1.316f, -0.56f);
		glVertex2f(1.316f, -0.583f);
		glVertex2f(1.346f, -0.54f);
		glVertex2f(1.346f, -0.563f);
		glVertex2f(1.376f, -0.538f);
		glVertex2f(1.371f, -0.563f);
		glVertex2f(1.406f, -0.55f);
		glVertex2f(1.393f, -0.58f);
		glVertex2f(1.426f, -0.58f);
		glVertex2f(1.393f, -0.705f);
		glVertex2f(1.426f, -0.705f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//i
		glVertex2f(1.487f, -0.48f);
		glVertex2f(1.515f, -0.48f);
		glVertex2f(1.487f, -0.51f);
		glVertex2f(1.515f, -0.51f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//i
		glVertex2f(1.487f, -0.54f);
		glVertex2f(1.515f, -0.54f);
		glVertex2f(1.487f, -0.705f);
		glVertex2f(1.515f, -0.705f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//v
		glVertex2f(1.56f, -0.54f);
		glVertex2f(1.595f, -0.54f);
		glVertex2f(1.63f, -0.705f);
		glVertex2f(1.644f, -0.672f);
		glVertex2f(1.66f, -0.705f);
		glVertex2f(1.69f, -0.54f);
		glVertex2f(1.723f, -0.54f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//e
		glVertex2f(1.787f, -0.607f);
		glVertex2f(1.787f, -0.63f);
		glVertex2f(1.885f, -0.607f);
		glVertex2f(1.918f, -0.628f);
		glVertex2f(1.885f, -0.595f);
		glVertex2f(1.913f, -0.59f);
		glVertex2f(1.87f, -0.573f);
		glVertex2f(1.89f, -0.554f);
		glVertex2f(1.857f, -0.563f);
		glVertex2f(1.86f, -0.538f);
		glVertex2f(1.84f, -0.56f);
		glVertex2f(1.84f, -0.535f);
		glVertex2f(1.82f, -0.563f);
		glVertex2f(1.82f, -0.537f);
		glVertex2f(1.797f, -0.58f);
		glVertex2f(1.79f, -0.55f);
		glVertex2f(1.787f, -0.607f);
		glVertex2f(1.76f, -0.58f);
		glVertex2f(1.787f, -0.63f);
		glVertex2f(1.753f, -0.62f);
		glVertex2f(1.793f, -0.66f);
		glVertex2f(1.76f, -0.66f);
		glVertex2f(1.82f, -0.685f);
		glVertex2f(1.78f, -0.69f);
		glVertex2f(1.82f, -0.685f);
		glVertex2f(1.82f, -0.713f);
		glVertex2f(1.84f, -0.69f);
		glVertex2f(1.84f, -0.717f);
		glVertex2f(1.863f, -0.683f);
		glVertex2f(1.87f, -0.71f);
		glVertex2f(1.885f, -0.658f);
		glVertex2f(1.898f, -0.69f);
		glVertex2f(1.885f, -0.658f);
		glVertex2f(1.91f, -0.67f);
		glVertex2f(1.885f, -0.658f);
		glVertex2f(1.915f, -0.658f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//r
		glVertex2f(1.965f, -0.54f);
		glVertex2f(1.996f, -0.54f);
		glVertex2f(1.965f, -0.705f);
		glVertex2f(1.996f, -0.705f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//r
		glVertex2f(1.996f, -0.56f);
		glVertex2f(1.996f, -0.59f);
		glVertex2f(2.015f, -0.54f);
		glVertex2f(2.01f, -0.572f);
		glVertex2f(2.03f, -0.536f);
		glVertex2f(2.03f, -0.567f);
		glVertex2f(2.06f, -0.545f);
		glVertex2f(2.05f, -0.57f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//s
		glVertex2f(2.22f, -0.585f);
		glVertex2f(2.195f, -0.59f);
		glVertex2f(2.218f, -0.57f);
		glVertex2f(2.185f, -0.57f);
		glVertex2f(2.2f, -0.547f);
		glVertex2f(2.175f, -0.56f);
		glVertex2f(2.18f, -0.54f);
		glVertex2f(2.16f, -0.558f);
		glVertex2f(2.158f, -0.536f);
		glVertex2f(2.14f, -0.56f);
		glVertex2f(2.13f, -0.54f);
		glVertex2f(2.122f, -0.569f);
		glVertex2f(2.1f, -0.555f);
		glVertex2f(2.118f, -0.58f);
		glVertex2f(2.09f, -0.574f);
		glVertex2f(2.122f, -0.59f);
		glVertex2f(2.09f, -0.6f);
		glVertex2f(2.14f, -0.6f);
		glVertex2f(2.13f, -0.63f);
		glVertex2f(2.2f, -0.618f);
		glVertex2f(2.185f, -0.644f);
		glVertex2f(2.228f, -0.64f);
		glVertex2f(2.201f, -0.66f);
		glVertex2f(2.228f, -0.67f);
		glVertex2f(2.195f, -0.676f);
		glVertex2f(2.215f, -0.69f);
		glVertex2f(2.18f, -0.685f);
		glVertex2f(2.18f, -0.712f);
		glVertex2f(2.16f, -0.69f);
		glVertex2f(2.16f, -0.715f);
		glVertex2f(2.128f, -0.68f);
		glVertex2f(2.12f, -0.703f);
		glVertex2f(2.117f, -0.665f);
		glVertex2f(2.097f, -0.68f);
		glVertex2f(2.115f, -0.653f);
		glVertex2f(2.088f, -0.653f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//i
		glVertex2f(2.277f, -0.48f);
		glVertex2f(2.305f, -0.48f);
		glVertex2f(2.277f, -0.51f);
		glVertex2f(2.305f, -0.51f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//i
		glVertex2f(2.277f, -0.54f);
		glVertex2f(2.305f, -0.54f);
		glVertex2f(2.277f, -0.705f);
		glVertex2f(2.305f, -0.705f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//t
		glVertex2f(2.405f, -0.485f);
		glVertex2f(2.375f, -0.5f);
		glVertex2f(2.405f, -0.678f);
		glVertex2f(2.375f, -0.69f);
		glVertex2f(2.412f, -0.685f);
		glVertex2f(2.4f, -0.71f);
		glVertex2f(2.435f, -0.688f);
		glVertex2f(2.435f, -0.71f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//t
		glVertex2f(2.355f, -0.54f);
		glVertex2f(2.355f, -0.56f);
		glVertex2f(2.43f, -0.54f);
		glVertex2f(2.43f, -0.56f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);	//y
		glVertex2f(2.465f, -0.54f);
		glVertex2f(2.495f, -0.54f);
		glVertex2f(2.527f, -0.7f);
		glVertex2f(2.543f, -0.663f);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);	//y
		glVertex2f(2.587f, -0.54f);
		glVertex2f(2.62f, -0.54f);
		glVertex2f(2.543f, -0.663f);
		glVertex2f(2.556f, -0.72f);
		glVertex2f(2.527f, -0.7f);
		glVertex2f(2.545f, -0.74f);
		glVertex2f(2.523f, -0.72f);
		glVertex2f(2.53f, -0.76f);
		glVertex2f(2.51f, -0.742f);
		glVertex2f(2.51f, -0.774f);
		glVertex2f(2.502f, -0.749f);
		glVertex2f(2.478f, -0.774f);
		glVertex2f(2.475f, -0.749f);
	glEnd();

	glPopMatrix();
}

void Display_logo(void) {
	glPushMatrix();

	glBegin(GL_POLYGON);
		glVertex2f(1.705f, -0.03f);
		glVertex2f(1.8f, 0.02f);
		glVertex2f(1.755f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(1.9f, 0.05f);
		glVertex2f(1.8f, 0.02f);
		glVertex2f(1.755f, 0.1f);
		glVertex2f(1.785f, 0.2f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(1.9f, 0.05f);
		glVertex2f(2.0f, 0.07f);
		glVertex2f(1.81f, 0.32f);
		glVertex2f(1.785f, 0.2f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.06f, 0.08f);
		glVertex2f(2.0f, 0.07f);
		glVertex2f(1.81f, 0.32f);
		glVertex2f(1.82f, 0.42f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.06f, 0.08f);
		glVertex2f(2.12f, 0.082f);
		glVertex2f(1.82f, 0.5f);
		glVertex2f(1.82f, 0.42f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.18f, 0.08f);
		glVertex2f(2.12f, 0.082f);
		glVertex2f(1.82f, 0.5f);
		glVertex2f(1.81f, 0.6f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.18f, 0.08f);
		glVertex2f(2.24f, 0.07f);
		glVertex2f(1.79f, 0.675f);
		glVertex2f(1.81f, 0.6f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.24f, 0.07f);
		glVertex2f(2.308f, 0.19f);
		glVertex2f(2.27f, 0.264f);
		glVertex2f(2.24f, 0.315f);
		glVertex2f(2.22f, 0.35f);
		glVertex2f(2.18f, 0.4f);
		glVertex2f(2.15f, 0.438f);
		glVertex2f(2.11f, 0.48f);
		glVertex2f(2.08f, 0.508f);
		glVertex2f(2.047f, 0.535f);
		glVertex2f(2.0f, 0.568f);
		glVertex2f(1.94f, 0.605f);
		glVertex2f(1.86f, 0.648f);
		glVertex2f(1.79f, 0.675f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.308f, 0.19f);
		glVertex2f(2.24f, 0.07f);
		glVertex2f(2.36f, 0.045f);
		glVertex2f(2.345f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(1.76f, 0.77f);
		glVertex2f(1.773f, 0.725f);
		glVertex2f(1.86f, 0.695f);
		glVertex2f(1.88f, 0.738f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.0f, 0.72f);
		glVertex2f(1.94f, 0.66f);
		glVertex2f(1.86f, 0.695f);
		glVertex2f(1.88f, 0.738f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.0f, 0.72f);
		glVertex2f(1.94f, 0.66f);
		glVertex2f(2.02f, 0.61f);
		glVertex2f(2.1f, 0.712f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.18f, 0.712f);
		glVertex2f(2.08f, 0.557f);
		glVertex2f(2.02f, 0.61f);
		glVertex2f(2.1f, 0.712f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.18f, 0.712f);
		glVertex2f(2.08f, 0.557f);
		glVertex2f(2.142f, 0.5f);
		glVertex2f(2.28f, 0.72f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.4f, 0.733f);
		glVertex2f(2.197f, 0.44f);
		glVertex2f(2.142f, 0.5f);
		glVertex2f(2.28f, 0.72f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.4f, 0.733f);
		glVertex2f(2.197f, 0.44f);
		glVertex2f(2.24f, 0.38f);
		glVertex2f(2.53f, 0.76f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.503f, 0.7f);
		glVertex2f(2.197f, 0.44f);
		glVertex2f(2.24f, 0.38f);
		glVertex2f(2.473f, 0.6f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.473f, 0.6f);
		glVertex2f(2.197f, 0.44f);
		glVertex2f(2.24f, 0.38f);
		glVertex2f(2.46f, 0.54f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.46f, 0.54f);
		glVertex2f(2.197f, 0.44f);
		glVertex2f(2.24f, 0.38f);
		glVertex2f(2.46f, 0.4f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.47f, 0.3f);
		glVertex2f(2.46f, 0.4f);
		glVertex2f(2.24f, 0.38f);
		glVertex2f(2.295f, 0.295f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.47f, 0.3f);
		glVertex2f(2.49f, 0.2f);
		glVertex2f(2.33f, 0.2f);
		glVertex2f(2.295f, 0.295f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.523f, 0.1f);
		glVertex2f(2.49f, 0.2f);
		glVertex2f(2.33f, 0.2f);
		glVertex2f(2.363f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.523f, 0.1f);
		glVertex2f(2.58f, -0.04f);
		glVertex2f(2.373f, 0.045f);
		glVertex2f(2.363f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.02f, 0.61f);
		glVertex2f(2.142f, 0.5f);
		glVertex2f(2.473f, 0.6f);
		glVertex2f(2.503f, 0.7f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.4f, 0.733f);
		glVertex2f(2.53f, 0.76f);
		glVertex2f(2.503f, 0.7f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(2.4f, 0.733f);
		glVertex2f(2.28f, 0.72f);
		glVertex2f(2.473f, 0.6f);
		glVertex2f(2.503f, 0.7f);
	glEnd();
	
	glBegin(GL_POLYGON);	//左半圓點
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex2f(2.047f, 0.535f);
		glVertex2f(2.0f, 0.5f);
		glVertex2f(1.978f, 0.46f);
		glVertex2f(1.965f, 0.42f);
		glVertex2f(1.965f, 0.37f);
		glVertex2f(1.975f, 0.33f);
		glVertex2f(1.992f, 0.295f);
		glVertex2f(2.02f, 0.26f);
		glVertex2f(2.06f, 0.23f);
		glVertex2f(2.1f, 0.215f);
		glVertex2f(2.16f, 0.212f);
		glVertex2f(2.2f, 0.22f);
		glVertex2f(2.24f, 0.24f);
		glVertex2f(2.27f, 0.264f);
		glVertex2f(2.24f, 0.315f);
		glVertex2f(2.22f, 0.35f);
		glVertex2f(2.18f, 0.4f);
		glVertex2f(2.15f, 0.438f);
		glVertex2f(2.11f, 0.48f);
		glVertex2f(2.08f, 0.508f);
		glColor3f(1.0f, 1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);	//右半圓點
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex2f(2.142f, 0.5f);
		glVertex2f(2.08f, 0.557f);
		glVertex2f(2.12f, 0.567f);
		glVertex2f(2.18f, 0.565f);
		glVertex2f(2.22f, 0.55f);
		glVertex2f(2.26f, 0.525f);
		glColor3f(1.0f, 1.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);	
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex2f(2.142f, 0.5f);
		glVertex2f(2.197f, 0.44f);
		glVertex2f(2.3f, 0.48f);
		glVertex2f(2.26f, 0.525f);
		glColor3f(1.0f, 1.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex2f(2.24f, 0.38f);
		glVertex2f(2.197f, 0.44f);
		glVertex2f(2.3f, 0.48f);
		glVertex2f(2.317f, 0.44f);
		glColor3f(1.0f, 1.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex2f(2.24f, 0.38f);
		glVertex2f(2.317f, 0.44f);
		glVertex2f(2.325f, 0.4f);
		glVertex2f(2.323f, 0.365f);
		glVertex2f(2.315f, 0.33f);
		glVertex2f(2.295f, 0.295f);
		glColor3f(1.0f, 1.0f, 1.0f);
	glEnd();

	glPopMatrix();
}

void Display(void) {
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.29803f, 0.53725f, 0.63922f);

	Display_國();
	Display_立();
	Display_中();
	Display_興();
	Display_大();
	Display_學();
	Display_logo();
	Display_National();
	Display_Chung();
	Display_Hsing();
	Display_University();

	glutSwapBuffers();
}

void reshape(int width, int height)
{
	glViewport(0, 0, width, height); //按照窗体大小制作OpenGL屏幕
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (width <= height)
		glOrtho(-1.5, 1.5, -1.5 * (GLfloat)height / (GLfloat)width, 1.5 * (GLfloat)height / (GLfloat)width, -10.0, 10.0);
	else
		glOrtho(-1.5 * (GLfloat)width / (GLfloat)height, 1.5 * (GLfloat)width / (GLfloat)height, -1.5, 1.5, -10.0, 10.0);
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(1200, 650);
	glutCreateWindow("國立中興大學");
	glutDisplayFunc(Display);
	glutReshapeFunc(reshape);
	glutMainLoop();

	return 0;
}