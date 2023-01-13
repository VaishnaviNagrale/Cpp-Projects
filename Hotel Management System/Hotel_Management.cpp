/* Hotel Manegment System by using C++ 05/08/22 */
#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;

int main(){

     int quantity,choice;
     //quantity persent in hotel
     int Q_rooms=0,Q_idli=0,Q_dosa=0,Q_thalpitha=0,Q_pizza=0,Q_noodles=0,Q_juice=0,Q_burger=0;
     //quantuty that being sold
     int S_rooms=0,S_idli=0,S_dosa=0,S_thalpitha=0,S_pizza=0,S_noodles=0,S_juice=0,S_burger=0;
     //Total price of per item
     int T_rooms=0,T_idli=0,T_dosa=0,T_thalpitha=0,T_pizza=0,T_noodles=0,T_juice=0,T_burger=0;
     
     cout<<"\n-------------------------------------------------------------------------------\n";
     cout<<"\t\t\t Welcome To Hotel Enjoy!\n";
     //Hotel maneger work:
     cout<<"\n\t Quantity of items we have\n";
     cout<<"Rooms avaliable :";
     cin>>Q_rooms;
     cout<<"Quantity of idli avaliable :";
     cin>>Q_idli;
     cout<<"Quantity of dosa avaliable :";
     cin>>Q_dosa;
     cout<<"Quantity of thalpitha avaliable :";
     cin>>Q_thalpitha;
     cout<<"Quantity of pizza avaliable :";
     cin>>Q_pizza;
     cout<<"Quantity of burger avaliable :";
     cin>>Q_burger;
     cout<<"Quantity of noodles avaliable :";
     cin>>Q_noodles;
     cout<<"Quantity of juice avaliable :";
     cin>>Q_juice;
    //Menu card for costumer:
    menu_of_hotel :
     cout<<"\n\t\t Please select from given menu what you want :";
     cout<<"\n\n1) Rooms Booking :";
     cout<<"\n2) Idli Order :";
     cout<<"\n3) Dosa Order :";
     cout<<"\n4) Thalpitha Order :";
     cout<<"\n5) Pizza Order :";
     cout<<"\n6) Burger Order :";
     cout<<"\n7) Noodles Order :";
     cout<<"\n8) Juice Order :";
     cout<<"\n9) Information regarding day sales and collection :";//Only for maneger
     cout<<"\n10) Exit :";
    //Costumer choice feeling:
     cout<<"\n\n Please enter your choice :";
     cin>>choice;
     
     switch (choice)
     {
     case 1:{
        cout<<"\n\n Please enter how many rooms you want to book :";
        cin>>quantity;
        if(Q_rooms-S_rooms>=quantity){
            S_rooms+=quantity;
            T_rooms+= quantity*1000;
            cout<<"\n\n\t\t"<<quantity<<" many rooms have been successfully alloted to you.";
        }
        else{
            cout<<"\n\tOnly "<<Q_rooms-S_rooms<<" rooms are currently avaliable in hotel :";
        }
        break;
     }
     case 2:{
        cout<<"\n\n Please enter how many plates you want :";
        cin>>quantity;
        if(Q_idli-S_idli>=quantity){
            S_idli+=quantity;
            T_idli+= quantity*30;
            cout<<"\n\n\t\t"<<quantity<<" number of your order is successfuly noted.";
        }
        else{
            cout<<"\n\tOnly "<<Q_idli-S_idli<<" idli is currently avaliable in hotel :";
        }
        break;
    }
     case 3:{
        cout<<"\n\n Please enter how many plates you want :";
        cin>>quantity;
        if(Q_dosa-S_dosa>=quantity){
            S_dosa+=quantity;
            T_dosa+= quantity*25;
            cout<<"\n\n\t\t"<<quantity<<" number of your order is successfuly noted.";
        }
        else{
            cout<<"\n\tOnly "<<Q_dosa-S_dosa<<" dosa is currently avaliable in hotel :";
        }
        break;
    }
     case 4:{
        cout<<"\n\n Please enter how many plates you want :";
        cin>>quantity;
        if(Q_thalpitha-S_thalpitha>=quantity){
            S_thalpitha+=quantity;
            T_thalpitha+= quantity*50;
            cout<<"\n\n\t\t"<<quantity<<" number of your order is successfuly noted.";
        }
        else{
            cout<<"\n\tOnly "<<Q_thalpitha-S_thalpitha<<" thalipitha is currently avaliable in hotel :";
        }
        break;
    }
     case 5:{
        cout<<"\n\n Please enter how many you want :";
        cin>>quantity;
        if(Q_pizza-S_pizza>=quantity){
            S_pizza+=quantity;
            T_pizza+= quantity*100;
            cout<<"\n\n\t\t"<<quantity<<" number of your order is successfuly noted.";
        }
        else{
            cout<<"\n\tOnly "<<Q_pizza-S_pizza<<" pizza is currently avaliable in hotel :";
        }
        break;
    }
     case 6:{
        cout<<"\n\n Please enter how many you want :";
        cin>>quantity;
        if(Q_burger-S_burger>=quantity){
            S_burger+=quantity;
            T_burger+= quantity*80;
            cout<<"\n\n\t\t"<<quantity<<" number of your order is successfuly noted.";
        }
        else{
            cout<<"\n\tOnly "<<Q_burger-S_burger<<" buger is currently avaliable in hotel :";
        }
        break;
    }
     case 7:{
        cout<<"\n\n Please enter how many plates you want :";
        cin>>quantity;
        if(Q_noodles-S_noodles>=quantity){
            S_noodles+=quantity;
            T_noodles+= quantity*30;
            cout<<"\n\n\t\t"<<quantity<<" number of your order is successfuly noted.";
        }
        else{
            cout<<"\n\tOnly "<<Q_noodles-S_noodles<<" noodles is currently avaliable in hotel :";
        }
        break;
    }
     case 8:{
        cout<<"\n\n Please enter how many glasses you want :";
        cin>>quantity;
        if(Q_juice-S_juice>=quantity){
            S_juice+=quantity;
            T_juice+= quantity*30;
            cout<<"\n\n\t\t"<<quantity<<" glasses of your order is successfuly noted.";
        }
        else{
            cout<<"\n\tOnly "<<Q_juice-S_juice<<" juice is currently avaliable in hotel :";
        }
        break;
    }
    //Only login by maneger id and passward:
     case 9:{
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
    cout<<"\n\t\t please enter the user name and passward.\n";
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
        break;
     }
     default:{
        cout<<"\t Please select from above options\n\n";
        goto menu;
        break;
     }
     }
        cout<<"\n\n\t Details of sales and collection :";
        cout<<"\n\n Number of rooms we have :"<<Q_rooms;
        cout<<"\n\n Number of rooms we gave for rent :"<<S_rooms;
        cout<<"\n\n Remaining rooms :"<<Q_rooms-S_rooms;
        cout<<"\n\n Total room collection of day :"<<T_rooms;

        cout<<"\n\n Number of idlis we have :"<<Q_idli;
        cout<<"\n\n Number of idlis we sold :"<<S_idli;
        cout<<"\n\n Remaining idlis :"<<Q_idli-S_idli;
        cout<<"\n\n Total idli collection of day :"<<T_idli;

        cout<<"\n\n Number of dosas we have :"<<Q_dosa;
        cout<<"\n\n Number of dosas we sold :"<<S_dosa;
        cout<<"\n\n Remaining dosas :"<<Q_dosa-S_dosa;
        cout<<"\n\n Total dosas collection of day :"<<T_dosa;

        cout<<"\n\n Number of thalpitha we have :"<<Q_thalpitha;
        cout<<"\n\n Number of thalpitha we sold :"<<S_thalpitha;
        cout<<"\n\n Remaining thalpitha :"<<Q_thalpitha-S_thalpitha;
        cout<<"\n\n Total idli collection of day :"<<T_thalpitha;

        cout<<"\n\n Number of pizza we have :"<<Q_pizza;
        cout<<"\n\n Number of pizza we sold :"<<S_pizza;
        cout<<"\n\n Remaining pizza :"<<Q_pizza-S_pizza;
        cout<<"\n\n Total pizza collection of day :"<<T_pizza;

        cout<<"\n\n Number of burger we have :"<<Q_burger;
        cout<<"\n\n Number of burger we sold :"<<S_burger;
        cout<<"\n\n Remaining burger :"<<Q_burger-S_burger;
        cout<<"\n\n Total burger collection of day :"<<T_burger;
        
        cout<<"\n\n Number of noodles we have :"<<Q_noodles;
        cout<<"\n\n Number of noodles we sold :"<<S_noodles;
        cout<<"\n\n Remaining noodles :"<<Q_noodles-S_noodles;
        cout<<"\n\n Total noodles collection of day :"<<T_noodles;

        cout<<"\n\n Number of glasses of juice we have :"<<Q_juice;
        cout<<"\n\n Number of glasses of juice we sold :"<<S_juice;
        cout<<"\n\n Remaining juice :"<<Q_juice-S_juice;
        cout<<"\n\n Total juice collection of day :"<<T_juice;

        cout<<"\n\n\n Total collection of day :"<<T_rooms+T_idli+T_dosa+T_thalpitha+T_pizza+T_burger+T_noodles+T_juice;
        break;
    }    
    case 10:{
        cout<<"\n\n Thank you for your time Have A Nice Day\n";
         exit(0);
    }
    default:{
         cout<<"\n\n Please select the numbers mentioned above :";
     }
     }
     goto menu_of_hotel;
    return 0;
}