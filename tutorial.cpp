#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "My window");
    window.setVerticalSyncEnabled(true);
    window.setPosition({ 10,50 });
    window.setSize({ 640,480 });
    sf::Vector2u size = window.getSize();
    auto [width, height] = size;
    bool focus = window.hasFocus();
    sf::CircleShape circle(64.0f);
    circle.setOrigin(circle.getGeometricCenter());
    circle.setPosition({width/4.0f, height/4.0f});
    circle.setFillColor(sf::Color::Green);
    circle.setOutlineThickness(3.0f);
    circle.setOutlineColor(sf::Color::Magenta);
    circle.setPointCount(10);

    sf::RectangleShape rectangle({50.0f,80.0f });
    rectangle.setOrigin(rectangle.getSize()/2.0f);
    rectangle.setPosition({ width / 2.0f, height / 2.0f });
    rectangle.setFillColor(sf::Color::Yellow);
    rectangle.setOutlineThickness(5.0f);
    rectangle.setOutlineColor(sf::Color::Blue);
    while (window.isOpen()){
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>())
                window.close();
            else if (const auto* keypressed = event->getIf<sf::Event::KeyPressed>()) {
                if (keypressed->scancode == sf::Keyboard::Scancode::Escape) {
                    window.close();
                }
            }
        }
        circle.move({1.0f,1.0f});
        rectangle.move({-1.0f,-1.0f});

        circle.setFillColor(sf::Color::Green);
        rectangle.setFillColor(sf::Color::Yellow);
        if (circle.getGlobalBounds().findIntersection(rectangle.getGlobalBounds())){
            circle.setFillColor(sf::Color::Red);
            rectangle.setFillColor(sf::Color::Red);
        }
        //render
        window.clear();
        //drawing
        window.draw(circle);
        window.draw(rectangle);
        window.display();
    }
    
}