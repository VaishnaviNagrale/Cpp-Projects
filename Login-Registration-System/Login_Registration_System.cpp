/*Login Registration System by using C++ 05/08/22 */
#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;
int main(){

     int choice;
     cout<<"\t\t\t________________________________________________________________________\n\n\n";
     cout<<"\t\t\t                    Welcome To The Login Page                            \n\n\n";
     cout<<"\t\t\t______________________      MENU      _________________________\n\n\n";
     
     menu:
     cout<<"\t| Press 1 to LOGIN                          |"<<endl;
     cout<<"\t| Press 2 to REGISTER                       |"<<endl;
     cout<<"\t| Press 3 to  IF YOU FORGOT PASSWARD        |"<<endl;
     cout<<"\t| Press 4 to EXIT                           |"<<endl;

     cout<<"\n\t Please Enter Your choice :";
     cin>>choice;

     switch (choice)
     {
     case 1:{
        int count=0;
        char ch;
    string userID,passward,ID,pass;
    system("cls");
    cout<<"\n\t\t please enter the user name and passward :\n";
    cout<<"\t\t USERNAME :";
    cin>>userID;

    cout<<"\t\t PASSWARD :";
    ch=getch();
    while (ch!=13){
        passward.push_back(ch);
        cout<<'X';
        ch=getch();
    }
    ifstream input("records.txt");

    while (input>>ID>>pass){
        if (ID==userID && pass==passward ){
            count=1;
            system("cls");
        }
    }
    input.close();

    if(count==1){
        cout<<userID<<"\n Your successfully logined in!\n";
        goto menu;
    }
    else{
        cout<<"\n ERROR please check your userID and passward\n";
    } 
        break;
     }
     case 2:{
        string R_userID,R_ID,R_pass;
        system("cls");
        cout<<"\t\t\t Enter The Username :";
        cin>>R_userID;
        cout<<"\t\t\t Enter The Passward :";
        cin>>R_pass;

        ofstream f1("records.txt",ios::app);
        f1<<R_userID<<" "<<R_pass<<endl;
        system("cls");
        cout<<"\n\t\t You are successfully get registered!\n";
        goto menu;  
        break;
     }
     case 3:{
        int option;
        system("cls");
        cout<<"\t\t\t You forgot passward no worries \n";
        cout<<"Press 1 to search your id by username "<<endl;
        cout<<"Press 2 to go to menu "<<endl;
        cout<<"\n\t\t Enter your choice :\n";
        cin>>option;
        switch (option)
        {
        case 1:{
            int count=0;
            string S_userID,S_ID,S_pass;
            cout<<"\n\t\t Enter username which you remember :";
            cin>>S_userID;

            ifstream f2("records.txt");

            while (f2>>S_ID>>S_pass){
                if(S_ID==S_userID){
                    count=1;
                }
            }
            f2.close();
            if(count==1){
                cout<<"\n\n\t Your account is found! \n";
                cout<<"\n\n\t Your passward is :"<<S_pass;
                goto menu;
            }
            else{
                cout<<"\n\t Sorry your account is not found! \n";
            }
            break;
        }
        case 2:{
            goto menu;
            break;
        }
        default:{
           cout<<"\n\t\t Please Try Again!\n";
            break;
        }
        }
        break;
     }
     case 4:{
        cout<<"\n\t Thank You! \n\n";
        exit(0);  
        break;
     }
     default:{
        cout<<"\t Please select from above options\n\n";
        goto menu;
        break;
     }
     }
    return 0;
}