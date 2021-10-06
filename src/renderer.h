void drawBox(double x, double y, double z, double l, double h, double w, double r, double g, double b) { // Draws a simple box

    glColor3f(r-0.1,g-0.1,b-0.1);
    glVertex3f(x - l,y - h,z - w);
    glColor3f(r,g,b); 
    glVertex3f(x + l,y - h,z - w);
    glColor3f(r+0.1,g+0.1,b+0.1); 
    glVertex3f(x + l,y + h,z - w); 
    glColor3f(r,g,b); 
    glVertex3f(x - l,y + h,z - w);


    glColor3f(r,g,b);
    glVertex3f(x - l,y - h,z + w);
    glColor3f(r+0.1,g+0.1,b+0.1); 
    glVertex3f(x + l,y - h,z + w);
    glColor3f(r+0.2,g+0.2,b+0.2); 
    glVertex3f(x + l,y + h,z + w); 
    glColor3f(r+0.1,g+0.1,b+0.1); 
    glVertex3f(x - l,y + h,z + w);



    glColor3f(r-0.1,g-0.1,b-0.1);
    glVertex3f(x - l,y - h,z - w);
    glColor3f(r,g,b); 
    glVertex3f(x - l,y - h,z + w);
    glColor3f(r+0.1,g+0.1,b+0.1); 
    glVertex3f(x - l,y + h,z + w); 
    glColor3f(r,g,b); 
    glVertex3f(x - l,y + h,z - w);


    glColor3f(r,g,b);
    glVertex3f(x + l,y - h,z - w);
    glColor3f(r+0.1,g+0.1,b+0.1); 
    glVertex3f(x + l,y - h,z + w);
    glColor3f(r+0.2,g+0.2,b+0.2); 
    glVertex3f(x + l,y + h,z + w); 
    glColor3f(r+0.1,g+0.1,b+0.1); 
    glVertex3f(x + l,y + h,z - w);


    glColor3f(r-0.1,g-0.1,b-0.1);
    glVertex3f(x - l,y - h,z - w);
    glColor3f(r,g,b); 
    glVertex3f(x - l,y - h,z + w);
    glColor3f(r+0.1,g+0.1,b+0.1); 
    glVertex3f(x + l,y - h,z + w); 
    glColor3f(r,g,b); 
    glVertex3f(x + l,y - h,z - w);

    glColor3f(r,g,b);
    glVertex3f(x - l,y + h,z - w);
    glColor3f(r+0.1,g+0.1,b+0.1); 
    glVertex3f(x - l,y + h,z + w);
    glColor3f(r+0.2,g+0.2,b+0.2); 
    glVertex3f(x + l,y + h,z + w); 
    glColor3f(r+0.1,g+0.1,b+0.1); 
    glVertex3f(x + l,y + h,z - w);



}

void renderer() {

   
    glPushMatrix(); // Push the transformation matrix
    
    
    glRotatef(player.rotation,0.,1.,0.); // Rotates the scene
    glTranslatef(-player.xPos,0,-player.yPos);

    glClearColor(0.2,0.4,0.8,1.); // Blue color for background
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear the screen

   

    glBegin(GL_QUADS); // Begin Drawing Shape

    drawBox(0,0,-4,1,8,1,1,0,0); 

    drawBox(7,0,2,2,10,3,0,0,1);

    drawBox(0,-2,0, 16,0.5,16 ,0.5,0.3,0.1);


    drawBox(0-3,0,0,1,1,1,0.5,0.2,0.5);

    glEnd(); // Stop Drawing Shape


    

    glFlush(); // Flush to one frame buffer

    glutSwapBuffers(); // Swap frame buffers
    
    glPopMatrix(); // Pop transformation matrix
}

