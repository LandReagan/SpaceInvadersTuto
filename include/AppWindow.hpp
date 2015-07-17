#ifndef APPWINDOW_HPP_INCLUDED
#define APPWINDOW_HPP_INCLUDED

#include <sfml/graphics.hpp>

class AppWindow
{
public:

    AppWindow();

    void init()
    {
        render_window.create(sf::VideoMode(800, 600), "Space Invaders Tuto");
    }

    sf::RenderWindow& getSFRenderWindow() {return render_window;}

private:
    sf::RenderWindow render_window;
};

#endif // APPWINDOW_HPP_INCLUDED
