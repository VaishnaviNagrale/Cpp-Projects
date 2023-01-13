/* Gussing  Game By using C++ 23/06/22 */
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<fstream>
#include<windows.h>

void print_vector(std::vector<int>gusses){
    std::cout<<"Your gusses are: "<<std::endl;
    for (int i = 0; i < gusses.size(); i++)
    {
        std::cout<<gusses[i]<<" ";
    }
    std::cout<<"\nThanks For Playing!";
}
void play_game(){
       std::vector<int> gusses;
       int random=rand();
       std::cout<<"Enter any guss number: ";
       while (1)
       {
        int guss;
        std::cin>>guss;
        gusses.push_back(guss);
        if(guss==random){
            std::cout<<"You Win"<<std::endl;
            print_vector(gusses);
            std::ifstream input;
            input.open("high_score.txt");
            if(!input.is_open()){
                std::cout<<"sorry couldn't able to open file\n";
                return;
            }
            int best_score;
            input>>best_score;
            std::ofstream output("high_score.txt");
            if(!output.is_open()){
                std::cout<<"sorry couldn't able to open file\n";
                return;
            }
            if(gusses.size()<best_score){
                output<<gusses.size();
            }
            else
            {
                output<<best_score;
            }
            break;
        }
        else if (guss<random)
        {
            std::cout<<"Low guss"<<std::endl;
        }
        else
        {
            std::cout<<"High guss"<<std::endl;
        } 
       }
}
int main()
{
    system("color 3a");
    int choice;
    do{
        std::cout<<std::endl<<"0-Not play"<<std::endl<<"1-Play"<<std::endl;
        std::cin>>choice;
        switch (choice)
        {
           case 0:
            {
            std::cout<<"Thanks for nothing"<<std::endl;
            return 0;
            }
           case 1:
           {
           std::cout<<"Let's play the game"<<std::endl;
           play_game();
           break;
           }
        }
    }while(choice!=0);

    return 0;
}
