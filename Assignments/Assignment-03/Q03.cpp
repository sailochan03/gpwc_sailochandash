#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    VideoMode vm(1920, 1080);
    RenderWindow window(vm, "Event example", Style::Fullscreen);

    while (window.isOpen())
    {
        Event event;

        while (window.pollEvent(event))
        {
            if (event.type == Event.KeyPressed)
            {
                std::cout << "Key Press Detected" << std::endl;
            }

            if (event.type == Event.Closed)
            {
                window.close();
            }
        }
        window.clear();
        window.display();
    }
    return 0;
}