#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
float t=0, t1=-5.9, t2=0.7;
const float DEG2RAD = 3.14159/180.0;
GLfloat speed=0.02f,speed1=0.01f,speed2=0.015f;
float sc=1, h=0;
int sz=7;
int starc1=255,starc2=255,starc3=255,sky1=31,sky2=63,sky3=96,back1=38,back2=77,back3=115;
void midPointEllipse(float xradius, float yradius, float q)
{
	glBegin(GL_POLYGON);

	for(int i=0; i < 360; i++)
	{
		 //convert degrees into radians
		float degInRad = i*DEG2RAD/q;
		glVertex2f(cos(degInRad)*xradius,sin(degInRad)*yradius);
	}
	glEnd();
}
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)102, 163, 255
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);
	glColor3ub(back1,back2,back3);//38, 77, 115
	glBegin(GL_QUADS);
    glVertex2f(-1.0f,1.0f);
	glVertex2f(-1.0f,-1.0f);
	glVertex2f(1.0f,-1.0f);
	glVertex2f(1.0f,1.0f);
	glEnd();

    glColor3ub(25, 50, 77);
    glLineWidth(8);
	glBegin(GL_LINES);
    glVertex2f(-1.0f,-0.6f);
	glVertex2f(1.0f,-0.6f);
	glEnd();

	glPointSize(2);
    glBegin(GL_POINTS);

    glColor3ub(starc1,starc2,starc3);//.................................star255,255,255
    glVertex2f(-0.0f,0.79f);
    glVertex2f(-0.0f,0.9f);
    glVertex2f(-0.07f,0.9f);
    glVertex2f(-0.07f,0.7f);
    glVertex2f(-0.03f,0.75f);
    glVertex2f(-0.03f,0.85f);
    glVertex2f(-0.03f,0.95f);
    glVertex2f(-0.13f,0.79f);
    glVertex2f(-0.13f,0.9f);
    glVertex2f(-0.23f,0.75f);
    glVertex2f(-0.23f,0.85f);
    glVertex2f(-0.33f,0.65f);
    glVertex2f(-0.33f,0.785f);
    glVertex2f(-0.33f,0.958f);
    glVertex2f(-0.43f,0.55f);
    glVertex2f(-0.43f,0.75f);
    glVertex2f(-0.43f,0.89f);
    glVertex2f(-0.55f,0.47f);
    glVertex2f(-0.55f,0.67f);
    glVertex2f(-0.55f,0.87f);
    glVertex2f(-0.5f,0.42f);
    glVertex2f(-0.58f,0.45f);
    glVertex2f(-0.58f,0.65f);
    glVertex2f(-0.58f,0.95f);
    glVertex2f(-0.49f,0.51f);
    glVertex2f(-0.63f,0.525f);
    glVertex2f(-0.63f,0.725f);
    glVertex2f(-0.63f,0.925f);
    glVertex2f(-0.73f,0.425f);
    glVertex2f(-0.73f,0.525f);
    glVertex2f(-0.73f,0.725f);
    glVertex2f(-0.83f,0.35f);
    glVertex2f(-0.83f,0.46f);
    glVertex2f(-0.83f,0.56f);
    glVertex2f(-0.83f,0.76f);
    glVertex2f(-0.83f,0.96f);
    glVertex2f(-0.93f,0.485f);
    glVertex2f(-0.93f,0.585f);
    glVertex2f(-0.93f,0.785f);
    glVertex2f(-0.98f,0.885f);
    glVertex2f(-0.98f,0.285f);
    glVertex2f(0.0f,0.79f);
    glVertex2f(0.0f,0.9f);
    glVertex2f(0.07f,0.9f);
    glVertex2f(0.07f,0.7f);
    glVertex2f(0.03f,0.75f);
    glVertex2f(0.03f,0.85f);
    glVertex2f(0.03f,0.95f);
    glVertex2f(0.13f,0.79f);
    glVertex2f(0.13f,0.9f);
    glVertex2f(0.23f,0.75f);
    glVertex2f(0.23f,0.85f);
    glVertex2f(0.33f,0.65f);
    glVertex2f(0.33f,0.785f);
    glVertex2f(0.33f,0.958f);
    glVertex2f(0.43f,0.55f);
    glVertex2f(0.43f,0.75f);
    glVertex2f(0.43f,0.89f);
    glVertex2f(0.55f,0.47f);
    glVertex2f(0.55f,0.67f);
    glVertex2f(0.55f,0.87f);
    glVertex2f(0.5f,0.42f);
    glVertex2f(0.58f,0.45f);
    glVertex2f(0.58f,0.65f);
    glVertex2f(0.58f,0.95f);
    glVertex2f(0.49f,0.51f);
    glVertex2f(0.63f,0.525f);
    glVertex2f(0.63f,0.725f);
    glVertex2f(0.63f,0.925f);
    glVertex2f(0.73f,0.425f);
    glVertex2f(0.73f,0.525f);
    glVertex2f(0.73f,0.725f);
    glVertex2f(0.83f,0.35f);
    glVertex2f(0.83f,0.46f);
    glVertex2f(0.83f,0.56f);
    glVertex2f(0.83f,0.76f);
    glVertex2f(0.83f,0.96f);
    glVertex2f(0.93f,0.485f);
    glVertex2f(0.93f,0.585f);
    glVertex2f(0.93f,0.785f);
    glVertex2f(0.98f,0.885f);
    glVertex2f(0.98f,0.285f);

    glEnd();

    glColor3ub(sky1,sky2,sky3);//31, 63, 96
	glBegin(GL_POLYGON);//..........................................building
    glVertex2f(-1.0f,-0.59f);
    glVertex2f(-1.0f,0.2f);
	glVertex2f(-0.98f,0.2f);
	glVertex2f(-0.98f,0.15f);
	glVertex2f(-0.95f,0.18f);
	glVertex2f(-0.92f,0.15f);
	glVertex2f(-0.92f,0.3f);
	glVertex2f(-0.89f,0.3f);
	glVertex2f(-0.89f,0.27f);
	glVertex2f(-0.86f,0.27f);
	glVertex2f(-0.86f,0.25f);
	glVertex2f(-0.83f,0.25f);
	glVertex2f(-0.83f,0.2f);
	glVertex2f(-0.8f,0.23f);
	glVertex2f(-0.77f,0.2f);
	glVertex2f(-0.74f,0.2f);
	glVertex2f(-0.74f,0.35f);
	glVertex2f(-0.7f,0.35f);
	glVertex2f(-0.7f,0.2f);
	glVertex2f(-0.67f,0.2f);
	glVertex2f(1.0f,-0.59f);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(-0.67f,-0.59f);
    glVertex2f(-0.67f,0.4f);
    glVertex2f(-0.61f,0.4f);
    glVertex2f(-0.61f,0.3f);
    glVertex2f(-0.55f,0.3f);
    glVertex2f(-0.55f,0.25f);
    glVertex2f(-0.53f,0.25f);
    glVertex2f(-0.51f,0.2f);
    glVertex2f(-0.46f,0.2f);
	glVertex2f(1.0f,-0.59f);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(-0.46f,-0.59f);
    glVertex2f(-0.46f,0.5f);
    glVertex2f(-0.35f,0.5f);
    glVertex2f(-0.35f,0.25f);
    glVertex2f(-0.3f,0.25f);
	glVertex2f(1.0f,-0.59f);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(-0.3f,-0.59f);
    glVertex2f(-0.3f,0.5f);
    glVertex2f(-0.25f,0.5f);
    glVertex2f(-0.25f,0.53f);
    glVertex2f(-0.23f,0.53f);
    glVertex2f(-0.23f,0.25f);
    glVertex2f(-0.23f,0.4f);
    glVertex2f(-0.14f,0.4f);
    glVertex2f(-0.14f,0.25f);
    glVertex2f(-0.1f,0.25f);
    glVertex2f(-0.1f,0.2f);
    glVertex2f(-0.05f,0.2f);
	glVertex2f(1.0f,-0.59f);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(-0.05f,-0.59f);
    glVertex2f(-0.05f,0.5f);
    glVertex2f(0.05f,0.5f);
    glVertex2f(0.05f,0.25f);
	glVertex2f(1.0f,-0.59f);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(0.3f,-0.59f);
    glVertex2f(0.3f,0.5f);
    glVertex2f(0.25f,0.5f);
    glVertex2f(0.25f,0.53f);
    glVertex2f(0.23f,0.53f);
    glVertex2f(0.23f,0.25f);
    glVertex2f(0.23f,0.4f);
    glVertex2f(0.14f,0.4f);
    glVertex2f(0.14f,0.25f);
    glVertex2f(0.1f,0.25f);
    glVertex2f(0.1f,0.2f);
    glVertex2f(0.05f,0.2f);
	glVertex2f(-1.0f,-0.59f);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(0.46f,-0.59f);
    glVertex2f(0.46f,0.5f);
    glVertex2f(0.35f,0.5f);
    glVertex2f(0.35f,0.25f);
    glVertex2f(0.3f,0.25f);
	glVertex2f(-1.0f,-0.59f);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(0.67f,-0.59f);
    glVertex2f(0.67f,0.4f);
    glVertex2f(0.61f,0.4f);
    glVertex2f(0.61f,0.3f);
    glVertex2f(0.55f,0.3f);
    glVertex2f(0.55f,0.25f);
    glVertex2f(0.53f,0.25f);
    glVertex2f(0.51f,0.2f);
    glVertex2f(0.46f,0.2f);
	glVertex2f(-1.0f,-0.59f);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(1.0f,-0.59f);
    glVertex2f(1.0f,0.2f);
	glVertex2f(0.98f,0.2f);
	glVertex2f(0.98f,0.15f);
	glVertex2f(0.95f,0.18f);
	glVertex2f(0.92f,0.15f);
	glVertex2f(0.92f,0.3f);
	glVertex2f(0.89f,0.3f);
	glVertex2f(0.89f,0.27f);
	glVertex2f(0.86f,0.27f);
	glVertex2f(0.86f,0.25f);
	glVertex2f(0.83f,0.25f);
	glVertex2f(0.83f,0.2f);
	glVertex2f(0.8f,0.23f);
	glVertex2f(0.77f,0.2f);
	glVertex2f(0.74f,0.2f);
	glVertex2f(0.74f,0.35f);
	glVertex2f(0.7f,0.35f);
	glVertex2f(0.7f,0.2f);
	glVertex2f(0.67f,0.2f);
	glVertex2f(-1.0f,-0.59f);
	glEnd();

	glColor3ub(0, 110, 110);
	glBegin(GL_QUADS);
    glVertex2f(-0.75f,-0.59f);
    glVertex2f(-0.5f,-0.59f);
    glVertex2f(-0.51f,-0.4f);
    glVertex2f(-0.74f,-0.4f);

    glVertex2f(-0.72f,0.3f);
    glVertex2f(-0.52f,0.3f);
    glVertex2f(-0.52f,0.4f);
    glVertex2f(-0.72f,0.4f);

    glColor3ub(0, 153, 153);
    glVertex2f(-0.74f,-0.4f);
    glVertex2f(-0.51f,-0.4f);
    glVertex2f(-0.52f,0.3f);
    glVertex2f(-0.72f,0.3f);

	glEnd();

