#include <GL/glut.h>

void myDisplay(void)
{
	/* OpenGL animation code goes here */
	glClearColor (1.0f, 1.0f, 1.0f, 0.0f);           // 將背景色設為白色 
	glClear (GL_COLOR_BUFFER_BIT);

	glPushMatrix ();
    glBegin (GL_TRIANGLES);	               // 開始劃三角形
        glColor3f (0.8f, 0.8f, 0.8f);      // 設定輸出色為淺灰色
        glVertex3d (0.0f, 1.0f, 0.0f);	   //(x1,y1,z1)=(0, 1, 0)
        glVertex3d (0.87f, -0.5f, 0.0f);   //(x2,y2,z2)=(.87,-.5, 0)
        glVertex3d (-0.87f, -0.5f, 0.0f);  //(x3,y3,z3)=(-.87,-.5, 0)
    glEnd ();	                           // 結束劃三角形

    glScaled (0.7f, 0.7f, 0.7f);           // x,y,z各縮小至0.7倍 
    glBegin (GL_TRIANGLES);	               // 開始劃三角形
        glColor3f (0.0f, 0.0f, 0.0f);      // 設定輸出色為黑色
        glVertex3d (0.0f, 1.0f, 0.0f);     //(x1,y1,z1)=(0, 1, 0)
        glVertex3d (0.87f, -0.5f, 0.0f);   //(x2,y2,z2)=(.87,-.5, 0)
        glVertex3d (-0.87f, -0.5f, 0.0f);  //(x3,y3,z3)=(-.87,-.5, 0)
    glEnd ();	                           // 結束劃三角形
	glPopMatrix ();

	glFlush();
}
void reShape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);             // 令視窗x=-1~1, y=-1~1
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("VC1606: 比例變換");                 // 建立視窗標題
	glutDisplayFunc(&myDisplay);
	glutReshapeFunc(&reShape);
	glutMainLoop();
	return 0;
}
