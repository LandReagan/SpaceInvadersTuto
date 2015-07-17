#include "../include/App.hpp"


App::App() : app_window(), game(app_window)
{

}

int
App::exec()
{
    Log << "Start of App::exec()";

    game.run();
    game.stop();

    Log << "End of App::exec()!";
    return 0; // Code retour OK
}