glPushMatrix();
    glTranslatef(-0.62,0.45,0);
    glScalef(0.08,0.08,1);
    midPointEllipse(4, 1, 1);
glPopMatrix();

    glColor3ub(255, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.6f,0.55f);
    glVertex2f(-0.64f,0.55f);
    glVertex2f(-0.62f,0.7f);
	glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.95f,0.43f);
    glVertex2f(-0.3f,0.43f);
    glVertex2f(-0.3f,0.48f);
    glVertex2f(-0.95f,0.48f);

    glColor3ub(0, 153, 153);
    glVertex2f(-0.66f,0.55f);
    glVertex2f(-0.58f,0.55f);
    glVertex2f(-0.58f,0.5f);
    glVertex2f(-0.66f,0.5f);

    glColor3ub(255, 255, 0);
    glVertex2f(-0.93f,0.44f);
    glVertex2f(-0.83f,0.44f);
    glVertex2f(-0.83f,0.47f);
    glVertex2f(-0.93f,0.47f);

    glVertex2f(-0.58f,0.44f);
    glVertex2f(-0.68f,0.44f);
    glVertex2f(-0.68f,0.47f);
    glVertex2f(-0.58f,0.47f);

    glVertex2f(-0.43f,0.44f);
    glVertex2f(-0.33f,0.44f);
    glVertex2f(-0.33f,0.47f);
    glVertex2f(-0.43f,0.47f);

    glVertex2f(-0.6f,0.31f);
    glVertex2f(-0.63f,0.31f);
    glVertex2f(-0.63f,0.34f);
    glVertex2f(-0.6f,0.34f);

    glVertex2f(-0.65f,0.31f);
    glVertex2f(-0.68f,0.31f);
    glVertex2f(-0.68f,0.34f);
    glVertex2f(-0.65f,0.34f);

    glVertex2f(-0.7f,0.31f);
    glVertex2f(-0.72f,0.31f);
    glVertex2f(-0.72f,0.34f);
    glVertex2f(-0.7f,0.34f);

    glVertex2f(-0.55f,0.31f);
    glVertex2f(-0.58f,0.31f);
    glVertex2f(-0.58f,0.34f);
    glVertex2f(-0.55f,0.34f);

    glVertex2f(-0.52f,0.31f);
    glVertex2f(-0.53f,0.31f);
    glVertex2f(-0.53f,0.34f);
    glVertex2f(-0.52f,0.34f);

    glVertex2f(-0.6f,0.21f);
    glVertex2f(-0.63f,0.21f);
    glVertex2f(-0.63f,0.24f);
    glVertex2f(-0.6f,0.24f);

    glVertex2f(-0.6f,0.11f);
    glVertex2f(-0.63f,0.11f);
    glVertex2f(-0.63f,0.14f);
    glVertex2f(-0.6f,0.14f);

    glVertex2f(-0.6f,0.01f);
    glVertex2f(-0.63f,0.01f);
    glVertex2f(-0.63f,0.04f);
    glVertex2f(-0.6f,0.04f);

    glVertex2f(-0.6f,-0.05f);
    glVertex2f(-0.63f,-0.05f);
    glVertex2f(-0.63f,-0.08f);
    glVertex2f(-0.6f,-0.08f);

    glVertex2f(-0.6f,-0.15f);
    glVertex2f(-0.63f,-0.15f);
    glVertex2f(-0.63f,-0.18f);
    glVertex2f(-0.6f,-0.18f);

    glVertex2f(-0.6f,-0.25f);
    glVertex2f(-0.63f,-0.25f);
    glVertex2f(-0.63f,-0.28f);
    glVertex2f(-0.6f,-0.28f);

    glVertex2f(-0.6f,-0.35f);
    glVertex2f(-0.63f,-0.35f);
    glVertex2f(-0.63f,-0.38f);
    glVertex2f(-0.6f,-0.38f);

    glVertex2f(-0.51f,-0.45f);
    glVertex2f(-0.6f,-0.45f);
    glVertex2f(-0.6f,-0.59f);
    glVertex2f(-0.51f,-0.59f);

	glEnd();
