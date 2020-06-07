/* 
 * File:   main.cpp
 * Author: Rafael Vital
 * Created on May 1, 2020, 3:40 AM
 * Purpose: Jack C+ Game
 */

//System Level Libraries
#include <iostream>   //iostream Library
#include <cstdlib>    //
#include <ctime>      //Time for random function
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes
void Cards(int card1){          //Card picture function
    
                switch(card1){
                case 1: cout<<" _______"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|   A   |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|_______|"<<endl;
                        break;
                case 2: cout<<" _______"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|   2   |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|_______|"<<endl;
                        break;
                case 3: cout<<" _______"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|   3   |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|_______|"<<endl;
                        break;
                case 4: cout<<" _______"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|   4   |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|_______|"<<endl;
                        break;
                case 5: cout<<" _______"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|   5   |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|_______|"<<endl;
                        break;
                case 6: cout<<" _______"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|   6   |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|_______|"<<endl;
                        break;
                case 7: cout<<" _______"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|   7   |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|_______|"<<endl;
                        break;
                case 8: cout<<" _______"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|   8   |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|_______|"<<endl;
                        break;
                case 9: cout<<" _______"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|   9   |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|_______|"<<endl;
                        break;
                case 10:cout<<" _______"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|   10  |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|_______|"<<endl;
                        break;
                case 11:cout<<" _______"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|   J   |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|_______|"<<endl;
                        break;
                case 12:cout<<" _______"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|   Q   |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|_______|"<<endl;
                        break;
                case 13:cout<<" _______"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|   K   |"<<endl;
                        cout<<"|       |"<<endl;
                        cout<<"|_______|"<<endl;
                        break;
            }
    
}
void Menu(){                  //Function for the Menu of the Game
    cout<<"           Welcome to           "<<endl;
    cout<<"{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}"<<endl;
    cout<<" JJJJJJJ     CCCCCC       ++    "<<endl;
    cout<<"    J       C      C      ++    "<<endl;
    cout<<"    J      C          ++++++++++"<<endl;
    cout<<"J   J      C          ++++++++++"<<endl;
    cout<<" J  J       C      C      ++    "<<endl;
    cout<<"  JJ         CCCCCC       ++    "<<endl;
    cout<<"{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}"<<endl;
    cout<<"             JACK C+            "<<endl;
    cout<<"   Your Black Jack Game in C++  "<<endl;
    cout<<"................................"<<endl;
    cout<<"    To Play Jack C+ Type 'P'    "<<endl;
    cout<<"    For How to Play Type 'H'    "<<endl;
    cout<<"    To Quit the Game Type 'Q'   "<<endl;
    cout<<"................................"<<endl;
    
            
}
void Instructions(){            //Function for the Instructions
    cout<<"How To Play Jack C+ : "<<endl;
    cout<<"Follow all the Prompts that are given by the program."<<endl;
    cout<<"The objective is to get 21 or a number close to 21 by pulling random cards,"<<endl;
    cout<<"and doing that better than the dealer."<<endl;
    cout<<"You win by getting closer to the number 21 without getting over it than the"<<endl;
    cout<<"dealer. If you get over 21 the dealer wins automatically."<<endl;
    cout<<"Once you're satisfied with your cards, you stand and wait for the dealer to play"<<endl;
    cout<<"If the dealers number is closer than yours to 21, you lose. If it's the same"<<endl;
    cout<<"you guys draw and if it's lower you win."<<endl;
    cout<<"The cards, Jack, Queen and King are worth 10 points and the A's can be worth 1 or 11,"<<endl;
    cout<<"and that is decided by the player."<<endl;
    cout<<"All the other cards are worth their respective number."<<endl;
    cout<<"Best of luck Player!"<<endl<<endl;
    cout<<"To go back to menu, Press 'm'"<<endl;
}

