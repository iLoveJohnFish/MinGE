#pragma once

#include <pybind11/embed.h>
#include <string>

#include "PythonScriptComponent.h"

namespace PeachCore {

    struct PythonScriptManager
    {
    public:
        static PythonScriptManager& PythonScript() {
            static PythonScriptManager instance;
            return instance;
        }
        void RunPythonScript(const std::string& script);

    private:
        PythonScriptManager() = default;
        ~PythonScriptManager() = default;

        PythonScriptManager(const PythonScriptManager&) = delete;
        PythonScriptManager& operator=(const PythonScriptManager&) = delete;

    };
}