glPushMatrix();
    glTranslatef(-0.95,-0.59,0);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,180,180);
            float pi=3.1416/2;
            float A=(i*2*pi)/200;
            float r=0.4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }

	glEnd();
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(180,180,0);
            float pi=3.1416/4;
            float A=(i*2*pi)/200;
            float r=0.4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }

	glEnd();
glPopMatrix();

    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.65f,-0.33f);
    glVertex2f(-1.0f,-0.33f);
    glVertex2f(-1.0f,-0.38f);
    glVertex2f(-0.6f,-0.38f);

    glVertex2f(-0.65f,-0.33f);
    glVertex2f(-1.0f,-0.33f);
    glVertex2f(-1.0f,-0.38f);
    glVertex2f(-0.6f,-0.38f);

    glColor3ub(180, 180, 0);
    glVertex2f(-1.0f,-0.55f);
    glVertex2f(-0.95f,-0.55f);
    glVertex2f(-0.95f,-0.5f);
    glVertex2f(-1.0f,-0.5f);

    glVertex2f(-0.8f,-0.55f);
    glVertex2f(-0.65f,-0.55f);
    glVertex2f(-0.65f,-0.5f);
    glVertex2f(-0.8f,-0.5f);

	glEnd();

    glColor3ub(255, 255, 255);
