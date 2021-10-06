/*
    This is one of my first ever C projects so the code isn't very good. Just a heads up.
*/

#include <stdio.h>
#include <math.h>
#include <GL/freeglut.h>
#include <GL/glu.h>
#include <GL/gl.h>


#include "player.h"
#include "keyboard.h"

#include "vec3.h"
#include "cube.h"
#include "renderer.h"
#include "update.h"
#include "window.h"


int main(int argc, char **argv) {

    glutInit(&argc, argv); // Initialize GLUT
    windowInit(); // Initializes window stuff
    glutMainLoop(); // Enters Main Loop

}