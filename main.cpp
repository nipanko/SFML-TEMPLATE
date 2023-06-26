#include "SFML/Graphics.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Make Games Man!");
    sf::CircleShape shape(80.f, 90);
    shape.setFillColor(sf::Color(44, 211, 225)); // Color circle
    shape.setPosition(200, 200); // Center circle

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(0, 0, 0)); // Color background
        window.draw(shape);
        window.display();
    }

    return 0;
}