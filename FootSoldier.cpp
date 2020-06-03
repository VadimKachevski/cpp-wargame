#include "FootSoldier.hpp"
#include "math.h"
// namespace WarGame
// {
void FootSoldier::action(vector<vector<Soldier *>> &board, pair<int, int> dest)
{

    double closest=board.size()*board.size();
    int ci,cj;
    int found =0;
    
    for(int i=0;i<board.size();i++)
    {
        for(int j=0;j<board.size();j++)
        {
            Soldier *s;
            s= board[i][j];
            if(s!=nullptr && (s->getPnum() != board[dest.first][dest.second]->getPnum()))
            {
                double dist = sqrt((i-dest.first)*(i-dest.first) + (j-dest.second)*(j-dest.second));
                if(dist<closest)
                {
                    closest =dist;
                    ci = i;
                    cj = j;
                    found = 1;
                }
            }
        }
    }
    if(found){
        Soldier *s = board[ci][cj];
        int hp = s->getCurrHP() - board[dest.first][dest.second]->getact();
        if(hp <= 0)
        {
            board[ci][cj] = nullptr;
        }
        else
        {
            s->setHP(hp);
        }
        
        // s->setHP(s->getCurrHP() - board[dest.first][dest.second]->getact());
        //     if (s->getCurrHP() <= 0)
        //     {
        //         board[ci][cj] = nullptr;
        //     }
    }




    // int iter = 1;
    // bool found = false;
    // while (!found)
    // {
    //     for (int x = -iter; x <= iter; x++)
    //     {
    //         Soldier *s;
    //         // iter,x
    //         if (dest.first + iter >= 0 && dest.first + iter < board.size())
    //         {
    //             if (dest.second + x >= 0 && dest.second + x < board[dest.first + iter].size())
    //             {
    //                 s = board[dest.first + iter][dest.second + x];
    //                 if (s != nullptr && s->getPnum() != board[dest.first][dest.second]->getPnum())
    //                 {
    //                     s->setHP(s->getCurrHP() - board[dest.first][dest.second]->getact());
    //                     if (s->getCurrHP() <= 0)
    //                     {
    //                         board[dest.first + iter][dest.second + x] = nullptr;
    //                     }
    //                     found = true;
    //                     return;
    //                 }
    //             }
    //         }
    //         // -iter,x
    //         if (dest.first - iter >= 0 && dest.first - iter < board.size())
    //         {
    //             if (dest.second + x >= 0 && dest.second + x < board[dest.first - iter].size())
    //             {
    //                 s = board[dest.first - iter][dest.second + x];
    //                 if (s != nullptr && s->getPnum() != board[dest.first][dest.second]->getPnum())
    //                 {
    //                     s->setHP(s->getCurrHP() - board[dest.first][dest.second]->getact());
    //                     if (s->getCurrHP() <= 0)
    //                     {
    //                         board[dest.first - iter][dest.second + x] = nullptr;
    //                     }
    //                     found = true;
    //                     return;
    //                 }
    //             }
    //         }

    //         //x,-iter
    //         if (dest.first + x >= 0 && dest.first + x < board.size())
    //         {
    //             if (dest.second - iter >= 0 && dest.second - iter < board[dest.first + x].size())
    //             {
    //                 s = board[dest.first + x][dest.second - iter];
    //                 if (s != nullptr && s->getPnum() != board[dest.first][dest.second]->getPnum())
    //                 {
    //                     s->setHP(s->getCurrHP() - board[dest.first][dest.second]->getact());
    //                     if (s->getCurrHP() <= 0)
    //                     {
    //                         board[dest.first + x][dest.second - iter] = nullptr;
    //                     }
    //                     found = true;
    //                     return;
    //                 }
    //             }
    //         }
    //         //x,iter
    //         if (dest.first + x >= 0 && dest.first + x < board.size())
    //         {
    //             if (dest.second + iter >= 0 && dest.second + iter < board[dest.first + x].size())
    //             {
    //                 s = board[dest.first + x][dest.second + iter];
    //                 if (s != nullptr && s->getPnum() != board[dest.first][dest.second]->getPnum())
    //                 {
    //                     s->setHP(s->getCurrHP() - board[dest.first][dest.second]->getact());
    //                     if (s->getCurrHP() <= 0)
    //                     {
    //                         board[dest.first + x][dest.second + iter] = nullptr;
    //                     }
    //                     found = true;
    //                     return;
    //                 }
    //             }
    //         }
    //     }
    //     if (iter >= board.size())
    //     {
    //         return;
    //     }
    //     iter++;
    // }
}
// } // namespace WarGame