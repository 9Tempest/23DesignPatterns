#ifndef _GAMEROLE_
#define _GAMEROLE_
#include <string>
#include <iostream>
class GameRole{
    int hp;
    std::string name;
    int mana;
    int attack;
    public:
        void useMana(){
            std::cout << "Dark squeeze! mana-10" << std::endl;
            mana = mana-10;
        }

        void changeHP(int amount){
            this->hp += amount;
        }
        GameRole(int hp, std::string name, int mana, int attack): hp{hp}, name{name}, mana{mana}, attack{attack}{}
        class Memento{
            public:
            int hp;
            std::string name;
            int mana;
            int attack;
            Memento(int hp, std::string name, int mana, int attack): hp{hp}, name{name}, mana{mana}, attack{attack}{}
        };
        Memento* save(){
            return new Memento(hp, name, mana, attack);
        }
        void load(Memento* ss){
            hp = ss->hp;
            name = ss->name;
            mana = ss->mana;
            attack = ss->attack;
        }
        void display(){
            std::cout << "Name: " << name << std::endl;
            std::cout << "HP: " << hp << std::endl;
            std::cout << "Mana: " << mana << std::endl;
            std::cout << "attack: " << attack << std::endl;
        }
};


#endif