glPushMatrix();
    glTranslatef(-0.28,-0.59,0);
    glScalef(0.08,0.08,1);
    midPointEllipse(3, 12, 2);
glPopMatrix();
    glColor3ub(0, 180, 180);
glPushMatrix();
    glTranslatef(-0.28,-0.59,0);
    glScalef(0.05,0.07,1);
    midPointEllipse(3, 12, 2);
glPopMatrix();
    glColor3ub(255, 255, 0);

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.34f,-0.18f);
    glVertex2f(-0.22f,-0.18f);
    glVertex2f(-0.285f,0.18f);

	glEnd();

    glBegin(GL_QUADS);

    glVertex2f(-0.20f,-0.23f);
    glVertex2f(-0.36f,-0.23f);
    glVertex2f(-0.36f,-0.28f);
    glVertex2f(-0.20f,-0.28f);

    glVertex2f(-0.18f,-0.33f);
    glVertex2f(-0.38f,-0.33f);
    glVertex2f(-0.38f,-0.38f);
    glVertex2f(-0.18f,-0.38f);

    glVertex2f(-0.16f,-0.43f);
    glVertex2f(-0.40f,-0.43f);
    glVertex2f(-0.40f,-0.48f);
    glVertex2f(-0.16f,-0.48f);

    glVertex2f(-0.15f,-0.53f);
    glVertex2f(-0.41f,-0.53f);
    glVertex2f(-0.41f,-0.58f);
    glVertex2f(-0.15f,-0.58f);

	glEnd();

    glBegin(GL_QUADS);

    glVertex2f(-0.20f,-0.23f);
    glVertex2f(-0.36f,-0.23f);
    glVertex2f(-0.36f,-0.28f);
    glVertex2f(-0.20f,-0.28f);

    glVertex2f(-0.18f,-0.33f);
    glVertex2f(-0.38f,-0.33f);
    glVertex2f(-0.38f,-0.38f);
    glVertex2f(-0.18f,-0.38f);

    glVertex2f(-0.16f,-0.43f);
    glVertex2f(-0.40f,-0.43f);
    glVertex2f(-0.40f,-0.48f);
    glVertex2f(-0.16f,-0.48f);

    glVertex2f(-0.15f,-0.53f);
    glVertex2f(-0.41f,-0.53f);
    glVertex2f(-0.41f,-0.58f);
    glVertex2f(-0.15f,-0.58f);

	glEnd();

glPushMatrix();
    glTranslatef(0.105,0.51,0);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,180,180);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }

	glEnd();
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(180,180,0);
            float pi=3.1416/2;
            float A=(i*2*pi)/200;
            float r=0.17;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }

	glEnd();
