#include <stdio.h>
#include "gl/glut.h"
#include "visuals.h"

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);

	glutInitWindowSize(480, 480);
	glutInitWindowPosition(50, 50);

	glutCreateWindow("DUCK");

	Setup();
	
	glutDisplayFunc(Render);
	glutReshapeFunc(Resize);
	glutIdleFunc(Idle);
	glutKeyboardFunc(Keyborad);
	glutMouseFunc(Mouse);

	glutMainLoop();
	return 0;

}