#include "Paramedic.hpp"

// namespace WarGame
// {
void Paramedic::action(vector<vector<Soldier *>> &board, pair<int, int> dest)
{
    int iter = 1;
    for (int x = -iter; x <= iter; x++)
    {

        Soldier *s;
        // iter,x
        if (dest.first + iter >= 0 && dest.first + iter < board.size())
        {
            if (dest.second + x >= 0 && dest.second + x < board[dest.first + iter].size())
            {
                s = board[dest.first + iter][dest.second + x];
                if (s != nullptr && s->getPnum() == board[dest.first][dest.second]->getPnum())
                {
                    s->setHP(s->getMaxHP());
                }
            }
        }
        // -iter,x
        if (dest.first - iter >= 0 && dest.first - iter < board.size())
        {
            if (dest.second + x >= 0 && dest.second + x < board[dest.first - iter].size())
            {
                s = board[dest.first - iter][dest.second + x];
                if (s != nullptr && s->getPnum() == board[dest.first][dest.second]->getPnum())
                {
                     s->setHP(s->getMaxHP());
                }
            }
        }

        //x,-iter
        if (dest.first + x >= 0 && dest.first + x < board.size())
        {
            if (dest.second - iter >= 0 && dest.second - iter < board[dest.first + x].size())
            {
                s = board[dest.first + x][dest.second - iter];
                if (s != nullptr && s->getPnum() == board[dest.first][dest.second]->getPnum())
                {
                     s->setHP(s->getMaxHP());
                }
            }
        }
        //x,iter
        if (dest.first + x >= 0 && dest.first + x < board.size())
        {
            if (dest.second + iter >= 0 && dest.second + iter < board[dest.first + x].size())
            {
                s = board[dest.first + x][dest.second + iter];
                if (s != nullptr && s->getPnum() == board[dest.first][dest.second]->getPnum())
                {
                    s->setHP(s->getMaxHP());
                }
            }
        }
    }
}
// } // namespace WarGame