glPopMatrix();

    glBegin(GL_QUADS);

	glColor3ub(0, 100, 100);
    glVertex2f(-0.05f,-0.59f);
    glVertex2f(0.26f,-0.59f);
    glVertex2f(0.26f,-0.38f);
    glVertex2f(-0.05f,-0.38f);

    glColor3ub(0, 255, 255);
    glVertex2f(-0.05f,-0.38f);
    glVertex2f(0.26f,-0.38f);
    glVertex2f(0.26f,0.38f);
    glVertex2f(-0.05f,0.38f);

    glColor3ub(0, 140, 140);
    glVertex2f(-0.15f,0.4f);
    glVertex2f(0.36f,0.4f);
    glVertex2f(0.36f,0.33f);
    glVertex2f(-0.15f,0.33f);

	glEnd();

    glBegin(GL_LINES);

	glColor3ub(0, 180, 180);
    glVertex2f(-0.05f,0.59f);
    glVertex2f(0.26f,0.59f);

    glVertex2f(0.0f,0.5f);
    glVertex2f(0.07f,0.68f);

    glVertex2f(0.2f,0.5f);
    glVertex2f(0.13f,0.68f);

	glEnd();

    glBegin(GL_QUADS);

	glColor3ub(200, 200, 0);
    glVertex2f(-0.15f,0.39f);
    glVertex2f(-0.1f,0.39f);
    glVertex2f(-0.1f,0.34f);
    glVertex2f(-0.15f,0.34f);

    glVertex2f(-0.05f,0.39f);
    glVertex2f(-0.0f,0.39f);
    glVertex2f(-0.0f,0.34f);
    glVertex2f(-0.05f,0.34f);

    glVertex2f(0.05f,0.39f);
    glVertex2f(0.1f,0.39f);
    glVertex2f(0.1f,0.34f);
    glVertex2f(0.05f,0.34f);

    glVertex2f(0.15f,0.39f);
    glVertex2f(0.2f,0.39f);
    glVertex2f(0.2f,0.34f);
    glVertex2f(0.15f,0.34f);

    glVertex2f(0.25f,0.39f);
    glVertex2f(0.3f,0.39f);
    glVertex2f(0.3f,0.34f);
    glVertex2f(0.25f,0.34f);

    glVertex2f(0.35f,0.39f);
    glVertex2f(0.36f,0.39f);
    glVertex2f(0.36f,0.34f);
    glVertex2f(0.35f,0.34f);

    glVertex2f(-0.0f,0.28f);
    glVertex2f(-0.05f,0.28f);
    glVertex2f(-0.05f,0.2f);
    glVertex2f(-0.0f,0.2f);

    glVertex2f(0.21f,0.28f);
    glVertex2f(0.26f,0.28f);
    glVertex2f(0.26f,0.2f);
    glVertex2f(0.21f,0.2f);

    glVertex2f(-0.0f,0.18f);
    glVertex2f(-0.05f,0.18f);
    glVertex2f(-0.05f,0.1f);
    glVertex2f(-0.0f,0.1f);

    glVertex2f(0.21f,0.18f);
    glVertex2f(0.26f,0.18f);
    glVertex2f(0.26f,0.1f);
    glVertex2f(0.21f,0.1f);

    glVertex2f(-0.0f,0.08f);
    glVertex2f(-0.05f,0.08f);
    glVertex2f(-0.05f,0.0f);
    glVertex2f(-0.0f,0.0f);

    glVertex2f(0.21f,0.08f);
    glVertex2f(0.26f,0.08f);
    glVertex2f(0.26f,0.0f);
    glVertex2f(0.21f,0.0f);

    glVertex2f(-0.0f,-0.02f);
    glVertex2f(-0.05f,-0.02f);
    glVertex2f(-0.05f,-0.1f);
    glVertex2f(-0.0f,-0.1f);

    glVertex2f(0.21f,-0.02f);
    glVertex2f(0.26f,-0.02f);
    glVertex2f(0.26f,-0.1f);
    glVertex2f(0.21f,-0.1f);

    glVertex2f(-0.0f,-0.12f);
    glVertex2f(-0.05f,-0.12f);
    glVertex2f(-0.05f,-0.2f);
    glVertex2f(-0.0f,-0.2f);

    glVertex2f(0.21f,-0.12f);
    glVertex2f(0.26f,-0.12f);
    glVertex2f(0.26f,-0.2f);
    glVertex2f(0.21f,-0.2f);

    glVertex2f(-0.0f,-0.22f);
    glVertex2f(-0.05f,-0.22f);
    glVertex2f(-0.05f,-0.3f);
    glVertex2f(-0.0f,-0.3f);

    glVertex2f(0.21f,-0.22f);
    glVertex2f(0.26f,-0.22f);
    glVertex2f(0.26f,-0.3f);
    glVertex2f(0.21f,-0.3f);

	glEnd();

    glBegin(GL_QUADS);

	glColor3ub(0, 120, 120);
    glVertex2f(0.3f,-0.59f);
    glVertex2f(0.4f,-0.59f);
    glVertex2f(0.4f,0.28f);
    glVertex2f(0.3f,0.28f);

    glColor3ub(0,220,220);
    glVertex2f(0.4f,-0.59f);
    glVertex2f(0.56f,-0.59f);
    glVertex2f(0.56f,0.28f);
    glVertex2f(0.4f,0.28f);

    glColor3ub(255,255,255);
    glVertex2f(0.4f,0.28f);
    glVertex2f(0.46f,0.28f);
    glVertex2f(0.46f,0.38f);
    glVertex2f(0.4f,0.38f);

    glVertex2f(0.49f,0.28f);
    glVertex2f(0.5f,0.28f);
    glVertex2f(0.5f,0.4f);
    glVertex2f(0.49f,0.4f);

    glColor3ub(0,80,80);
    glVertex2f(0.43f,0.25f);
    glVertex2f(0.47f,0.25f);
    glVertex2f(0.47f,0.15f);
    glVertex2f(0.43f,0.15f);

    glColor3ub(200, 200, 0);
    glVertex2f(0.48f,0.25f);
    glVertex2f(0.52f,0.25f);
    glVertex2f(0.52f,0.15f);
    glVertex2f(0.48f,0.15f);

    glColor3ub(0,80,80);
    glVertex2f(0.53f,0.25f);
    glVertex2f(0.56f,0.25f);
    glVertex2f(0.56f,0.15f);
    glVertex2f(0.53f,0.15f);

    glVertex2f(0.43f,0.14f);
    glVertex2f(0.47f,0.14f);
    glVertex2f(0.47f,0.04f);
    glVertex2f(0.43f,0.04f);

    glVertex2f(0.48f,0.14f);
    glVertex2f(0.52f,0.14f);
    glVertex2f(0.52f,0.04f);
    glVertex2f(0.48f,0.04f);

    glColor3ub(200, 200, 0);
    glVertex2f(0.53f,0.14f);
    glVertex2f(0.56f,0.14f);
    glVertex2f(0.56f,0.04f);
    glVertex2f(0.53f,0.04f);

    glColor3ub(0,80,80);
    glVertex2f(0.43f,0.03f);
    glVertex2f(0.47f,0.03f);
    glVertex2f(0.47f,-0.07f);
    glVertex2f(0.43f,-0.07f);

    glColor3ub(200, 200, 0);
    glVertex2f(0.48f,0.03f);
    glVertex2f(0.52f,0.03f);
    glVertex2f(0.52f,-0.07f);
    glVertex2f(0.48f,-0.07f);

    glColor3ub(0,80,80);
    glVertex2f(0.53f,0.03f);
    glVertex2f(0.56f,0.03f);
    glVertex2f(0.56f,-0.07f);
    glVertex2f(0.53f,-0.07f);

    glVertex2f(0.43f,-0.08f);
    glVertex2f(0.47f,-0.08f);
    glVertex2f(0.47f,-0.18f);
    glVertex2f(0.43f,-0.18f);

    glVertex2f(0.48f,-0.08f);
    glVertex2f(0.52f,-0.08f);
    glVertex2f(0.52f,-0.18f);
    glVertex2f(0.48f,-0.18f);

    glColor3ub(200, 200, 0);
    glVertex2f(0.53f,-0.08f);
    glVertex2f(0.56f,-0.08f);
    glVertex2f(0.56f,-0.18f);
    glVertex2f(0.53f,-0.18f);

    glVertex2f(0.43f,-0.19f);
    glVertex2f(0.47f,-0.19f);
    glVertex2f(0.47f,-0.29f);
    glVertex2f(0.43f,-0.29f);

    glColor3ub(0,80,80);
    glVertex2f(0.48f,-0.19f);
    glVertex2f(0.52f,-0.19f);
    glVertex2f(0.52f,-0.29f);
    glVertex2f(0.48f,-0.29f);

    glColor3ub(200, 200, 0);
    glVertex2f(0.53f,-0.19f);
    glVertex2f(0.56f,-0.19f);
    glVertex2f(0.56f,-0.29f);
    glVertex2f(0.53f,-0.29f);

    glVertex2f(0.43f,-0.3f);
    glVertex2f(0.47f,-0.3f);
    glVertex2f(0.47f,-0.4f);
    glVertex2f(0.43f,-0.4f);

    glColor3ub(0,80,80);
    glVertex2f(0.48f,-0.3f);
    glVertex2f(0.52f,-0.3f);
    glVertex2f(0.52f,-0.4f);
    glVertex2f(0.48f,-0.4f);

    glVertex2f(0.53f,-0.3f);
    glVertex2f(0.56f,-0.3f);
    glVertex2f(0.56f,-0.4f);
    glVertex2f(0.53f,-0.4f);

    glVertex2f(0.43f,-0.41f);
    glVertex2f(0.47f,-0.41f);
    glVertex2f(0.47f,-0.51f);
    glVertex2f(0.43f,-0.51f);

    glColor3ub(200, 200, 0);
    glVertex2f(0.48f,-0.41f);
    glVertex2f(0.52f,-0.41f);
    glVertex2f(0.52f,-0.51f);
    glVertex2f(0.48f,-0.51f);

    glColor3ub(0,80,80);
    glVertex2f(0.53f,-0.41f);
    glVertex2f(0.56f,-0.41f);
    glVertex2f(0.56f,-0.51f);
    glVertex2f(0.53f,-0.51f);

	glEnd();

