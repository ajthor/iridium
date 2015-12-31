// Standard headers.
#include <stdio.h>
#include <stdlib.h>

// Include GLEW.
#include <GL/glew.h>

// Include GLFW.
#include <GLFW/glfw3.h>

// Include GLM.
#include <glm/glm.hpp>

// Include user libraries.
#include "../lib/graphics/graphics.hpp"


int main(int argc, char const *argv[]) {
  // Initialize the graphics libraries.
  if (!glfwInit())
    return -1;

  GLFWwindow* window = gCreateWindow();
  if (window == NULL) {
    glfwTerminate();
    return -1;
  }

  /* Make the window's context current */
  glfwMakeContextCurrent(window);

  // Initialize GLEW
	glewExperimental = true; // Needed for core profile
	if (glewInit() != GLEW_OK) {
		glfwTerminate();
		return 0;
	}

  // Draw black background
  glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

  /* Loop until the user closes the window */
  do {

    /* Render here */
    gRender(window);

    /* Swap front and back buffers */
    glfwSwapBuffers(window);

    /* Poll for and process events */
    glfwPollEvents();

  } while (!glfwWindowShouldClose(window));

  glfwTerminate();

  return 0;
}
