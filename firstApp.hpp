//
// Created by PC on 23/03/2024.
//

#ifndef NOOBVE_FIRSTAPP_HPP
#define NOOBVE_FIRSTAPP_HPP

#include "nveWindow.hpp"

namespace nve {

    class FirstApp {
    public:
        static constexpr int WIDTH{800};
        static constexpr int HEIGHT{600};

        void run();

    private:
        NveWindow m_nveWindow{WIDTH, HEIGHT, "DOTA 3"};
    };

} // nve

#endif //NOOBVE_FIRSTAPP_HPP