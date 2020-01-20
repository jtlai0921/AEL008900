#include <GL/glut.h>

static GLfloat theta = 0.0f;

void init(void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glClear (GL_COLOR_BUFFER_BIT);
}

void myDisplay(void)
{
	/* OpenGL animation code goes here */

	glPushMatrix();
    glRotatef (theta, 0.0, 0.0, 1.0);
    glBegin (GL_TRIANGLES);                   // �}�l���T����
        glColor3f (1.0f, 0.0f, 0.0f);	      // �]�w��X�⬰����
        glVertex2f (0.0f, 1.0f);              //(x1,y1)=(0, 1)
        glColor3f (0.0f, 1.0f, 0.0f);	      // �]�w��X�⬰���
        glVertex2f (0.87f, -0.5f);            //(x2,y2)=(0.87,-0.5)
        glColor3f (0.0f, 0.0f, 1.0f);	      // �]�w��X�⬰�Ŧ�
        glVertex2f (-0.87f, -0.5f);           //(x3,y3)=(-0.87,-0.5)
    glEnd ();                                 // �������T����
	glPopMatrix();

    glutSwapBuffers();
}

void spinDisplay(void)
{
	theta = theta + 1.0f;
		if(theta > 360.0)
			theta = theta - 120.0;
	glutPostRedisplay();
}

void reShape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Visual C++ OpenGL Sample");
	init();
    glutDisplayFunc(myDisplay);
	glutReshapeFunc(reShape);
	glutIdleFunc(spinDisplay);
    glutMainLoop();
    return 0;
}