glPushMatrix();
    glTranslatef(t1,1.05,0);
    glScalef(0.2,0.2,1);

    glColor3ub(0,0,0);//....................................................Flying soccer
glPushMatrix();
    glTranslatef(0.75,-0.5,0);
    glScalef(0.08,0.08,1);
    midPointEllipse(4, 0.5, 1);
glPopMatrix();

glPushMatrix();
    glTranslatef(0.75,-0.5,0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,180,180);
            float pi=3.1416/2;
            float A=(i*2*pi)/200;
            float r=0.17;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }

	glEnd();
glPopMatrix();

    glBegin(GL_TRIANGLES);

    glColor3ub(255,255,255);
    glVertex2f(0.53f,-0.6f);
    glVertex2f(0.57f,-0.6f);
    glVertex2f(0.555f,-0.51f);

    glVertex2f(0.93f,-0.6f);
    glVertex2f(0.97f,-0.6f);
    glVertex2f(0.955f,-0.51f);

    glVertex2f(0.73f,-0.59f);
    glVertex2f(0.77f,-0.59f);
    glVertex2f(0.755f,-0.51f);

    glEnd();

    glPointSize(2);
    glBegin(GL_POINTS);

    glColor3ub(255,255,0);
    glVertex2f(0.53f,-0.51f);
    glVertex2f(0.63f,-0.515f);
    glVertex2f(0.73f,-0.52f);
    glVertex2f(0.83f,-0.52f);
    glVertex2f(0.93f,-0.515f);
    glVertex2f(1.03f,-0.51f);

    glEnd();
