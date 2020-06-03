#include "Sniper.hpp"

// namespace WarGame {

void Sniper::action(vector<vector<Soldier*>> &board,pair<int,int> dest)
{
    uint maxHP=0;
    Soldier *maxHPs=nullptr;
    int maxi=0;
    int maxj=0;

    for(int i=0;i<board.size();i++)
    {
        for(int j=0;j<board[i].size();j++)
        {

            if(board[i][j]!=nullptr && board[i][j]->getPnum() != board[dest.first][dest.second]->getPnum())
            {
                if(board[i][j]->getCurrHP() > maxHP)
                {
                    maxHPs = board[i][j];
                    maxHP = board[i][j]->getCurrHP();
                    maxi = i;
                    maxj= j;
                }
            }
        }
    }
    if(maxHPs!=nullptr)
    {
    // maxHPs->setHP(maxHPs->getCurrHP()-board[dest.first][dest.second]->getact());
    // if(maxHPs->getCurrHP() <= 0)
    // {
    //     board[maxi][maxj] = nullptr;
    // }
    int hp = maxHPs->getCurrHP()-board[dest.first][dest.second]->getact();
    if(hp <= 0)
    {
        board[maxi][maxj] = nullptr;
    }
    else
    {
        maxHPs->setHP(hp);
    }
    
    }
}

// }