#include <Hertzel.h>

class Sandbox : public Hertzel::Application
{
public:
    Sandbox(/* args */) {}
    ~Sandbox() {}
};

Hertzel::Application* Hertzel::CreateApplication() 
{
    return new Sandbox();
}