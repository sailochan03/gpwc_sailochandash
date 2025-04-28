#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    VideoMode vm(1920, 1080);
    RenderWindow window(vm, "Key Press", Style::Fullscreen);

    while (window.isOpen())
    {
        if (Keyboard::isKeyPressed(Keyboard::Return))
        {
            std::cout << "Enter is Pressed" << std::endl;
        }

        window.clear();
        window.display();
    }
    return 0;
}