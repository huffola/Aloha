#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

void enemy(int num) //Written By Ryan
{
     switch (num)
     {
     case 1: glBegin(GL_TRIANGLES); //Position 3
          glColor3ub(255, 0, 0);
          glVertex2f(0.25, 0.9);
          glVertex2f(0.1, 0.6);
          glVertex2f(0.4, 0.6);
          glEnd();
          break;
     case 2: glBegin(GL_TRIANGLES); //Position 6
          glColor3ub(255, 0, 0);
          glVertex2f(0.25, 0.4);
          glVertex2f(0.1, 0.1);
          glVertex2f(0.4, 0.1);
          glEnd();
          break;
     case 3: glBegin(GL_TRIANGLES); //Position 7
          glColor3ub(255, 0, 0);
          glVertex2f(-0.25, 0.4);
          glVertex2f(-0.4, 0.1);
          glVertex2f(-0.1, 0.1);
          glEnd();
          break;
     case 4: glBegin(GL_TRIANGLES); //Position 10
          glColor3ub(255, 0, 0);
          glVertex2f(-0.25, -0.1);
          glVertex2f(-0.4, -0.4);
          glVertex2f(-0.1, -0.4);
          glEnd();
          break;
     case 5: glBegin(GL_TRIANGLES); //Position 14
          glColor3ub(255, 0, 0);
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
     glVertex3f(-1.0f, 1.0f, 0.0f); //top left       
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

     /* Loop until the user closes the window */
     while (!glfwWindowShouldClose(window))
     {
          /* Render here */
          map();
          enemy(1);
          enemy(2);
          enemy(3);
          enemy(4);
          enemy(5);

          /* Swap front and back buffers */
          glfwSwapBuffers(window);

          /* Poll for and process events */
          glfwPollEvents();
     }

     glfwTerminate();
     return 0;
}
