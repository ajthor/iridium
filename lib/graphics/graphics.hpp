#ifndef GRAPHICS_H
#define GRAPHICS_H

GLFWwindow * gCreateWindow() {
  glfwWindowHint(GLFW_SAMPLES, 4); // 4x antialiasing
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); // We want OpenGL 3.3
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // To make MacOS happy; should not be needed
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); //We don't want the old OpenGL

  /* Create a windowed mode window and its OpenGL context */
  return glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
}

void gRender(GLFWwindow * window) {

}

#endif
