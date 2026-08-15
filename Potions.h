#pragma once
#include "Item.h"
#include <iostream>

class Potions : public Item {
public:
  const ushort healtCure;
  Potions(const string &t_story, ushort t_healtCure);
  // PapasFritas(const &t_story, ushort t_healtCure);}
  void PapasFritas(ushort t_healtCure);
  void Beer(ushort t_healtCure);
  void Soda(ushort t_healtCure);
  void AguaEnbotellada(ushort t_healtCure);
  void Pizza(ushort t_healtCure);
  void Hamburguesa(ushort t_healtCure);

private:
};
