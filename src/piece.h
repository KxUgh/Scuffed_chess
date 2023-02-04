#ifndef PIECE_H_
#define PIECE_H_

enum PieceColor{
    BLACK,
    WHITE
};

enum PieceType{
    PAWN,
    KNIGHT,
    BISHOP,
    ROOK,
    QUEEN,
    KING
};

struct Piece{
    Piece(PieceColor color, PieceType type);
    bool operator==(const Piece& other) const;
    bool operator<(const Piece& other) const;
    int id();
    PieceColor color;
    PieceType type;
};

#endif // PIECE_H_