#include <iostream>
#include <interpreter.h>
#include <gui.h>
#include <easylogging++.h>
#include <SFML/Graphics.hpp>

INITIALIZE_EASYLOGGINGPP

int main(int argc, char *argv[]) {
    START_EASYLOGGINGPP(argc, argv);

    std::cout << "Who am I ? where am I ?    Lei" << std::endl;
    std::cout << "Who am I ? where am I ? fuck you LWei!   Lei" << std::endl;

    int i = foo();
    std::cout << str()  << std::endl << i + 1 << std::endl;
    LOG(INFO) << "I'm drawing here...";

    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

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