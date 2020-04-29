#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <Windows.h>

//Declarations
int x = 0;
int k = 0;
int mobhp = 3;
int click = 0;
int click2 = 0;
int coins = 1;
int health = 4;
bool start = false;
double startTime = glfwGetTime();
double xpos, ypos;
double currentTime = glfwGetTime();

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

     //Position 1 Start Button
     glBegin(GL_QUADS);
     glColor3ub(28, 15, 160);
     glVertex3f(-1.0f, 1.0f, 0.0f); //top left       
     glVertex3f(-1.0f, 0.75f, 0.0f);//bottom left
     glVertex3f(-0.75f, 0.75f, 0.0f); //bottom right        
     glVertex3f(-0.75f, 1.0f, 0.0f); //top right
     glEnd();

     //Position 13 Reset Button
     glBegin(GL_QUADS);
     glColor3ub(255, 255, 1);
     glVertex3f(-1.0f, -1.0f, 0.0f); //top left       
     glVertex3f(-1.0f, -0.75f, 0.0f);//bottom left
     glVertex3f(-0.75f, -0.75f, 0.0f); //bottom right        
     glVertex3f(-0.75f, -1.0f, 0.0f); //top right
     glEnd();
}

bool towerProx()
{

     if (click == 1 && (x == 1 || x == 2 || x == 3)) //Tower 1 has been placed and there is an enemy at one of the areas it can hit.
     {
          //std::cout << "Enemy at first tower" << std::endl;

          return true;
     }
     if (click2 == 2 && (x == 4 || x == 5)) //Tower 2 has been placed and there is an enemy at one of the areas it can hit.
     {
          // std::cout << "Enemy at second tower" << std::endl;

          return true;
     }

     return false;
}

bool damage()
{
     if (k == 2)
     {
          if (towerProx()&& mobhp > 0)
          {
               mobhp = mobhp - 0.5;
               if (mobhp == 0)
               {
                    coins++;
                    std::cout << "You defeated an enemy and recieved 1 coin" << std::endl;
                    std::cout << "You now have " << coins << " coin(s)" << std::endl;
               }
               return true;
          }
          else
               return false;

     }
     return false;

}

void enemy(int num)
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
          if (mobhp <= 0)
          {
               r = 139;
               g = 69;
               b = 19;
          }
          glColor3ub(r, g, b);
          glVertex2f(0.25f, 0.9f);
          glVertex2f(0.1f, 0.6f);
          glVertex2f(0.4f, 0.6f);
          glEnd();
          Sleep(200);
          break;
     case 2: glBegin(GL_TRIANGLES); //Position 6
          if (isdamaged)
          {
               g = 255;
               b = 255;
          }
          if (mobhp <= 0)
          {
               r = 139;
               g = 69;
               b = 19;
          }
          glColor3ub(r, g, b);
          glVertex2f(0.25f, 0.4f);
          glVertex2f(0.1f, 0.1f);
          glVertex2f(0.4f, 0.1f);
          glEnd();
          Sleep(200);
          break;
     case 3: glBegin(GL_TRIANGLES); //Position 7
          if (isdamaged)
          {
               g = 255;
               b = 255;
          }
          if (mobhp <= 0)
          {
               r = 139;
               g = 69;
               b = 19;
          }
          glColor3ub(r, g, b);
          glVertex2f(-0.25f, 0.4f);
          glVertex2f(-0.4f, 0.1f);
          glVertex2f(-0.1f, 0.1f);
          glEnd();
          Sleep(200);
          break;
     case 4: glBegin(GL_TRIANGLES); //Position 10
          if (isdamaged)
          {
               g = 255;
               b = 255;
          }
          if (mobhp <= 0)
          {
               r = 139;
               g = 69;
               b = 19;
          }
          glColor3ub(r, g, b);
          glVertex2f(-0.25f, -0.1f);
          glVertex2f(-0.4f, -0.4f);
          glVertex2f(-0.1f, -0.4f);
          glEnd();
          Sleep(200);
          break;
     case 5: glBegin(GL_TRIANGLES); //Position 14
          if (isdamaged)
          {
               g = 255;
               b = 255;
          }
          if (mobhp <= 0)
          {
               r = 139;
               g = 69;
               b = 19;
          }
          glColor3ub(r, g, b);
          glVertex2f(-0.25f, -0.6f);
          glVertex2f(-0.4f, -0.9f);
          glVertex2f(-0.1f, -0.9f);
          glEnd();
          Sleep(200);
          break;
     case 6: glBegin(GL_TRIANGLES); //Position 14
          glColor3ub(139, 69, 19); // set color brown
          glVertex2f(-0.25f, -0.6f);
          glVertex2f(-0.4f, -0.9f);
          glVertex2f(-0.1f, -0.9f);
          glEnd();
          Sleep(200);
          break;
     }
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
          glBegin(GL_QUADS);
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

