#pragma once
#include "Room.h"
#include <iostream>

class PlayerManager {
private:
  ushort m_playerHP;
  Item *m_inventory;

public:
  Room *rooms;
  Room *pCurrentRoom;
  PlayerManager();
  void setPlayerHP(ushort t_playerHP);
  bool hasKey(ushort t_keyId); // debo hacerla
  bool isPlayerAlive = true;
};