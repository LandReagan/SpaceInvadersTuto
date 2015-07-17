#include "include/App.hpp"

Logger Log;

int main()
{
    // Code de retour du main()
    int return_code = -1;

    // Instanciation d'une App
    App app;

    // Execution via méthode exec() qui renvoie un code retour
    return_code = app.exec();

    // Retour du code, fin du programme
    return return_code;
}
