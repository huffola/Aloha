#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <Windows.h>
#include <glut.h>



bool towerProx(int placed)
{
     return false;
}

void turret(int num)
{
     GLubyte r = 102;
     GLubyte g = 0;
     GLubyte b = 204;

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
     GLubyte r = 255;
     GLubyte g = 0;
     GLubyte b = 0;
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
          glVertex2f(0.25f, 0.9f);
          glVertex2f(0.1f, 0.6f);
          glVertex2f(0.4f, 0.6f);
          glEnd();
          break;
     case 2: glBegin(GL_TRIANGLES); //Position 6
          if (isdamaged)
          {
               g = 255;
               b = 255;
          }
          glColor3ub(r, g, b);
          glVertex2f(0.25f, 0.4f);
          glVertex2f(0.1f, 0.1f);
          glVertex2f(0.4f, 0.1f);
          glEnd();
          break;
     case 3: glBegin(GL_TRIANGLES); //Position 7
          if (isdamaged)
          {
               g = 255;
               b = 255;
          }
          glColor3ub(r, g, b);
          glVertex2f(-0.25f, 0.4f);
          glVertex2f(-0.4f, 0.1f);
          glVertex2f(-0.1f, 0.1f);
          glEnd();
          break;
     case 4: glBegin(GL_TRIANGLES); //Position 10
          if (isdamaged)
          {
               g = 255;
               b = 255;
          }
          glColor3ub(r, g, b);
          glVertex2f(-0.25f, -0.1f);
          glVertex2f(-0.4f, -0.4f);
          glVertex2f(-0.1f, -0.4f);
          glEnd();

          break;
     case 5: glBegin(GL_TRIANGLES); //Position 14
          if (isdamaged)
          {
               g = 255;
               b = 255;
          }
          glColor3ub(r, g, b);
          glVertex2f(-0.25f, -0.6f);
          glVertex2f(-0.4f, -0.9f);
          glVertex2f(-0.1f, -0.9f);
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
     glColor3ub(160, 160, 160); // set color grey
     glVertex3f(-0.25f, .875f, 0.1f);
     glVertex3f(-0.375, .75f, 0.1f);
     glVertex3f(-0.25f, .625f, 0.1f);
     glVertex3f(-0.125f, 0.75f, 0.1f);
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

     {
          int argc = 1;
          char* argv[1] = { (char*)"Something" };
          glutInit(&argc, argv);
     }

     std::cout << glGetString(GL_VERSION) << std::endl;

     int x = 0;
     double startTime = glfwGetTime();
     double xpos, ypos;
     /* Loop until the user closes the window */
     while (!glfwWindowShouldClose(window))
     {
          double currentTime = glfwGetTime();
          int state = glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT);
          glfwGetCursorPos(window, &xpos, &ypos);
          if (state == GLFW_PRESS && xpos >= 250 && xpos <= 500 && ypos >= 0 && ypos <= 250)
          {
               turret(1);  //Doesn't seem to currently be working
               Sleep(10000); //Only here to test if a mouse click pauses the animation
               std::cout << "Tower 1 Placed!" << std::endl;
          }
          /* Render here */

          glClear(GL_COLOR_BUFFER_BIT);
          map();
          enemy(x);
          if (x < 5 && (currentTime - startTime) > x * 1)
               x += 1;

          /* Swap front and back buffers */
          glfwSwapBuffers(window);

          /* Poll for and process events */
          glfwPollEvents();
     }

     glfwTerminate();
     return 0;
}
