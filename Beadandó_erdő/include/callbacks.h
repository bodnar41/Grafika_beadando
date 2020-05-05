/*
 * callbacks.h
 *
 *   Created by: Bodnár Márk Ármin	
 */
#ifndef CALLBACKS_H
#define CALLBACKS_H
#include <stdio.h>


/**
 * Set the callbacks for GLUT.
 */
void set_callbacks();

/**
 * Load the texture for object.
 */
GLuint load_texture(const char* filename, struct Model* model);

/**
 * Call when there is no other event.
 */
void idle();

/**
 * Call after keyboard release event.
 */
void key_up_handler(unsigned char key, int x, int y);

/**
 * Call after keyboard release event.
 */
void key_handler(unsigned char key, int x, int y);

/**
 * Call after mouse event.
 */
void motion_handler(int x, int y);

/**
 * Call after mouse button event.
 */
void mouse_handler(int button, int state, int x, int y);

/**
 * Call when need to display the graphical content.
 */
void display();

/**
 * Set the rotation of the objects.
 */
void calc_rotation_of_objects(Rotate* rotate);

/**
 * Draw the help menu.
 */
void draw_help();

/**
 * Call after windows resizing.
 */
void reshape(GLsizei width, GLsizei height);

/**
 * Call after keyboard release event.
 */
void specialFunc(int key, int x, int y);

/**
 * Calculate the elapsed time.
 */
double calc_elapsed_time();

/**
 * Update the position of the camera.
 */
void update_camera_position(struct Camera* camera, double elapsed_time);

/**
 * Initialize the OpenGL context.
 */
void init();

#endif // CALBBACKS_H