int main(void)
{
     // Set OpenGL options
     glEnable(GL_CULL_FACE);
     glEnable(GL_BLEND);
     glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

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

     std::cout << "Welcome to Aloha Tower Defense." << std::endl << "Blue Square - Start Game" << std::endl << "Grey Diamonds - Activate Tower (Costs 1 coin)" << std::endl << "Yellow Square - Reset Game" << std::endl << std::endl;


     /* Loop until the user closes the window */

     while (!glfwWindowShouldClose(window))
     {
          currentTime = glfwGetTime();

          int state = glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT);

          glfwGetCursorPos(window, &xpos, &ypos);

          glClear(GL_COLOR_BUFFER_BIT);

          map();
          if (state == GLFW_PRESS && xpos >= 250 && xpos <= 500 && ypos >= 0 && ypos <= 250 && click != 1)
          {
               Sleep(200);
               if (coins >= 1) {
                    coins--;

                    click = 1;
                    std::cout << "Tower 1 Activated!" << std::endl;
               }
               else {
                    std::cout << "Not enough coins" << std::endl;
               }
          }// tower 1 if statement



          if (state == GLFW_PRESS && xpos >= 500 && xpos <= 750 && ypos >= 750 && ypos <= 1000 && click2 != 2)
          {
               Sleep(200);
               if (coins >= 1) {
                    coins--;

                    click2 = 2;
                    std::cout << "Tower 2 Activated!" << std::endl;
               }
               else {
                    std::cout << "Not enough coins" << std::endl;
               }
          }// tower 2 if statement

          turret(click); //activate turret          
          turret(click2); //activate turret


          if (state == GLFW_PRESS && xpos >= 0 && xpos <= 125 && ypos >= 0 && ypos <= 125)
          {
               start = true;              
               std::cout << "Round Started." << std::endl << "You have " << health << " Health" << std::endl << "You have " << coins << " coin" << std::endl;
               Sleep(200);
               mobhp = 3;
               x = 0;
               startTime = glfwGetTime();
          }
          if (state == GLFW_PRESS && xpos >= 0 && xpos <= 125 && ypos >= 875 && ypos <= 1000)
          {
               std::cout << "Resetting Game" << std::endl;
               Sleep(200);
               currentTime = glfwGetTime();
               x = 8;
               coins = 1;
               health = 4;
               click = 0;
               click2 = 0;
               mobhp = 3;
          }
          if (start) {

               
               enemy(x);
               k++;

               if (x < 5 && (currentTime - startTime) > x * 1) {
                    x += 1;
                    towerProx();
                    k = 0;
               }

               if (x >= 5 && x <6 && (currentTime - startTime) > x * 1 && mobhp > 0) {
                    x += 1;

                    health--;

                    std::cout << "An enemy has made it though, you lose 1 health:" << std::endl;
                    std::cout << "You now have " << health << " health." << std::endl;
               }

          }
          /* Swap front and back buffers */
          glfwSwapBuffers(window);

          /* Poll for and process events */
          glfwPollEvents();
     }

     glfwTerminate();
     return 0;
}

