#include "demon.h"
#include "orcsAi.h"


int main(int argc, char const *argv[])
{
    DemonAi demon("Genger", 10, 5, 20);
    OrcAi orc("Juggernant", 6, 20, "Tower");
    demon.takeTurn();
    orc.takeTurn();
    return 0;
}
