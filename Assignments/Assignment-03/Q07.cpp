#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    VideoMode vm(1920, 1080);
    RenderWindow window(vm, "Log Active", Style::Fullscreen);

    bool logActive = false;

    Texture textureLog;
    textureLog.loadFromFile("log.png");

    Sprite spriteLog;
    spriteLog.setTexture(textureLog);
    spriteLog.setPosition(960, 540);

    while (window.isOpen())
    {
        if (Keyboard::isKeyPressed(Keyboard::Left) || Keyboard::isKeyPressed(Keyboard::Right))
        {
            logActive = true;
        }

        window.clear();
        if (logActive)
        {
            spriteLog.move(5, 0);
            window.draw(spriteLog);
            if (spriteLog.getSize().x > 1920)
            {
                logActive = false;
            }
        }
        window.display();
    }
    return 0;
}