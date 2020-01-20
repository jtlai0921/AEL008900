#include <GL/glut.h>

void myDisplay(void)
{
	/* OpenGL animation code goes here */
	glClearColor (1.0f, 1.0f, 1.0f, 0.0f);           // �N�I����]���զ� 
	glClear (GL_COLOR_BUFFER_BIT);

	glPushMatrix ();
    glBegin (GL_POLYGON);                            // ���h��ζ}�l
        glColor3f (1.0f, 0.0f, 0.0f);                // �]�w�h��ά����� 
        glVertex3d (-0.5f, -0.5f, 0.0f);             // (x1,y1,z1)=(-0.5,-0.5,0.0) 
        glVertex3d (-0.5f, 0.5f, 0.0f);              // (x2,y2,z2)=(-0.5,0.5,0.0)
        glVertex3d (0.5f, 0.5f, 0.0f);               // (x3,y3,z3)=(0.5,0.5,0.0)
        glVertex3d (0.5f, -0.5f, 0.0f);              // (x4,y4,z4)=(0.5,-0.5,0.0)
    glEnd ();                                        // ���h��ε���
	glPopMatrix ();

	glFlush();
}
void reShape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);        // �N����x�լ�-1~1), y�լ�-1~1  
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("VC1601: �e�@�Ӧh���");        // �إߵ������D 
	glutDisplayFunc(myDisplay);
	glutReshapeFunc(reShape);
	glutMainLoop();
	return 0;
}