int GiveMeCard(){               //Function to get Random cards every time that is asked for
    return rand()%13+1;
}
int Play(char O, int score){    //Function that carries the actual played game
    srand(static_cast<unsigned int>(time(0)));
    int card1=0;
    int sum=0;
    int Hand;
    char A;       //A's card
    char choice;  //choice to get new cards
    int InitC;    //Initial Cards
    
    if(O=='P'){
        InitC=2;
    }
    else if(O=='D'){
        InitC=1;
    }
        for(int i=0 ; i<InitC ; i++ ){
            
            card1=GiveMeCard();
            Cards(card1);
            if(card1>10){
                card1=10;
            }
            if(card1==11){              //Output the 11th card as Jack
                card1=10;
                cout<<"J"<<endl;
            }
            else if(card1==12){         //Output the 12th card as Queen
                card1=10;
                cout<<"Q"<<endl;
            }
            else if(card1==13){         //Output the 13th card as King
                card1=10;
                cout<<"K"<<endl;
            }
            else if(card1==1){          //Output the 1st card as 'A' and give the option to select the value of it
                cout<<'A'<<endl;
                cout<<"Do you want to use your A as 1 or 11?"<<endl;
                cout<<"for 1 type 'y' and for 11 type 'n'!"<<endl;
                cin>>A;
                if(A=='y'){
                    card1=1;
                    cout<<card1<<endl;
                }
                else if(A=='n'){
                    card1=11;
                    cout<<card1<<endl;
                }
            }
            
            sum+=card1;
            
            
        }
    if(O=='P'){
         cout<<"your Total is:"<<sum<<endl;
    }
    else{
        cout<<endl;
    }
    if(O=='D'){                     //Dealer playing automatically
        while(sum<score && sum<21){
            int HitMe=GiveMeCard();
            Cards(HitMe);
            if(HitMe==1){
            
                if(sum<11){
                    HitMe=11;
                    cout<<"Dealer chose "<<HitMe<<" as the 'A' "<<endl;
                }
                else{
                    HitMe=1;
                    cout<<"Dealer chose "<<HitMe<<" as the 'A' "<<endl;
                }
            }
            if(HitMe==11){
                HitMe=10;
                
            }
            else if(HitMe==12){
                HitMe=10;
                
            }
            else if(HitMe==13){
                HitMe=10;
                
            }
            sum+=HitMe;
            cout<<"Dealers Sum is: "<<sum<<endl;
        }
    }
    else{                           //Player's playing by commands
       
        for (int i = 1; i <= 21; i++) {
            int HitMe=0;
            if(sum<21){
            cout<<endl;
            cout<<"Do you want another card? type 'y'(yes) or 'n'(no)?"<<endl;
            cin>>choice;
                if(choice=='y'||choice=='Y'){
                    HitMe=GiveMeCard();
                    Cards(HitMe);
                    if(HitMe==11){
                        HitMe=10;
                       
                    }
                    else if(HitMe==12){
                        HitMe=10;
                       
                    }
                    else if(HitMe==13){
                        HitMe=10;
                    
                    }
                    else if(HitMe==1){
                     
                        cout<<"Do you want to use your A as 1 or 11?"<<endl;
                        cout<<"for 1 type 'y' and for 11 type 'n'!"<<endl;
                        cin>>A;
                        if(A=='y'){
                            HitMe=1;
                           
                        }
                        else if(A=='n'){
                            HitMe=11;
                           
                        }
                    }
                    else{
                        HitMe=HitMe;
                        
                    }
                sum+=HitMe;
                cout<<"Your sum is:"<<sum<<endl;
                }
                else if(choice=='n'||choice=='N'){
                    cout<<"I Stand"<<endl;
                break;
                }
                else{
                    cout<<"Input not valid, please input 'y' or 'n'"<<endl;
                }
            }
            else if(choice=='n'){
   
            break;
            }
      
}
    }
    return sum;    
}


//Execution Begins Here!
int main(int argc, char** argv) {
    char again;
    char MenuOpt;
    Menu();                                 //Initialize the menu Function                        
    cin>>MenuOpt;
    if(MenuOpt=='h'||MenuOpt=='H'){         //Instructions
        char Back;
        Instructions();                     //Initialize Instructions Function
        cin>>Back;
        if(Back=='m'){
            main(argc, argv);
        }
    }
    else if(MenuOpt=='q'||MenuOpt=='Q'){    //Quits Program
        return 0;
        return 0;
    }
    else if(MenuOpt=='p'||MenuOpt=='P'){    //Initializes game
    do{                                     //Do loop to repeat the game until player doesn't want anymore
    int ScoreD=0;
    int ScoreP=Play('P',0);                 //Initialize Game function for the player
        if(ScoreP>21){
            cout<<"You Busted! "<<endl;
            cout<<"Dealer Wins!"<<endl;
        }
        else if(ScoreP<=21){
            if(ScoreP==21){
            cout<<"BLACK JACK!!!"<<endl;
            cout<<"Good Luck, Dealer!"<<endl;
            }
            ScoreD=Play('D',ScoreP);        //Initializes Game function for the Dealer using Players score as decider for some actions
            if(ScoreD>ScoreP && ScoreD<=21){
                cout<<ScoreD<<endl;
                cout<<"The Dealer Wins! Unlucky"<<endl;
            }
            else if(ScoreP>ScoreD && ScoreD<=21){
                cout<<ScoreP<<endl;
                cout<<"You Win!! Congrats"<<endl;
            }
            else if(ScoreD>21){
                cout<<"Dealer Busted, You Win!!"<<endl;
            }
            else if(ScoreD==ScoreP){
                cout<<"It's a Draw!!"<<endl;
            }
            
           
        }
    cout<<endl;
    cout<<"Do you wanna play again?"<<endl;
    cout<<"Type 'y' to play again, 'n' to exit or 'm' for main menu"<<endl;
    cin>>again;
 
    }while(again!='n'&&again!='m');          //Exits loop
     
    if(again=='m'){                          //Return to menu
    main(argc, argv);
    }
    }
  
    
    else{
    
    }
    
return 0;
}

  

