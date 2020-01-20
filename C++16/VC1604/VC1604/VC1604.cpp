#include <GL/glut.h>

void myDisplay(void)
{
	/* OpenGL animation code goes here */
	glClearColor (1.0f, 1.0f, 1.0f, 0.0f);           // 將背景色設為白色 
	glClear (GL_COLOR_BUFFER_BIT);

	glPushMatrix ();
    glBegin (GL_POLYGON);                            // 劃多邊形開始
        glColor3f(0.5f, 0.5f, 0.5f);                 // 設定多邊形為灰色
        glVertex3d (-0.5f, -0.5f, 0.0f);             // (x1,y1,z1)=(-.5,-.5,0) 
        glVertex3d (0.5f, -0.5f, 0.0f);              // (x2,y2,z2)=(.5,-.5,0.0)
        glVertex3d (0.5f, 0.5f, 0.0f);               // (x3,y3,z3)=(.5,.5,0)
        glVertex3d (-0.5f, 0.5f, 0.0f);              // (x4,y4,z4)=(-.5,.5,0)
    glEnd ();
            
    glLoadIdentity();
    glTranslated(-0.05, 0.05, 0.0);	                 // 向左與向上平移0.05
    glBegin (GL_POLYGON);                            // 劃多邊形開始
        glColor3f(1.0f, 0.0f, 0.0f);                 // 設定多邊形為紅色
        glVertex3d (-0.5f, -0.5f, 0.0f);             // (x1,y1,z1)=(-.5,-.5,0) 
        glVertex3d (0.5f, -0.5f, 0.0f);              // (x2,y2,z2)=(.5,-.5,0) 
        glVertex3d (0.5f, 0.5f, 0.0f);               // (x3,y3,z3)=(.5,.5,0)
        glVertex3d (-0.5f, 0.5f, 0.0f);              // (x4,y4,z4)=(-.5,.5,0)
    glEnd ();
	glPopMatrix ();

	glFlush();
}
void reShape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);        // 令視窗x=-1~1, y=-1~1
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("VC1604: 平行變換");            // 建立視窗標題
	glutDisplayFunc(&myDisplay);
	glutReshapeFunc(&reShape);
	glutMainLoop();
	return 0;
}
