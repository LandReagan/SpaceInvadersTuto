#include "../include/EventEngine.hpp"
#include "../include/AppWindow.hpp"

void
EventEngine::stepForward()
{
    while (getNextGameEvent())
    {
        sendGameEventToWorld();
    }
}

bool
EventEngine::getNextGameEvent()
{
    // if polling event from API, change game_event class variable
    sf::Event event;

    // get a ref to sf::Window to get Events
    sf::RenderWindow& locale_render_window = p_app_window->getSFRenderWindow();

    // SFML used to get events in window...
    if (locale_render_window.pollEvent(event))
    {
        switch (event.type)
        {
        case sf::Event::KeyPressed:
            switch(event.key.code)
            {
            case sf::Keyboard::Escape:
                game_event = GAME_END;break;
            case sf::Keyboard::Left:
                game_event = MOVE_LEFT;break;
            case sf::Keyboard::Right:
                game_event = MOVE_RIGHT;break;
            case sf::Keyboard::Space:
                game_event = SHOOT;break;
            // no default...
            }break;
        case sf::Event::Closed:
            game_event = APP_CLOSE;break;
        default:
            game_event = UNKNOWN;
        }
        return true;
    }

    // if no event found:
    return false;
}

void
EventEngine::sendGameEventToWorld()
{

}
