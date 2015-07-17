#ifndef APP_HPP_INCLUDED
#define APP_HPP_INCLUDED

//------------------------------------------------------------------------------

/** \file App.hpp
 * \brief File to define App class, the very upper one in execution
 */

#include "Game.hpp"
#include "Logger.hpp"
#include "AppWindow.hpp"

/** \class App
 *  \brief This class is the start point of everything. It launches the game
 *         with exec() method
 */

class App
{
public:
    App();

/** \brief This function simply executes the application
 *  \return an error code, to be defined
 */
    int exec();

private:
    Game game;

    AppWindow app_window;
};

#endif // APP_HPP_INCLUDED
