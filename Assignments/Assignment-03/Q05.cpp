#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    VideoMode vm(1920, 1080);
    RenderWindow window(vm, "Key Press", Style::Fullscreen);

    SoundBuffer buffer;
    buffer.loadFromFile("out_of_time.wav");

    Sound sound;
    sound.setBuffer(buffer);

    bool outOfTime = false;

    while (window.isOpen())
    {
        if (Keyboard::isKeyPressed(Keyboard::Space))
        {
            outOfTime = true;
        }
        if (outOfTime)
        {
            sound.play();
            outOfTime = false;
        }
        window.clear();
        window.display();
    }
    return 0;
}