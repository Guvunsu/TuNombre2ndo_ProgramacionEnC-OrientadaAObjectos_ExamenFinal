#include "Sword.h"

Sword::Sword(const string &t_story, ItemType t_type, ushort t_powerPoints)
    : Item(t_story, SWORD), powerPoints(t_powerPoints) {}

