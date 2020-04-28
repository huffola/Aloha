#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <Windows.h>
#include <glut.h>

void mouseControl()
{

}

bool towerProx(int placed)
{
     return false;
}

void turret(int num)
{
     GLfloat r = 102;
     GLfloat g = 0;
     GLfloat b = 204;

     switch (num)
     {
     case 1:

          //Position 2 Turret
          glBegin(GL_QUADS); //will be set to begin if MouseControl activates
          glColor3ub(r, g, b); // set color purple
          glVertex3f(-0.25f, .875f, 0.1f);
          glVertex3f(-0.375, .75f, 0.1f);
          glVertex3f(-0.25f, .625f, 0.1f);
          glVertex3f(-0.125f, 0.75f, 0.1f);
          glEnd();
          break;

     case 2:
          //Position 15 Turret
          glBegin(GL_QUADS); 
          glColor3ub(r, g, b); // set color purple
          glVertex3f(0.25f, -.625f, 0.1f);
          glVertex3f(0.125, -.75f, 0.1f);
          glVertex3f(0.25f, -0.875f, 0.1f);
          glVertex3f(0.375f, -0.75f, 0.1f);
          glEnd();
          break;
     }
}


bool damage()

{
     bool towerproximity = towerProx(1);
     if (towerproximity)
          return true;
     else
          return false;
}

void enemy(int num) //Written By Ryan
{
     GLfloat r = 255;
     GLfloat g = 0;
     GLfloat b = 0;
     bool isdamaged = damage();
     switch (num)
     {
     case 1: glBegin(GL_TRIANGLES); //Position 3
          if (isdamaged)
          {
              g = 255;
              b = 255;
          }
          glColor3ub(r, g, b);
          glVertex2f(0.25, 0.9);
          glVertex2f(0.1, 0.6);
          glVertex2f(0.4, 0.6);
          glEnd();
          break;
     case 2: glBegin(GL_TRIANGLES); //Position 6
          if (isdamaged)
          {
               g = 255;
               b = 255;
          }
          glColor3ub(r, g, b);
          glVertex2f(0.25, 0.4);
          glVertex2f(0.1, 0.1);
          glVertex2f(0.4, 0.1);
          glEnd();
          break;
     case 3: glBegin(GL_TRIANGLES); //Position 7
          if (isdamaged)
          {
               g = 255;
               b = 255;
          }
          glColor3ub(r, g, b);
          glVertex2f(-0.25, 0.4);
          glVertex2f(-0.4, 0.1);
          glVertex2f(-0.1, 0.1);
          glEnd();
          break;
     case 4: glBegin(GL_TRIANGLES); //Position 10
          if (isdamaged)
          {
               g = 255;
               b = 255;
          }
          glColor3ub(r, g, b);
          glVertex2f(-0.25, -0.1);
          glVertex2f(-0.4, -0.4);
          glVertex2f(-0.1, -0.4);
          glEnd();

          break;
     case 5: glBegin(GL_TRIANGLES); //Position 14
          if (isdamaged)
          {
               g = 255;
               b = 255;
          }
          glColor3ub(r, g, b);
          glVertex2f(-0.25, -0.6);
          glVertex2f(-0.4, -0.9);
          glVertex2f(-0.1, -0.9);
          glEnd();
          break;

     }
}

