#include <SFML/Graphics.cpp>

using namespace sf;

int main()
{
    VideoMode vm(1920, 1080);
    RenderWindow window(vm, "SOAU", Style::Fullscreen);

    Font font;
    font.loadFromFile("KONIKAP_.ttf");

    Text messageText("SOA UNIVERSITY", font, 100);
    messageText.setFont(font);
    messageText.setFillColor(Color::Red);

    FloatRect rect = messageText.getLocalBounds();
    messageText.setOrigin(rect.left + rect.width / 2, rect.top + rect.height / 2);
    messageText.setPosition(1920 / 2, 1080 / 2);

    while (window.isOpen())
    {
        window.clear();
        window.draw(messageText);
        window.display();
    }
    return 0;
}