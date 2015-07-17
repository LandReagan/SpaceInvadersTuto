#include "../include/Game.hpp"

Game::Game(AppWindow& app_win_ref) : app_window(app_win_ref)
{
    Log << "Game::Game() starts!";

    event_eng = unique_ptr<EventEngine>{new EventEngine()};
    event_eng->registerAppWindowPointer(&app_window);
    event_eng->registerAnEngine(world_eng.get());

    Log << "Game::Game() stops!";
}

void
Game::run()
{
    Log << "Game::run() starts!";

    bool running = true;

    while (running)
    {
        event_eng->stepForward();

        running = false; // TO BE REMOVED
    }

    Log << "Game::run() stops!";
}

void
Game::stop()
{
    Log << "Game::stop() starts!";

    Log << "Game::stop() stops!";
}
