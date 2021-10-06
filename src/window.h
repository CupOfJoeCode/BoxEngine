#define WINDOW_TITLE "Game Engine"
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600


void reshape(int w, int h) // Window resize function
{
    glViewport(0, 0, w,h); // Resize the window
}

void windowInit() { // Initializes a bunch of window stuff
    
    glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT); // Set window size
    glutInitWindowPosition(100, 100); // Set window position
    glutCreateWindow(WINDOW_TITLE); // Greate window and set window title
    glEnable(GL_DEPTH_TEST); // Enable Z-Buffer

    glutDisplayFunc(renderer); // Function called for every draw call
    glutReshapeFunc(reshape); // Function called every time the window is resized
    glutTimerFunc(0, timer, 0); // Runs every frame
    glutKeyboardFunc(keyboardDown); // Runs every time a key is pressed
    glutKeyboardUpFunc(keyboardUp); // Runs every time a key is released
    gluPerspective(60., ( (float)WINDOW_WIDTH / (float)WINDOW_HEIGHT ), 0.1, 100.0); // Creates a perspective camera
}