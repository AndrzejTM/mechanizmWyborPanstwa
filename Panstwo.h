#ifndef PANSTWO_H
#define PANSTWO_H
#include <string>
#include <vector>
#include <SFML/Graphics.hpp>


class Panstwo
{
    public:
        Panstwo();
        virtual ~Panstwo();
        sf::Texture texture;
        sf::Sprite flaga;
        std::string hymn;
        std::vector<Panstwo> kontener;
        void dodajPanstwo(Panstwo* panstwo);
        void wyswietlPanstwa();
    protected:

    private:
};

#endif // PANSTWO_H
