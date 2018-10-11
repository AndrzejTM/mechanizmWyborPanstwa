#include "Niemcy.h"

Niemcy::Niemcy()
{
    texture.loadFromFile("data/Niemcy.png");
    flaga.setTexture(texture);
    hymn = "Deutchland, Deutchland uber alles";
}

Niemcy::~Niemcy()
{
    //dtor
}
