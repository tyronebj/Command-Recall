#pragma once

#include "Room.h"

class Challenge : public Room
{
private:
	int numberofspells;
public: 
	void setnumberofspells(int spellsin);
	int getnumerofspells();
};