#include "Room.h"

Room::Room(ushort t_id, string t_story, ushort t_doorsCount, Door* t_doors, ushort t_itemsCount, Item* t_items, ushort t_enemiesCount, Enemy* t_enemies)
  : story(t_story), id(t_id), doorsCount(t_doorsCount), itemsCount(t_itemsCount), enemiesCount(t_enemiesCount) {
    m_pDoors = t_doors;
    m_pItems = t_items;
    m_pEnemies = t_enemies;
}

void Room::revealRoom() {
  // Operador ternario ?: => (expresión booleana) ? si es verdadero : si es falso
  cout << story << ". " << "En esta habitación hay " << (doorsCount == 1 ? "una puerta" : std::to_string(doorsCount) + " puertas") << ", y\n";
  for (ushort i = 0; i < doorsCount; i++) {
    cout << m_pDoors[i].story << ", ";
  }
  cout << ".\n";
  if(itemsCount > 0) {
    cout << "En esta habitación hay: ";
    for (ushort i = 0; i < itemsCount; i++) {
      cout << m_pItems[i].m_story << ", ";
      if (m_pItems[i].getItemType() == SWORD) {
        Sword *pSword = (Sword*)&m_pItems[i];
        cout << pSword->powerPoints << " puntos de daño.\n";
      }
    }
    cout << ".\n";
  }
  for (ushort i = 0; i < enemiesCount; i++) {
    cout << m_pEnemies[i].m_story << ", ";
  }
  cout << ".\n";
}

Door* Room::getDoors() {
  return m_pDoors;
}