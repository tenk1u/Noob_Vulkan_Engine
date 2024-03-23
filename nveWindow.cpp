//
// Created by PC on 23/03/2024.
//

#include "nveWindow.hpp"

namespace nve{
    NveWindow::NveWindow(int w, int h, std::string_view name) : m_width{w}, m_height{h}, m_windowName{name}{
        initWindow();
    }

    NveWindow::~NveWindow(){
        glfwDestroyWindow(m_window);
        glfwTerminate();
    }
    void NveWindow::initWindow() {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        m_window = glfwCreateWindow(m_width, m_height, m_windowName.data(), nullptr, nullptr);
    }
}// nve
