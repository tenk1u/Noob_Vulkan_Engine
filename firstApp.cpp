//
// Created by PC on 23/03/2024.
//

#include "firstApp.hpp"

namespace nve {
    void FirstApp::run() {
        while(!m_nveWindow.shouldClose()){
            glfwPollEvents();
        }
    }
} // nve