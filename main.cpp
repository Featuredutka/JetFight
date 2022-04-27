#include <stdio.h>
#include <vector>
#include <SFML/Graphics.hpp>

class Battlefield{
    public:
    int test = 4;
    
    
};
// Battlefield::Battlefield(){
//     sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
//     window.display();
// }
// Battlefield::~Battlefield(){
//     window.close();
// }

class JetFighter{

};

int main(){
    
    sf::RenderWindow window(sf::VideoMode(600, 600), "JetFight v.0.0.1");
    window.display();

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}