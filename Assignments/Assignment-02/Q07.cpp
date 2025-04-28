#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    VideoMode vm(960, 540);
    RenderWindow window(vm, "Fly SOA Logo", Style::Fullscreen);

    Texture textureImage;
    textureImage.loadFromFile("soa.jpeg");

    Sprite spriteImage;
    spriteImage.setTexture(textureImage);
    spriteImage.setPosition(480, 0);
    spritImage.setScale(1.5f, 1.5f);

    float speed = 100.0f;

    Clock clock;
    float dt = clock.restart().asSeconds();
    spriteImage.move(0, speed * dt);

    while (window.isOpen())
    {
        window.clear();
        window.draw(spriteImage);
        window.display();
    }

    return 0;
}