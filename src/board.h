#ifndef BOARD_H_
#define BOARD_H_

#include<variant>
#include<SFML/Graphics.hpp>
#include "piece.h"



using Square = std::variant<std::monostate,Piece>;

class Board : public sf::Drawable, public sf::Transformable{
public:
    Board(sf::Vector2f size);
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
    void setPosition(std::string FEN);
private:
    sf::Vector2f size;
    Square squares[8][8];
};

#endif // BOARD_H_