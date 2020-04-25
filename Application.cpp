#include <GLFW/glfw3.h>

int main(void)
{
     GLFWwindow* window;

     /* Initialize the library */
     if (!glfwInit())
          return -1;

     /* Create a windowed mode window and its OpenGL context */
     window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
     if (!window)
     {
          glfwTerminate();
          return -1;
     }

     /* Make the window's context current */
     glfwMakeContextCurrent(window);

     /* Loop until the user closes the window */
     while (!glfwWindowShouldClose(window))
     {
          /* Render here */
          glClear(GL_COLOR_BUFFER_BIT); // Clear the display

          glColor3ub(0,128, 0); // set color green

          //Position 1
          glBegin(GL_QUADS);           
          glVertex3f(-1.0f, 1.0f,0.0f); //top left       
          glVertex3f(-1.0f,0.5f,0.0f);//bottom left
          glVertex3f(-0.5f,0.5f, 0.0f); //bottom right        
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


          //Position 6 "Enemy"
          glColor3ub(0,0,0); // set color red
          glBegin(GL_TRIANGLES);
          glVertex3f(-0.25f, 0.4f,0.1f); //Top of triangle
          glVertex3f(-0.40f, 0.1f,0.1f); //Bottom Left
          glVertex3f(-0.1f, 0.1f,0.1f); //Bottom Right
          


        

         
         
         
          

          
          /* Swap front and back buffers */
          glfwSwapBuffers(window);

          /* Poll for and process events */
          glfwPollEvents();
     }

     glfwTerminate();
     return 0;
}