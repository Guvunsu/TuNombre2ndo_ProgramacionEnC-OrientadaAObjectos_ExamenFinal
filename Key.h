#pragma once
#include "Item.h"

class Key : public Item {
public:
  const ushort keyId;
  Key(const string &t_story, ushort t_keyId);

private:
};