#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{

    VideoMode vm(1920, 1080);
    RenderWindow window(vm, "Red Rectangle", Style::Fullscreen);

    float X = 200.0f;
    float Y = 100.0f;

    RectangleShape rectangle({X, Y});
    rectangle.setFillColor(Color::Red);
    rectangle.setPosition((1920 - X) / 2, (1080 - Y) / 2);

    while (window.isOpen())
    {
        window.clear();
        window.draw(rectangle);
        window.display();
    }

    return 0;
}