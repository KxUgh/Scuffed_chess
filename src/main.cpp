#include<SFML/Graphics.hpp>
#include <iostream>
#include "constants.h"
#include "board.h"


int main(){

    
    sf::RenderWindow window(sf::VideoMode(800,800),"Scuffed Chess");
    window.setFramerateLimit(FRAMERATE);
    sf::Texture texture;

    
    Board board(sf::Vector2f(800,800));
    board.loadPosition();
    
    
    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window.close();
            }
        }
        window.clear(sf::Color(0,255,0));
        window.draw(board);
        window.display();
    }
    return 0;
}