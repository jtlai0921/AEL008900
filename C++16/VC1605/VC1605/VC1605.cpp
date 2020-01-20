#include <GL/glut.h>

void myDisplay(void)
{
	/* OpenGL animation code goes here */
	glClearColor (1.0f, 1.0f, 1.0f, 0.0f);           // �N�I����]���զ� 
	glClear (GL_COLOR_BUFFER_BIT);

	glPushMatrix ();
    glBegin (GL_TRIANGLES);                   // �}�l���T����
        glColor3f (1.0f, 0.0f, 0.0f);	      // �]�w��X�⬰����
        glVertex2f (0.0f, 1.0f);              //(x1,y1)=(0, 1)
        glColor3f (0.0f, 1.0f, 0.0f);	      // �]�w��X�⬰���
        glVertex2f (0.87f, -0.5f);            //(x2,y2)=(0.87,-0.5)
        glColor3f (0.0f, 0.0f, 1.0f);	      // �]�w��X�⬰�Ŧ�
        glVertex2f (-0.87f, -0.5f);           //(x3,y3)=(-0.87,-0.5)
    glEnd ();                                 // �������T����

    glRotatef (60.0f, 0.0f, 0.0f, 1.0f);      // �HZ�b�����߱���60�� 
    glBegin (GL_TRIANGLES);                   // �}�l���T����
        glColor3f (1.0f, 0.0f, 0.0f);	      // �]�w��X�⬰����
        glVertex2f (0.0f, 1.0f);              //(x1,y1)=(0, 1)
        glColor3f (0.0f, 1.0f, 0.0f);	      // �]�w��X�⬰���
        glVertex2f (0.87f, -0.5f);            //(x2,y2)=(0.87,-0.5)
        glColor3f (0.0f, 0.0f, 1.0f);	      // �]�w��X�⬰�Ŧ�
        glVertex2f (-0.87f, -0.5f);           //(x3,y3)=(-0.87,-0.5)
    glEnd ();                                 // �������T����
	glPopMatrix ();

	glFlush();
}
void reShape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);    // �O����x=-1~1, y=-1~1
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("VC1605: �����ܴ�");       // �إߵ������D
	glutDisplayFunc(&myDisplay);
	glutReshapeFunc(&reShape);
	glutMainLoop();
	return 0;
}
