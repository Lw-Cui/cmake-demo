#include <iostream>
#include <interpreter.h>
#include <gui.h>
#include <easylogging++.h>
#include <SFML/Graphics.hpp>

INITIALIZE_EASYLOGGINGPP

int main(int argc, char *argv[]) {
    START_EASYLOGGINGPP(argc, argv);

    int i = foo();
    std::cout << str() + 1 << std::endl << i << std::endl;
    LOG(INFO) << "Drawing...";

    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    LOG(INFO) << "I'm here...";

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}