void timer(int extra) {
    double pRotRad = player.rotation * (M_PI / 180.); // Converts rotation in degrees to radians for sin and cos
    if(keyboard.key_a) { // Rotate Left
        player.rotation -= 3.;
    }
    if(keyboard.key_d) { // Rotate Right
        player.rotation += 3.;
    }
    if(keyboard.key_w) { // Move Forward
        player.xV += sin(pRotRad) * 0.01;
        player.yV -= cos(pRotRad) * 0.01;
    }
    if(keyboard.key_s) { // Move Backwards
        player.xV -= sin(pRotRad) * 0.01;
        player.yV += cos(pRotRad) * 0.01;
    }

    

    player.xPos += player.xV; // Move
    player.yPos += player.yV;
    player.xV *= 0.90; // Friction
    player.yV *= 0.90;
    
    glutPostRedisplay(); // Waits for display to update
    glutTimerFunc(15, timer, 0); // Calls the timer function again
}