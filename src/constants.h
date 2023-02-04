#ifndef CONSTANTS_H_
#define CONSTANTS_H_
#include "piece.h"
#include "board.h"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics.hpp>
#include <filesystem>

const std::filesystem::path PIECE_DIR("pieces/");

extern const std::map<int,sf::Texture> textureMap;

const unsigned int FRAMERATE = 60;

const sf::Color LIGHT_SQUARES = sf::Color(240,217,181);
const sf::Color DARK_SQUARES  = sf::Color(181,136,99);




#endif // CONSTANTS_H_