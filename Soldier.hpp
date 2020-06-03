#pragma once
#include <iostream>
#include <vector>

using namespace std;
// namespace WarGame
// {
class Soldier
{

private:
    uint curr_HP;
    uint max_HP;
    uint act;
    uint pNum;

public:
    Soldier(uint maxhp, uint action, uint pNum) : curr_HP(maxhp), max_HP(maxhp), act(action), pNum(pNum) {}
     virtual ~Soldier() {};
    virtual void action(vector<vector<Soldier *>> &board, pair<int, int> dest) = 0;
    uint getPnum() { return this->pNum; };
    void setHP(int num) { this->curr_HP = num; };
    uint getCurrHP() { return this->curr_HP; };
    uint getact() { return this->act; };
    uint getMaxHP() { return this->max_HP;};
};
// } // namespace WarGames