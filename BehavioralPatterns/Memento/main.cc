#include "careTaker.h"
#include "gameRole.h"

int main(int argc, char const *argv[])
{
    GameRole luke(100, "Luke", 100, 10);
    CareTaker saves;
    saves.save(luke.save());
    luke.display();
    luke.useMana();
    luke.display();
    luke.load(saves.load(0));
    luke.display();
    return 0;
}