glPopMatrix();

glPushMatrix();
    glTranslatef(-t2,1.1,0);
    glScalef(0.4,0.4,1);

    glColor3ub(0,0,0);//...........................Flying soccer
glPushMatrix();
    glTranslatef(0.75,-0.5,0);
    glScalef(0.08,0.08,1);
    midPointEllipse(4, 0.5, 1);
glPopMatrix();

glPushMatrix();
    glTranslatef(0.75,-0.5,0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,180,180);
            float pi=3.1416/2;
            float A=(i*2*pi)/200;
            float r=0.17;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }

	glEnd();
glPopMatrix();

    glBegin(GL_TRIANGLES);

    glColor3ub(255,255,255);
    glVertex2f(0.53f,-0.6f);
    glVertex2f(0.57f,-0.6f);
    glVertex2f(0.555f,-0.51f);

    glVertex2f(0.93f,-0.6f);
    glVertex2f(0.97f,-0.6f);
    glVertex2f(0.955f,-0.51f);

    glVertex2f(0.73f,-0.59f);
    glVertex2f(0.77f,-0.59f);
    glVertex2f(0.755f,-0.51f);

    glEnd();

    glPointSize(1);
    glBegin(GL_POINTS);

    glColor3ub(255,255,0);
    glVertex2f(0.53f,-0.51f);
    glVertex2f(0.63f,-0.515f);
    glVertex2f(0.73f,-0.52f);
    glVertex2f(0.83f,-0.52f);
    glVertex2f(0.93f,-0.515f);
    glVertex2f(1.03f,-0.51f);

    glEnd();
glPopMatrix();

glPushMatrix();
    glTranslatef(0,h,0);
    glScalef(sc,sc,1);
    glColor3ub(255,255,255);//...........................Flying soccer
glPushMatrix();
    glTranslatef(0.75,-0.5,0);
    glScalef(0.08,0.08,1);
    midPointEllipse(4, 0.5, 1);
glPopMatrix();

glPushMatrix();
    glTranslatef(0.75,-0.5,0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,180,180);
            float pi=3.1416/2;
            float A=(i*2*pi)/200;
            float r=0.17;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }

	glEnd();
