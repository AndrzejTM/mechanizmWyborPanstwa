#include "Polska.h"

Polska::Polska()
{
    texture.loadFromFile("data/Polska.png");
    flaga.setTexture(texture);
    hymn = "Jeszcze Polska nie zginela";
}

Polska::~Polska()
{
    //dtor
}
