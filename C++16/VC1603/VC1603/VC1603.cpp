#include <GL/glut.h>

void myDisplay(void)
{
	/* OpenGL animation code goes here */
	glClearColor (1.0f, 1.0f, 1.0f, 0.0f);           // �N�I����]���զ� 
	glClear (GL_COLOR_BUFFER_BIT);

	glPushMatrix ();
    glLineWidth(5.0f);                               // �]�w�u�e=5 
    glEnable(GL_LINE_STIPPLE);                       // �}�Ҭ���u�Ҧ� 
    glLineStipple(2, 0xff00);                        // �]�w��u���j 
    glColor3f(1.0f, 0.0f, 0.0f);                     // �C��=���� 
    glBegin (GL_LINES);                              // ���u�}�l
       glVertex3d (0.5f, 0.5f, 0.0f);                //(x1, y1, z1)=(0.5, 0.5, 0.0)
       glVertex3d (-0.5f, 0.5f, 0.0f);               //(x2, y2, z2)=(-0.5, 0.5, 0.0)
    glEnd ();                                        // ���u����

    glLineWidth(10.0f);                               // �]�w�u�e=10
    glDisable(GL_LINE_STIPPLE);                       // ��������u�Ҧ�
    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin (GL_LINES);                               // ���u�}�l
       glVertex3d (0.5f, -0.5f, 0.0f);                //(x1, y1, z1)=(0.5, 0.5, 0.0)
       glVertex3d (-0.5f, -0.5f, 0.0f);               //(x2, y2, z2)=(-0.5, 0.5, 0.0)
    glEnd ();                                         // ���u����
	glPopMatrix ();

	glFlush();
}
void reShape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);         // �O����x=-1~1, y=-1~1
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("VC1603: �e�@�Ӧh���");         // �إߵ������D
	glutDisplayFunc(myDisplay);
	glutReshapeFunc(reShape);
	glutMainLoop();
	return 0;
}