void map()
{
     glColor3ub(0, 128, 0); // set color green

          //Position 1
     glBegin(GL_QUADS);
     glVertex3f(-1.0f, 1.0f, 0.0f); //top left       
     glVertex3f(-1.0f, 0.5f, 0.0f);//bottom left
     glVertex3f(-0.5f, 0.5f, 0.0f); //bottom right        
     glVertex3f(-0.5f, 1.0f, 0.0f); //top right
     glEnd();

     //Position 2
     glBegin(GL_QUADS);
     glVertex3f(-0.50f, 1.0f, 0.0f); //top left       
     glVertex3f(-0.5f, 0.5f, 0.0f);//bottom left
     glVertex3f(0.0f, 0.5f, 0.0f); //bottom right        
     glVertex3f(0.0f, 1.0f, 0.0f); //top right
     glEnd();

     //Position 3
     glColor3ub(139, 69, 19); // set color brown
     glBegin(GL_QUADS);
     glVertex3f(0.0f, 1.0f, 0.0f); //top left       
     glVertex3f(0.0f, 0.5f, 0.0f);//bottom left
     glVertex3f(0.5f, 0.5f, 0.0f); //bottom right        
     glVertex3f(0.5f, 1.0f, 0.0f); //top right
     glEnd();

     //Position 4
     glColor3ub(0, 128, 0); // set color green
     glBegin(GL_QUADS);
     glVertex3f(0.5f, 1.0f, 0.0f); //top left       
     glVertex3f(0.5f, 0.5f, 0.0f);//bottom left
     glVertex3f(1.0f, 0.5f, 0.0f); //bottom right        
     glVertex3f(1.0f, 1.0f, 0.0f); //top right
     glEnd();

     //Position 5
     glBegin(GL_QUADS);
     glVertex3f(-1.0f, .5f, 0.0f); //top left       
     glVertex3f(-1.0f, 0.0f, 0.0f);//bottom left
     glVertex3f(-0.5f, 0.0f, 0.0f); //bottom right        
     glVertex3f(-0.5f, 0.5f, 0.0f); //top right
     glEnd();

     //Position 6
     glColor3ub(139, 69, 19); // set color brown
     glBegin(GL_QUADS);
     glVertex3f(-0.5f, 0.5f, 0.0f); //top left       
     glVertex3f(-0.5f, 0.0f, 0.0f);//bottom left
     glVertex3f(0.0f, 0.0f, 0.0f); //bottom right        
     glVertex3f(0.0f, 0.5f, 0.0f); //top right
     glEnd();

     //Position 7
     glBegin(GL_QUADS);
     glVertex3f(0.0f, 0.5f, 0.0f); //top left       
     glVertex3f(0.0f, 0.0f, 0.0f);//bottom left
     glVertex3f(0.5f, 0.0f, 0.0f); //bottom right        
     glVertex3f(0.5f, 0.5f, 0.0f); //top right
     glEnd();

     //Position 8
     glColor3ub(0, 128, 0); // set color green
     glBegin(GL_QUADS);
     glVertex3f(0.5f, 0.5f, 0.0f); //top left       
     glVertex3f(0.5f, 0.0f, 0.0f);//bottom left
     glVertex3f(1.0f, 0.0f, 0.0f); //bottom right        
     glVertex3f(1.0f, 0.5f, 0.0f); //top right
     glEnd();

     //Position 9
     glBegin(GL_QUADS);
     glVertex3f(-1.0f, 0.0f, 0.0f); //top left       
     glVertex3f(-1.0f, -0.5f, 0.0f);//bottom left
     glVertex3f(-0.5f, -0.5f, 0.0f); //bottom right        
     glVertex3f(-0.5f, 0.0f, 0.0f); //top right
     glEnd();

     //Position 10
     glColor3ub(139, 69, 19); // set color brown
     glBegin(GL_QUADS);
     glVertex3f(-0.5f, 0.0f, 0.0f); //top left       
     glVertex3f(-0.5f, -0.5f, 0.0f);//bottom left
     glVertex3f(0.0f, -0.5f, 0.0f); //bottom right        
     glVertex3f(0.0f, 0.0f, 0.0f); //top right
     glEnd();

     //Position 11
     glColor3ub(0, 128, 0); // set color green
     glBegin(GL_QUADS);
     glVertex3f(0.0f, 0.0f, 0.0f); //top left       
     glVertex3f(0.0f, -0.5f, 0.0f);//bottom left
     glVertex3f(0.5f, -0.5f, 0.0f); //bottom right        
     glVertex3f(0.5f, 0.0f, 0.0f); //top right
     glEnd();

     //Position 12
     glBegin(GL_QUADS);
     glVertex3f(0.5f, 0.0f, 0.0f); //top left       
     glVertex3f(0.5f, -0.5f, 0.0f);//bottom left
     glVertex3f(1.0f, -0.5f, 0.0f); //bottom right        
     glVertex3f(1.0f, 0.0f, 0.0f); //top right
     glEnd();

     //Position 13
     glBegin(GL_QUADS);
     glVertex3f(-1.0f, -0.5f, 0.0f); //top left       
     glVertex3f(-1.0f, -1.0f, 0.0f);//bottom left
     glVertex3f(-0.5f, -1.0f, 0.0f); //bottom right        
     glVertex3f(-0.5f, -0.5f, 0.0f); //top right
     glEnd();

     //Position 14
     glColor3ub(139, 69, 19); // set color brown
     glBegin(GL_QUADS);
     glVertex3f(-0.5f, -0.5f, 0.0f); //top left       
     glVertex3f(-0.5f, -1.0f, 0.0f);//bottom left
     glVertex3f(-0.0f, -1.0f, 0.0f); //bottom right        
     glVertex3f(-0.0f, -0.5f, 0.0f); //top right
     glEnd();

     //Position 15
     glColor3ub(0, 128, 0); // set color green
     glBegin(GL_QUADS);
     glVertex3f(0.0f, -0.5f, 0.0f); //top left       
     glVertex3f(0.0f, -1.0f, 0.0f);//bottom left
     glVertex3f(0.5f, -1.0f, 0.0f); //bottom right        
     glVertex3f(0.5f, -0.5f, 0.0f); //top right
     glEnd();

     //Position 16
     glBegin(GL_QUADS);
     glVertex3f(0.5f, -0.5f, 0.0f); //top left       
     glVertex3f(0.5f, -1.0f, 0.0f);//bottom left
     glVertex3f(1.0f, -1.0f, 0.0f); //bottom right        
     glVertex3f(1.0f, -0.5f, 0.0f); //top right
     glEnd();

     //Position 2 Turret Placeholder
     glBegin(GL_QUADS);
     glColor3ub(160,160,160); // set color grey
     glVertex3f(-0.25f,.875f,0.1f);
     glVertex3f(-0.375,.75f,0.1f);
     glVertex3f(-0.25f,.625f,0.1f);
     glVertex3f(-0.125f,0.75f,0.1f);
     glEnd();

     //Position 15 Turret Placeholder
     glBegin(GL_QUADS);
     glColor3ub(160, 160, 160); // set color grey
     glVertex3f(0.25f, -.625f, 0.1f);
     glVertex3f(0.125, -.75f, 0.1f);
     glVertex3f(0.25f, -0.875f, 0.1f);
     glVertex3f(0.375f, -0.75f, 0.1f);
     glEnd();

     
     



}

int main(void)
{
     GLFWwindow* window;

     /* Initialize the library */
     if (!glfwInit())
          return -1;

     /* Create a windowed mode window and its OpenGL context */
     window = glfwCreateWindow(1000, 1000, "Aloha Tower Defence", NULL, NULL);
     if (!window)
     {
          glfwTerminate();
          return -1;
     }

     /* Make the window's context current */

     glfwMakeContextCurrent(window);


     if (glewInit() != GLEW_OK)
          std::cout << "Error!" << std::endl;

     std::cout << glGetString(GL_VERSION) << std::endl;

     int x = 0;
     double startTime = glfwGetTime();

     /* Loop until the user closes the window */
     while (!glfwWindowShouldClose(window))
     {
          double currentTime = glfwGetTime();

          /* Render here */
          //'The' Loop

          glClear(GL_COLOR_BUFFER_BIT);
          map();
          enemy(x);
          if (x < 5 && (currentTime - startTime) > x * 0.2)
               x += 1;

          /* Swap front and back buffers */
          glfwSwapBuffers(window);

          /* Poll for and process events */
          glfwPollEvents();
     }

     glfwTerminate();
     return 0;
}

