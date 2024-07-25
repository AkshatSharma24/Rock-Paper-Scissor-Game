// Rock Paper Scissor Game 

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    string player;
    string opponent;
    int Player_Score = 0;
    int Opponent_Score  = 0;
    string rps[] = {"rock","paper","scissor"};

    srand(time(NULL));

    cout<<" ---------------------Welcome To The Game------------------"<<endl;
    cout<<endl;

    while(true)
    {
        cout<<"Enter rock, paper or scissor: ";
        cin>>player;

        if(player != "rock" && player != "paper" && player !="scissor")
        {
            break;
        }

        opponent = rps[rand() % 3];

        cout<<"Opponent Chooses " <<opponent <<endl;

        if(player == opponent){
            Player_Score++;
            Opponent_Score++;
        }
        else if(player == "rock"){
            if(opponent == "scissor") Player_Score++;
            else if(opponent == "paper") Opponent_Score++;
        }
        else if(player == "paper"){
            if(opponent == "rock") Player_Score++;
            else if(opponent == "scissor") Opponent_Score++;
        }
        else if(player == "scissor"){
            if(opponent == "paper") Player_Score++;
            else if(opponent == "rock") Opponent_Score++;
        }

        cout<<"Player : " << Player_Score << " Opponent : " << Opponent_Score <<endl;
        
    }
    cout<<"Player : " << Player_Score << " Opponent : " << Opponent_Score <<endl;

    if(Player_Score > Opponent_Score)
    {
        cout<<"Player Wins!!";
    }
    else if(Player_Score < Opponent_Score){
        cout<<"Opponent Wins!!";
    }
    else{
        cout<<"Draw!!";
    }
}