#pragma once
#include <chrono>

#include <glm/glm.hpp>
#include <GL/glew.h>
#include <SDL2/SDL.h>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#define NUMBERS_POINT_HEIGHT_MESH 100
#define NUMBERS_POINT_WIDTH_MESH 100

using Clock = std::chrono::high_resolution_clock;
using TimePoint = std::chrono::time_point<Clock>;

class Renderer {
public:
    void Init(SDL_Window *window, int w, int h);

    void Render();

    void Close();

private:
    GLuint VAO, VBO, EBO;
    GLuint shaderProgram;
    SDL_Window *window;
    unsigned int texture;
    GLfloat translations[300];
    TimePoint start_time;
    int width, height;
    glm::mat4 model, view, projection;
};