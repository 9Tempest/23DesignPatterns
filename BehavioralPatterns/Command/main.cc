#include "light.h"
#include "person.h"
#include "commands.h"

int main(int argc, char const *argv[])
{
    Light* light = new Light();
    Person person;
    person.addCommand(new CommandOn(light));
    person.addCommand(new CommandOn(light));
    person.addCommand(new CommandOff(light));
    person.action();
    delete light;
    return 0;
}
