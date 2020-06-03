#include "SniperCommander.hpp"

// namespace WarGame{
    void SniperCommander::action(vector<vector<Soldier*>> &board,pair<int,int> dest)
    {
        for(int i=0;i<board.size();i++)
    {
        for(int j=0;j<board[i].size();j++)
        {
            Soldier *s = board[i][j];
            if(s!=nullptr)
            {
                if(Sniper *fs = dynamic_cast<Sniper*> (s))
                {
                   
                    SniperCommander *fc = dynamic_cast<SniperCommander*> (s);
                    if((fc == nullptr) || (i == dest.first && j==dest.second))
                    {
                    if(fs->getPnum() == board[dest.first][dest.second]->getPnum())
                    {
                        fs->Sniper::action(board,make_pair(i,j));
                    
                    }
                    }
                    
                    
                }
            }
        }
    }
    }
// }