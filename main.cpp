#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Reaction Game");
    sf::CircleShape shape(100);
    shape.setFillColor(sf::Color::Green);
    sf::CircleShape shape2(100);
    shape2.setFillColor(sf::Color::Red);
    
    window.clear(sf::Color::Black); // Clears with black color


    shape.setPosition(200, 200);
    shape2.setPosition(500, 200);

    window.draw(shape);
    window.draw(shape2);

    window.display();

    while (window.isOpen())
    {
        // Event handling
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            if (event.type == sf::Event::Resized)
            {
                // Update the view to match the new window size
                sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
                sf::View view(visibleArea);
                window.setView(view);

                window.clear(sf::Color::Black); // Clears with black color

                shape.setPosition(view.getCenter().x - 200, view.getCenter().y);
                shape2.setPosition(view.getCenter().x + 200, view.getCenter().y);

                window.draw(shape);
                window.draw(shape2);

                window.display();
            }
        }

    }


    return 0;
}