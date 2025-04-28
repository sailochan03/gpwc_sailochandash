#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    VideoMode vm(960, 540);
    RenderWindow window(vm, "SOA", Style::Fullscreen);

    Texture textureImage;
    textureImage.loadFromFile("soa.jpeg");

    Sprite spriteImage;
    spriteImage.setTexture(textureImage);
    spriteImage.setPosition({(960 - spriteImage.size().x) / 2, 10});

    while (window.isOpen())
    {
        window.clear();
        window.draw(spriteImage);
        window.display();
    }

    return 0;
}