#include <GL/glut.h>

void myDisplay(void)
{
	/* OpenGL animation code goes here */
	glClearColor (1.0f, 1.0f, 1.0f, 0.0f);           // 將背景色設為白色 
	glClear (GL_COLOR_BUFFER_BIT);

	glPushMatrix ();
    glBegin (GL_TRIANGLES);                   // 開始劃三角形
        glColor3f (1.0f, 0.0f, 0.0f);	      // 設定輸出色為紅色
        glVertex2f (0.0f, 1.0f);              //(x1,y1)=(0, 1)
        glColor3f (0.0f, 1.0f, 0.0f);	      // 設定輸出色為綠色
        glVertex2f (0.87f, -0.5f);            //(x2,y2)=(0.87,-0.5)
        glColor3f (0.0f, 0.0f, 1.0f);	      // 設定輸出色為藍色
        glVertex2f (-0.87f, -0.5f);           //(x3,y3)=(-0.87,-0.5)
    glEnd ();                                 // 結束劃三角形

    glRotatef (60.0f, 0.0f, 0.0f, 1.0f);      // 以Z軸為中心旋轉60度 
    glBegin (GL_TRIANGLES);                   // 開始劃三角形
        glColor3f (1.0f, 0.0f, 0.0f);	      // 設定輸出色為紅色
        glVertex2f (0.0f, 1.0f);              //(x1,y1)=(0, 1)
        glColor3f (0.0f, 1.0f, 0.0f);	      // 設定輸出色為綠色
        glVertex2f (0.87f, -0.5f);            //(x2,y2)=(0.87,-0.5)
        glColor3f (0.0f, 0.0f, 1.0f);	      // 設定輸出色為藍色
        glVertex2f (-0.87f, -0.5f);           //(x3,y3)=(-0.87,-0.5)
    glEnd ();                                 // 結束劃三角形
	glPopMatrix ();

	glFlush();
}
void reShape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);    // 令視窗x=-1~1, y=-1~1
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("VC1605: 旋轉變換");       // 建立視窗標題
	glutDisplayFunc(&myDisplay);
	glutReshapeFunc(&reShape);
	glutMainLoop();
	return 0;
}
