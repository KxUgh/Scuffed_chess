#include "constants.h"
#include "piece.h"

const std::map<int,sf::Texture> textureMap = {
    {Piece(WHITE,PAWN).id(),[](){
        sf::Texture texture = sf::Texture();
        if(!texture.loadFromFile(PIECE_DIR/"wP.png")){
            exit(1);
        }
        return texture;
    }()},
    {Piece(WHITE,KNIGHT).id(),[](){
        sf::Texture texture = sf::Texture();
        if(!texture.loadFromFile(PIECE_DIR/"wN.png")){
            exit(1);
        }
        return texture;
    }()},
    {Piece(WHITE,BISHOP).id(),[](){
        sf::Texture texture = sf::Texture();
        if(!texture.loadFromFile(PIECE_DIR/"wB.png")){
            exit(1);
        }
        return texture;
    }()},
    {Piece(WHITE,ROOK).id(),[](){
        sf::Texture texture = sf::Texture();
        if(!texture.loadFromFile(PIECE_DIR/"wR.png")){
            exit(1);
        }
        return texture;
    }()},
    {Piece(WHITE,QUEEN).id(),[](){
        sf::Texture texture = sf::Texture();
        if(!texture.loadFromFile(PIECE_DIR/"wQ.png")){
            exit(1);
        }
        return texture;
    }()},
    {Piece(WHITE,KING).id(),[](){
        sf::Texture texture = sf::Texture();
        if(!texture.loadFromFile(PIECE_DIR/"wK.png")){
            exit(1);
        }
        return texture;
    }()},
    {Piece(BLACK,PAWN).id(),[](){
        sf::Texture texture = sf::Texture();
        if(!texture.loadFromFile(PIECE_DIR/"bP.png")){
            exit(1);
        }
        return texture;
    }()},
    {Piece(BLACK,KNIGHT).id(),[](){
        sf::Texture texture = sf::Texture();
        if(!texture.loadFromFile(PIECE_DIR/"bN.png")){
            exit(1);
        }
        return texture;
    }()},
    {Piece(BLACK,BISHOP).id(),[](){
        sf::Texture texture = sf::Texture();
        if(!texture.loadFromFile(PIECE_DIR/"bB.png")){
            exit(1);
        }
        return texture;
    }()},
    {Piece(BLACK,ROOK).id(),[](){
        sf::Texture texture = sf::Texture();
        if(!texture.loadFromFile(PIECE_DIR/"bR.png")){
            exit(1);
        }
        return texture;
    }()},
    {Piece(BLACK,QUEEN).id(),[](){
        sf::Texture texture = sf::Texture();
        if(!texture.loadFromFile(PIECE_DIR/"bQ.png")){
            exit(1);
        }
        return texture;
    }()},
    {Piece(BLACK,KING).id(),[](){
        sf::Texture texture = sf::Texture();
        if(!texture.loadFromFile(PIECE_DIR/"bK.png")){
            exit(1);
        }
        return texture;
    }()},
};
