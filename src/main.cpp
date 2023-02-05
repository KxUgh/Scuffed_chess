#include<SFML/Graphics.hpp>
#include <iostream>
#include "constants.h"
#include "board.h"


int main(){

    
    sf::RenderWindow window(sf::VideoMode(800,800),"Scuffed Chess");
    window.setFramerateLimit(FRAMERATE);
    sf::View view = window.getDefaultView();
    const sf::Vector2f defaultSize = view.getSize();
    const float aspectRatio = view.getSize().x/view.getSize().y;
    

    Board board(sf::Vector2f(800,800));
    board.loadPosition();
    
    
    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window.close();
            }else if(event.type == sf::Event::Resized){
                float newAspectRatio = window.getSize().x/(float)window.getSize().y;
                if(newAspectRatio > aspectRatio){
                    view.setSize(defaultSize.x*newAspectRatio,defaultSize.y);

                }else{
                    view.setSize(defaultSize.x,defaultSize.y/newAspectRatio);
                }
                window.setView(view);
            }
        }
        window.clear();
        window.draw(board);
        window.display();
    }
    return 0;
}