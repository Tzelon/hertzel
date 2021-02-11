#pragma once

extern Hertzel::Application *Hertzel::CreateApplication();

#ifdef HZ_PLATFORM_MAC
int main(int argc, char **argv)
{
    Hertzel::Log::Init();
    HZ_WARN("Hey From Core");
    int a = 5;
    HZ_CORE_ERROR("Hey From Client var={0}", a);

    auto app = Hertzel::CreateApplication();
    app->Run();
    delete app;
}
#endif