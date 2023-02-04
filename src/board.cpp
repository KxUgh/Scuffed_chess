#include "board.h"
#include "constants.h"
#include <assert.h>

Board::Board(sf::Vector2f size) : size(size) {}

void Board::draw(sf::RenderTarget& target, sf::RenderStates states) const{
    (void) states;
    sf::RectangleShape rect(sf::Vector2f(size.x/8,size.y/8));
    for(int y=0;y<8;++y){
        for(int x=0;x<8;++x){
            if((x+y)%2==0){
                rect.setFillColor(LIGHT_SQUARES);
            }else rect.setFillColor(DARK_SQUARES);

            rect.setPosition(getPosition().x+x*size.x/8,getPosition().y+y*size.y/8);
            target.draw(rect);

            if(std::holds_alternative<Piece>(squares[y][x])){
                Piece p = std::get<Piece>(squares[y][x]);
                const sf::Texture& t = textureMap.at(p.id());
                sf::Sprite sprite = sf::Sprite();
                sprite.setTexture(t);
                sprite.setPosition(getPosition().x+x*size.x/8,getPosition().y+y*size.y/8);
                sprite.setScale((size.x/8)/(float)t.getSize().x,(size.y/8)/(float)t.getSize().y);
                target.draw(sprite);
                
            }
            
        }
    }
}

void Board::setPosition(std::string FEN){

    int currX=0;
    int currY=0;
    for(char c : FEN){
        if(currY>7) break;
        if(c>'0'&&c<'9'){
            currX+=c-'0';
        }
        else if(c=='/'){
            
        }else if(c=='P'){
            squares[currY][currX]=Piece(WHITE,PAWN);
            ++currX;
        }else if(c=='N'){
            squares[currY][currX]=Piece(WHITE,KNIGHT);
            ++currX;
        }else if(c=='B'){
            squares[currY][currX]=Piece(WHITE,BISHOP);
            ++currX;
        }else if(c=='R'){
            squares[currY][currX]=Piece(WHITE,ROOK);
            ++currX;
        }else if(c=='Q'){
            squares[currY][currX]=Piece(WHITE,QUEEN);
            ++currX;
        }else if(c=='K'){
            squares[currY][currX]=Piece(WHITE,KING);
            ++currX;
        }else if(c=='p'){
            squares[currY][currX]=Piece(BLACK,PAWN);
            ++currX;
        }else if(c=='n'){
            squares[currY][currX]=Piece(BLACK,KNIGHT);
            ++currX;
        }else if(c=='b'){
            squares[currY][currX]=Piece(BLACK,BISHOP);
            ++currX;
        }else if(c=='r'){
            squares[currY][currX]=Piece(BLACK,ROOK);
            ++currX;
        }else if(c=='q'){
            squares[currY][currX]=Piece(BLACK,QUEEN);
            ++currX;
        }else if(c=='k'){
            squares[currY][currX]=Piece(BLACK,KING);
            ++currX;
        }else assert(0 && "invalid FEN");
        if(currX>7){
            ++currY;
            currX=0;
        }
    }
}