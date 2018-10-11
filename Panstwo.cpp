#include "Panstwo.h"
#include <iostream>
#include <SFML/Graphics.hpp>

Panstwo::Panstwo()
{
    texture.loadFromFile("data/Generic.png");
    flaga.setTexture(texture);
    hymn = "";
}

Panstwo::~Panstwo()
{

}

void Panstwo::dodajPanstwo(Panstwo* panstwo)
{
    kontener.push_back(*panstwo);
}

void Panstwo::wyswietlPanstwa()
{
    for (int i=0; i<kontener.size(); i++)
    {
        //std::cout << panstwa[i].flaga << std::endl;
        std::cout << kontener[i].hymn << std::endl;
    }
}
