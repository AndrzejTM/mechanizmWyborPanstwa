#include "Panstwo.h"
#include "Niemcy.h"
#include "Polska.h"
#include "Player.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main()
{
    Panstwo panstwa;
    Player player;
    panstwa.dodajPanstwo(new Polska());
    panstwa.dodajPanstwo(new Niemcy());

    sf::RenderWindow window(sf::VideoMode(700, 300), "Okno wyboru panstwa");


    sf::Font font;
    font.loadFromFile("data/arial.ttf");
    sf::Text text;
    text.setFont(font);
    text.setString("Klikajac klawicz 'RIGHT' zmieniasz panstwo, klikajac 'w' wybierasz panstwo");
    text.setCharacterSize(15);
    text.setFillColor(sf::Color::Red);

    int i=0;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::EventType::Closed)
                window.close();
            if (event.type == sf::Event::EventType::KeyPressed && event.key.code == sf::Keyboard::Right)
            {
                i+=1;
                if (i>1)
                {
                    i=0;
                }
            }
            if (event.type == sf::Event::EventType::KeyPressed && event.key.code == sf::Keyboard::Return)
            {
                player.narodowosc = panstwa.kontener[i];
            }

        }
        // input
        // update
        // render

        text.setString("Klikajac klawicz 'RIGHT' zmieniasz panstwo, klikajac 'ENTER' wybierasz panstwo");
        text.setPosition(10, 10);
        window.draw(text);

        panstwa.kontener[i].flaga.setPosition(10,40);
        window.draw(panstwa.kontener[i].flaga);

        text.setString("Wybrana flaga:");
        text.setPosition(10, 100);
        window.draw(text);
        player.narodowosc.flaga.setPosition(10, 130);
        window.draw(player.narodowosc.flaga);

        window.display();
    }
    return 0;

    //panstwa.wyswietlPanstwa();
}
