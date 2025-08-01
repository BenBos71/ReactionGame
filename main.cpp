#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "My SFML Window");

    while (window.isOpen())
    {
        // Event handling
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Clear the window
        window.clear(sf::Color::Black); // Clears with black color

        // Draw elements (e.g., shapes, sprites, text)
        // window.draw(your_drawable_object);

        // Display the contents of the window
        window.display();
    }


    return 0;
}