//
// Created by PC on 24/03/2024.
//

#ifndef NOOBVE_NVEPIPELINE_HPP
#define NOOBVE_NVEPIPELINE_HPP

#include <string>
#include <vector>

namespace nve {

    class NvePipeline {
    public:
        NvePipeline(const std::string &vertFilepath, const std::string &fragFilepath);

    private:
        static std::vector<char> readFile(const std::string &filepath);

        void createGraphicsPipeline(const std::string &vertFilepath, const std::string &fragFilepath);
    };

} // nve

#endif //NOOBVE_NVEPIPELINE_HPP
