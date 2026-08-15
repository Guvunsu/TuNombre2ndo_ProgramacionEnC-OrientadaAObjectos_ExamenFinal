#include "PlayerManager.h"

PlayerManager::PlayerManager(){
  m_playerHP = 100;
}

void PlayerManager::setPlayerHP(ushort t_playerHP){
  m_playerHP -= t_playerHP;
  if (m_playerHP <= 0){
    std::cout << "El jugador ha muerto.\n";
    // Terminar el juego.
  }
}

bool PlayerManager::hasKey(ushort t_keyId){
  // deben hacer esta funcion
  return false;
}