glPopMatrix();

    glBegin(GL_TRIANGLES);

    glColor3ub(255,255,255);
    glVertex2f(0.53f,-0.6f);
    glVertex2f(0.57f,-0.6f);
    glVertex2f(0.555f,-0.51f);

    glVertex2f(0.93f,-0.6f);
    glVertex2f(0.97f,-0.6f);
    glVertex2f(0.955f,-0.51f);

    glVertex2f(0.73f,-0.59f);
    glVertex2f(0.77f,-0.59f);
    glVertex2f(0.755f,-0.51f);

    glEnd();

    glPointSize(sz);
    glBegin(GL_POINTS);

    glColor3ub(255,255,0);
    glVertex2f(0.53f,-0.51f);
    glVertex2f(0.63f,-0.515f);
    glVertex2f(0.73f,-0.52f);
    glVertex2f(0.83f,-0.52f);
    glVertex2f(0.93f,-0.515f);
    glVertex2f(1.03f,-0.51f);

    glEnd();
glPopMatrix();

glPushMatrix();
    glTranslatef(t,1.2,0);
    glScalef(0.8,0.8,1);

    glColor3ub(255,255,255);//...........................Flying soccer
glPushMatrix();
    glTranslatef(0.75,-0.5,0);
    glScalef(0.08,0.08,1);
    midPointEllipse(4, 0.5, 1);
glPopMatrix();

glPushMatrix();
    glTranslatef(0.75,-0.5,0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,180,180);
            float pi=3.1416/2;
            float A=(i*2*pi)/200;
            float r=0.17;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }

	glEnd();
glPopMatrix();

    glBegin(GL_TRIANGLES);

    glColor3ub(255,255,255);
    glVertex2f(0.53f,-0.6f);
    glVertex2f(0.57f,-0.6f);
    glVertex2f(0.555f,-0.51f);

    glVertex2f(0.93f,-0.6f);
    glVertex2f(0.97f,-0.6f);
    glVertex2f(0.955f,-0.51f);

    glVertex2f(0.73f,-0.59f);
    glVertex2f(0.77f,-0.59f);
    glVertex2f(0.755f,-0.51f);

    glEnd();

    glPointSize(6);
    glBegin(GL_POINTS);

    glColor3ub(255,255,0);
    glVertex2f(0.53f,-0.51f);
    glVertex2f(0.63f,-0.515f);
    glVertex2f(0.73f,-0.52f);
    glVertex2f(0.83f,-0.52f);
    glVertex2f(0.93f,-0.515f);
    glVertex2f(1.03f,-0.51f);

    glEnd();
glPopMatrix();


	glFlush();  // Render now

}
int fly=-1;
void update(int value)
{
    if(t<-2.5)
    {
        t+=3.5;
    }
    t=t-speed;
    if(t1<-2.5)
    {
        t1+=5.5;
    }
    t1=t1-speed1;
    if(t2<-2.5)
    {
        t2+=5.5;
    }
    t2=t2-speed2;
    if(fly==0)
    {
        if(h<=1.0)
        {
            h+=0.01;
        }
        if(sc>0&&h>=1.0)
        {
            sc-=0.01;
            sz-=1;
        }
    }
    else if(fly==1)
    {
        if(sc<=7&&h>=0.0)
        {
            sc+=0.01;
            sz+=1;
        }
        if(h>=0.0)
        {
            h-=0.01;
        }
    }
    else
    {
        h=0;
        sc=1;
        sz=7;
    }
    glutPostRedisplay();
    glutTimerFunc(20,update,0);
}

void handleMouse(int button, int state, int x, int y) {

    if (button == GLUT_LEFT_BUTTON)
        {fly = 1;}
    if (button == GLUT_MIDDLE_BUTTON)
        {fly = -1;   }
    if (button == GLUT_RIGHT_BUTTON)
        {fly = 0;   }
    glutPostRedisplay();}

void handleKeypress(unsigned char key, int x, int y) {
        switch (key) {
    case 'a':
        speed += 0.01f;
        break;
    case 'q':
        speed = 0.02f;
        break;
    case 'z':
        speed -= 0.01f;
        break;
    case 's':
        speed1 += 0.01f;
        break;
    case 'w':
        speed1 = 0.01f;
        break;
    case 'x':
        speed1 -= 0.01f;
        break;
    case 'd':
        speed2 += 0.01f;
        break;
    case 'e':
        speed2 = 0.015f;
        break;
    case 'c':
        speed2 -= 0.01f;
        break;
    case 'n':
        starc1=77;
        starc2=255;
        starc3=255;
        back1=77;
        back2=255;
        back3=255;
        sky1=166;
        sky2=166;
        sky3=166;
        break;
    case 'b':
        starc1=255;
        starc2=255;
        starc3=255;
        sky1=31;
        sky2=63;
        sky3=96;
        back1=38;
        back2=77;
        back3=115;
        break;
    glutPostRedisplay();//starc1=255,skyc2=255,skyc3=255,sky1=31,sky2=63,sky3=96,back1=38,back2=77,back3=115
	}}

void myInit (void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("Future City");
    glutDisplayFunc(display);
    glutTimerFunc(20,update,0);
    //glutTimerFunc(20,updatE,0);
    myInit ();
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutMainLoop();
}
