#pragma once

#ifdef HZ_PLATFORM_WINDOWS
    #ifdef HZ_BUILD_DLL
        #define HERTZEL_API __declspec(dllexport)
    #else
        #define HERTZEL_API __declspec(dllimport)
    #endif
#else 
    #define HERTZEL_API
#endif