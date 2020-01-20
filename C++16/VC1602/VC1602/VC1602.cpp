#include <GL/glut.h>

void myDisplay(void)
{
	/* OpenGL animation code goes here */
	glClearColor (1.0f, 1.0f, 1.0f, 0.0f);           // 將背景色設為白色 
	glClear (GL_COLOR_BUFFER_BIT);

	glPushMatrix ();
    glEnable(GL_POINT_SMOOTH);                       // 設為圓形點 
    glPointSize(20.0f);                              // 點直徑為20
    glBegin (GL_POINTS);                             // 劃點開始
        glColor3f (0.0f, 0.0f, 1.0f);                // 設定點顏色=藍色 
        glVertex3d (0.0f, 0.5f, 0.0f);               // 在(0.0, 0.5)處劃點 
    glEnd ();                                        // 劃點結束

    glDisable(GL_POINT_SMOOTH);                      // 設為方形點
    glPointSize(15.0f);                              // 點直徑為15 
    glBegin (GL_POINTS);                             // 劃點開始
        glColor3f (0.0f, 1.0f, 0.0f);                // 設定點顏色=綠色 
        glVertex3d (0.0f, -0.5f, 0.0f);              // 在(0.0, -0.5)處劃點
    glEnd ();                                        // 劃點結束
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
	glutCreateWindow("VC1602: 畫點");                // 建立視窗標題
	glutDisplayFunc(&myDisplay);
	glutReshapeFunc(&reShape);
	glutMainLoop();
	return 0;
}
