/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 18, 2020, 11:33 AM
 * Purpose: Hello World
 */

//System Level Libraries
#include <iostream>   //iostream Library
#include <cstdlib>    //
#include <ctime>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes
int GiveMeCard(){
    return rand()%13+1;
}
int Play(char O, int score){
    srand(static_cast<unsigned int>(time(0)));
    int card1=0;
    int sum=0;
    int Hand;
    char A;
    char choice;
    int InitC;    //Initial Cards
    
    if(O=='P'){
        InitC=2;
    }
    else if(O=='D'){
        InitC=1;
    }
        for(int i=0 ; i<InitC ; i++ ){
            
            card1=GiveMeCard();
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
            if(card1>10){
                card1=10;
            }
            if(card1==11){
                card1=10;
                cout<<"J"<<endl;
            }
            else if(card1==12){
                card1=10;
                cout<<"Q"<<endl;
            }
            else if(card1==13){
                card1=10;
                cout<<"K"<<endl;
            }
            else if(card1==1){
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
    if(O=='D'){
        while(sum<score && sum<21){
            int HitMe=GiveMeCard();
            switch(HitMe){
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
            if(HitMe==1){
                cout<<'A'<<endl;
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
    else{
       
        do  {
            int HitMe=0;
            if(sum<21){
            cout<<"Do you want another card? type 'y'(yes) or 'n'(no)?"<<endl;
            choice=getchar();
                if(choice=='y'||choice=='Y'){
                    HitMe=GiveMeCard();
                switch(HitMe){
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
                    if(HitMe==11){
                        HitMe=10;
                        cout<<"J"<<endl;
                    }
                    else if(HitMe==12){
                        HitMe=10;
                        cout<<"Q"<<endl;
                    }
                    else if(HitMe==13){
                        HitMe=10;
                        cout<<"K"<<endl;
                    }
                    else if(HitMe==1){
                        cout<<'A'<<endl;
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
        while(choice=='y'){}
    }
    return sum;    
}

//Execution Begins Here!
int main(int argc, char** argv) {
    char again;
    
    do{
    int ScoreD=0;
    int ScoreP=Play('P',0);
        if(ScoreP>21){
            cout<<"You Busted! "<<endl;
            cout<<"Dealer Wins!"<<endl;
        }
        else if(ScoreP<=21){
            if(ScoreP==21){
            cout<<"BLACK JACK!!!"<<endl;
            cout<<"Good Luck, Dealer!"<<endl;
            }
            ScoreD=Play('D',ScoreP);
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
    if(again=='m'){
        
        break;
    }
    }
    while(again!='n');
return 0;
}

  

