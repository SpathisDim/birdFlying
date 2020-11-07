#include <stdio.h>     
#include "gl/glut.h"   
#include "visuals.h"   

static int menu;

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutInitWindowSize(480, 480);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Fly_like_an_eagle :p");
	Setup();
	glutDisplayFunc(Render);
	glutReshapeFunc(Resize);
	glutTimerFunc(0, Timer, 0);
	glutIdleFunc(Idle);

	int submenu = glutCreateMenu(subMenuSelect);
	glutAddMenuEntry("Cam A", 3);
	glutAddMenuEntry("Cam B", 4);
	glutAddMenuEntry("Cam C", 5);
	glutAddMenuEntry("Energopoihsh kinoymenhs kameras", 6); //me ta velakia koynietai h kamera
	glutCreateMenu(MenuSelect);
	glutAddMenuEntry("Start animation", 1);
	glutAddMenuEntry("Stop animation", 2);
	glutAddSubMenu("Change camera", submenu);
	glutAddMenuEntry("Exit", 0);
	glutAttachMenu(GLUT_RIGHT_BUTTON);

	glutSpecialFunc(play_with_camera);//leitourgia cameras me ta velakia 
	glutTimerFunc(0, Timer, 0);
	glutMainLoop();

	return 1;
}