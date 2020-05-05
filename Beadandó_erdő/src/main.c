/*
 * main.c
 *
 *   Created by: Bodnár Márk Ármin	
 */
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "draw.h"
#include "SOIL/SOIL.h"
#include <time.h>
#include "callbacks.h"

int main(int argc, char** argv) {
	
	glutInit(&argc, argv);
	glutInitWindowSize(1200, 800);
	//glutInitWindowSize(640, 480);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	int wnd = glutCreateWindow("Grafika Beadando - Sugo megjelenitese : F1");
	glutSetWindow(wnd);
	init();
	glutMainLoop();

	return 0;
}

