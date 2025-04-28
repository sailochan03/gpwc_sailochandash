#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    VideoMode vm(1920, 1080);
    RenderWindow window(vm, "Design", Style::Fullscreen);

    float radius = 100.0f;

    CircleShape topLeftCircle(radius);
    topLeftCircle.setFillColor(Color::Green);
    CircleShape topRightCircle(radius);
    topRightCircle.setFillColor(Color::Green);
    CircleShape bottomLeftCircle(radius);
    bottomLeftCircle.setFillColor(Color::Green);
    CircleShape bottomRightCircle(radius);
    bottomRightCircle.setFillColor(Color::Green);

    topLeftCircle.setPosition(0, 0);
    topRightCircle.setPosition(1920 - (radius * 2), 0);
    bottomLeftCircle.setPosition(0, 1080 - (radius * 2));
    bottomRightCircle.setPosition(1920 - (radius * 2), 1080 - (radius * 2));

    CircleShape redCircle(radius);
    redCircle.setFillColor(Color::Red);
    redCircle.setPosition((1920 / 2) - radius, (1080 / 2) - radius);

    while (window.isOpen())
    {
        window.clear();
        window.draw(redCircle);
        window.draw(topLeftCircle);
        window.draw(topRightCircle);
        window.draw(bottomLeftCircle);
        window.draw(bottomRightCircle);
        window.display();
    }

    return 0;
}