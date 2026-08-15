#pragma once
#include "Item.h"

class Sword : public Item {
public:
  const ushort powerPoints;
  Sword(const string &t_story, ItemType t_type, ushort t_powerPoints);

private:
};




//https://stackoverflow.com/questions/17460837/object-oriented-approach-to-rooms-and-dungeons-in-an-rpg