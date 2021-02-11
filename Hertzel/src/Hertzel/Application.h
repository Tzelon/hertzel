
#pragma once
#include "Core.h"

namespace Hertzel
{
    class HERTZEL_API Application
    {
    public:
        Application();
        virtual ~Application();
        void Run();
    };

    //To be defined in client
    Application* CreateApplication();
} // namespace Hertzel