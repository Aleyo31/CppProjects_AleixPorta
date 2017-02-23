// TheWalkingdead.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>​using namespace std;#include <string>​ #include <ctime>​

enum Weapon { FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX };

class Player {
	Weapon weapon;
	float precision;
	int life;
	
};

class Zombie {
	int distanceToPlayer;
	float speed;
	float damage;
	int life;
	
};

/*void attack(Zombie &); {

}

void attack(Player &); {

}*/




int main()
{
    return 0;
}

