//#include "Glad/glad.h"
#include <iostream>
#include <GLFW/glfw3.h>


int main(){

    std::cout << "hej there" << std::endl;

    GLFWwindow *window;

    if(!glfwInit()){
        fprintf(stderr, "Failes to initialize GLFW\n");
        exit(EXIT_FAILURE);
    }

    window = glfwCreateWindow(300, 300, "mywindow", NULL, NULL);
    if (!window)
    {
        fprintf(stderr, "Failed to open GLFW window\n");
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    while(!glfwWindowShouldClose(window))
    {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();

    exit(EXIT_SUCCESS);

}


//int main(){
//    glfwInit();
//    GLFWwindow* w = glfwCreateWindow(600, 600, "this", NULL, NULL);
//    glfwMakeContextCurrent(w);
//    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
//    float t[] = 
//    {
//        -.5f, -.5f, 0.f,
//        -0.f, .5f, 0.f,
//        .5f, -.5f, 0.f
//    };
//
//    uint32_t v;
//    glGenBuffers(1, &v);
//    glBindBuffer(GL_ARRAY_BUFFER, v);
//    glBufferData(GL_ARRAY_BUFFER, sizeof(t)*sizeof(t)/sizeof(t[0]), &t[0], GL_STATIC_DRAW);
//
//    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(float)*3, (void*)0);
//    glEnableVertexAttribArray(0);
//    while(!glfwWindowShouldClose(w)){
//        glClear(GL_COLOR_BUFFER_BIT);
//        glDrawArrays(GL_TRIANGLES, 0, 3);
//        glfwSwapBuffers(w);
//        glfwPollEvents();
//    }
//
//
//}
