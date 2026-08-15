#pragma once
#include "Door.h"
#include "Enemy.h"
#include "Guard.h"
#include "Key.h"
#include "Sword.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

typedef unsigned short ushort;

class Room {
private:
  Door *m_pDoors;
  Item *m_pItems;
  Enemy *m_pEnemies;

public:
  const string story;
  const ushort id, doorsCount, itemsCount, enemiesCount;

  Room(ushort t_id, string t_story, ushort t_doorsCount, Door *t_doors,
       ushort t_itemsCount = 0, Item *t_items = nullptr,
       ushort t_enemiesCount = 0, Enemy *t_enemies = nullptr);
  void revealRoom();
  Door *getDoors();
};
