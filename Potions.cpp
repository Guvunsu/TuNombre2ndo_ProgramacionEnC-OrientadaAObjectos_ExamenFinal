#include "Potions.h"

Potions::Potions(const string &t_story, ushort t_healtCure)
    : Item(t_story, POTIONS), healtCure(t_healtCure) {}
 