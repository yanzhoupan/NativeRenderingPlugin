#include <GLFW/glfw3.h>
#include <GL/gl.h>

int main() {
    // 初始化GLFW
    if (!glfwInit()) {
        return -1;
    }

    // 创建一个窗口
    GLFWwindow* window = glfwCreateWindow(800, 600, "Simple Triangle", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    // 将窗口的OpenGL上下文设为当前上下文
    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
        // 清空颜色缓冲区
        glClear(GL_COLOR_BUFFER_BIT);

        // 绘制一个简单的三角形
        glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f); // 设置红色
        glVertex2f(0.0f, 0.5f);      // 顶点1
        glColor3f(0.0f, 1.0f, 0.0f); // 设置绿色
        glVertex2f(-0.5f, -0.5f);    // 顶点2
        glColor3f(0.0f, 0.0f, 1.0f); // 设置蓝色
        glVertex2f(0.5f, -0.5f);     // 顶点3
        glEnd();

        // 交换前后缓冲区
        glfwSwapBuffers(window);

        // 处理事件
        glfwPollEvents();
    }

    // 清理GLFW资源
    glfwTerminate();
    return 0;
}
