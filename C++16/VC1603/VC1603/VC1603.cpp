#include <GL/glut.h>

void myDisplay(void)
{
	/* OpenGL animation code goes here */
	glClearColor (1.0f, 1.0f, 1.0f, 0.0f);           // 將背景色設為白色 
	glClear (GL_COLOR_BUFFER_BIT);

	glPushMatrix ();
    glLineWidth(5.0f);                               // 設定線寬=5 
    glEnable(GL_LINE_STIPPLE);                       // 開啟為虛線模式 
    glLineStipple(2, 0xff00);                        // 設定虛線間隔 
    glColor3f(1.0f, 0.0f, 0.0f);                     // 顏色=紅色 
    glBegin (GL_LINES);                              // 劃線開始
       glVertex3d (0.5f, 0.5f, 0.0f);                //(x1, y1, z1)=(0.5, 0.5, 0.0)
       glVertex3d (-0.5f, 0.5f, 0.0f);               //(x2, y2, z2)=(-0.5, 0.5, 0.0)
    glEnd ();                                        // 劃線結束

    glLineWidth(10.0f);                               // 設定線寬=10
    glDisable(GL_LINE_STIPPLE);                       // 關閉為虛線模式
    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin (GL_LINES);                               // 劃線開始
       glVertex3d (0.5f, -0.5f, 0.0f);                //(x1, y1, z1)=(0.5, 0.5, 0.0)
       glVertex3d (-0.5f, -0.5f, 0.0f);               //(x2, y2, z2)=(-0.5, 0.5, 0.0)
    glEnd ();                                         // 劃線結束
	glPopMatrix ();

	glFlush();
}
void reShape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);         // 令視窗x=-1~1, y=-1~1
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("VC1603: 畫一個多邊形");         // 建立視窗標題
	glutDisplayFunc(myDisplay);
	glutReshapeFunc(reShape);
	glutMainLoop();
	return 0;
}
