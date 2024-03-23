//
// Created by PC on 23/03/2024.
//

#ifndef NOOBVE_NVEWINDOW_HPP
#define NOOBVE_NVEWINDOW_HPP

#define GLFW_INCLUDE_VULKAN

#include "GLFW/glfw3.h"
#include <string_view>


namespace nve {
    class NveWindow {
    public:
        NveWindow(int w, int h, std::string_view name);

        ~NveWindow();

        NveWindow(const NveWindow &) = delete;// copy constructor deleted

        NveWindow &operator=(const NveWindow &) = delete;// copy assignment deleted

        bool shouldClose() { return glfwWindowShouldClose(m_window); }

    private:
        void initWindow();

        const int m_width{};
        const int m_height{};
        std::string_view m_windowName{};
        GLFWwindow *m_window{};
    };
}// nve

#endif //NOOBVE_NVEWINDOW_HPP
