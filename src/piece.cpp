#include "piece.h"

Piece::Piece(PieceColor color, PieceType type) : color(color), type(type) {}
bool Piece::operator==(const Piece& other) const{
    return this->color==other.color && this->type==other.type;
}

bool Piece::operator<(const Piece& other) const{
    return this->color<other.color || this->type<other.type;
}

int Piece::id(){
    return color*16 + type;
}