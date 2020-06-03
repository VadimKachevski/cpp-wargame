#pragma once

#include "Soldier.hpp"

using namespace std;

const int MAX_HP = 100;
const int ACTION = 10;
// namespace WarGame
// {
class FootSoldier : public Soldier
{

public:
    FootSoldier(uint pNUM) : Soldier(MAX_HP, ACTION, pNUM) {}
    FootSoldier(uint pNUM, uint hp, uint act) : Soldier(hp, act, pNUM) {}
    void action(vector<vector<Soldier *>> &board, pair<int, int> dest);
};
// } // namespace WarGame