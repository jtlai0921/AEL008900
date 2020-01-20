#include <GL/glut.h>

void myDisplay(void)
{
	/* OpenGL animation code goes here */
	glClearColor (1.0f, 1.0f, 1.0f, 0.0f);           // �N�I����]���զ� 
	glClear (GL_COLOR_BUFFER_BIT);

	glPushMatrix ();
    glEnable(GL_POINT_SMOOTH);                       // �]������I 
    glPointSize(20.0f);                              // �I���|��20
    glBegin (GL_POINTS);                             // ���I�}�l
        glColor3f (0.0f, 0.0f, 1.0f);                // �]�w�I�C��=�Ŧ� 
        glVertex3d (0.0f, 0.5f, 0.0f);               // �b(0.0, 0.5)�B���I 
    glEnd ();                                        // ���I����

    glDisable(GL_POINT_SMOOTH);                      // �]������I
    glPointSize(15.0f);                              // �I���|��15 
    glBegin (GL_POINTS);                             // ���I�}�l
        glColor3f (0.0f, 1.0f, 0.0f);                // �]�w�I�C��=��� 
        glVertex3d (0.0f, -0.5f, 0.0f);              // �b(0.0, -0.5)�B���I
    glEnd ();                                        // ���I����
	glPopMatrix ();

	glFlush();
}
void reShape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);        // �O����x=-1~1, y=-1~1
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("VC1602: �e�I");                // �إߵ������D
	glutDisplayFunc(&myDisplay);
	glutReshapeFunc(&reShape);
	glutMainLoop();
	return 0;
}
