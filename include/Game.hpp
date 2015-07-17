#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED

#include <memory>
using std::unique_ptr;

#include "Logger.hpp"
#include "IEngine.hpp"
#include "GraphicEngine.hpp"
#include "EventEngine.hpp"
#include "WorldEngine.hpp"

#include <vector>
using std::vector;

/** \file Game.hpp
 *  \brief This file defines Game class
 */

/** \class Game
 *  \brief Defines one game
 */

 class AppWindow;

class Game
{
public:
    Game(AppWindow&);

    void run(); /**< Function to run the game! */
    void stop(); /**< Function to stop the game */

private:
    unique_ptr<GraphicEngine> graph_eng;
    unique_ptr<EventEngine> event_eng;
    unique_ptr<WorldEngine> world_eng;

    AppWindow& app_window;
};

#endif // GAME_HPP_INCLUDED
