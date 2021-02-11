import os

bin_dir = "./bin"

env = Environment(
    CPPPATH=['./bin', './Hertzel/src/', "./Hertzel/vendor/spdlog/include"], 
    LIBPATH=['./bin'], 
    CCFLAGS='-std=c++17', 
    CPPDEFINES={'HZ_PLATFORM_MAC' : '1'}
    )

herzel = env.SharedLibrary(target=os.path.join(bin_dir, "herzel"), source=[Glob('./Hertzel/src/**/*.cpp')])
sandbox = env.Program(target=os.path.join(bin_dir, "app"), source="./Sandbox/src/SandboxApp.cpp", LIBS=['libherzel'])