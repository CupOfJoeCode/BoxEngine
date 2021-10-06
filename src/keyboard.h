struct Keyboard {
    int key_w;
    int key_a;
    int key_s;
    int key_d;
    int key_space;
    int key_up;
    int key_down;
    int key_left;
    int key_right;
} keyboard;


void keyboardDown(unsigned char key, int x, int y) {
    switch(key) {
        case 'w':
            keyboard.key_w = 1;
        break;
        case 'a':
            keyboard.key_a = 1;
        break;
        case 's':
            keyboard.key_s = 1;
        break;
        case 'd':
            keyboard.key_d = 1;
        break;
        case ' ':
            keyboard.key_space = 1;
        break;
    }
}

void keyboardUp(unsigned char key, int x, int y) {
    switch(key) {
        case 'w':
            keyboard.key_w = 0;
        break;
        case 'a':
            keyboard.key_a = 0;
        break;
        case 's':
            keyboard.key_s = 0;
        break;
        case 'd':
            keyboard.key_d = 0;
        break;
        case ' ':
            keyboard.key_space = 0;
        break;
    }
}