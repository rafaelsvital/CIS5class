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
void Menu(){
    
    cout<<"           Welcome to           "<<endl;
    cout<<"{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}"<<endl;
    cout<<" JJJJJJJ     CCCCCC       ++    "<<endl;
    cout<<"    J       C      C      ++    "<<endl;
    cout<<"    J      C          ++++++++++"<<endl;
    cout<<"J   J      C       C  ++++++++++"<<endl;
    cout<<" J  J       C     C       ++    "<<endl;
    cout<<"  JJ         CCCCC        ++    "<<endl;
    cout<<"{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}"<<endl;
    cout<<"             JACK C+            "<<endl;
    cout<<"   Your Black Jack Game in C++  "<<endl;
    cout<<"................................"<<endl;
    cout<<"    To Play Jack C+ Type 'p'    "<<endl;
    cout<<"    For How to Play Type 'h'    "<<endl;
    cout<<"   To Quit the Game Type 'q'    "<<endl;
    cout<<"................................"<<endl;
    
    
    
            
}
void Instructions(){
    cout<<"How To Play Jack C+ : "<<endl;
    cout<<"     "
}

int Dealer(){
    int DelrHnd;        //Dealers Hand
    int FrstCrd;        //First Card drawn by dealer
    srand(static_cast<unsigned int>(time(0)));
    FrstCrd=rand()%13+1;
    cout<<FrstCrd<<endl;
    DlrsHnd=FrstCrd;
    for(int j=1, DelrHnd <= sum, j++){
        DlrsHnd=0;
        DlrsHnd=rand()%13+1;
        DlrsHnd+=DlrsHnd;
        cout<<DlrsHnd<<endl;
    }
    {
        
}
int player(){
    srand(static_cast<unsigned int>(time(0)));
    int card1;
    int card2;
    int sum, Hand;
    
    char choice;
        card1=rand()%13+1;
        card2=rand()%13+1;
        cout<<card1<<" "<<card2<<endl;
       
        if(card1>10){
            card1=10;
            cout<<card1<<endl;
        }
        else{
            card1=card1;
        }
        if(card2>10){
            card2=10;
            cout<<card2<<endl;
        }
        else{
            card2=card2;
        }
       
        sum=card1+card2;
        
      
        
          for (int i = 1; i <= 20; i++) {
              int HitMe=0;
            
              HitMe=rand()%13+1;
              if(HitMe>10){
            cout<<HitMe<<endl;      
            HitMe=10;
            cout<<HitMe<<endl;
            }
            else{
            HitMe=HitMe;
            }
    cout<<HitMe<<endl;
    Hand+=HitMe;
    cout<<Hand<<endl;
    cout<<"Do you want another card?type 'y'(yes) or 'n'(no)?"<<endl;
    cin>>choice;
    if(choice=='y'){
        continue;
    }
    else{
        break;
    }
}

        
        return 0;
}
}
//Execution Begins Here!
int main(int argc, char** argv) {
srand(static_cast<unsigned int>(time(0)));
    int card1, c1;
    int card2, c2;
    int sum, Hand;
    
    char choice;
        card1=rand()%13+1;
        card2=rand()%13+1;
        cout<<card1<<" "<<card2<<endl;
       
        if(card1>10){
            card1=10;
            cout<<card1<<endl;
        }
        else{
            card1=card1;
        }
        if(card2>10){
            card2=10;
            cout<<card2<<endl;
        }
        else{
            card2=card2;
        }
       
        sum=card1+card2;
        
        cout<<card1<<" "<<card2<<" "<<sum<<endl;
        
          for (int i = 1; i <= 20; i++) {
              int HitMe=0;
            
              HitMe=rand()%13+1;
              if(HitMe>10){
            cout<<HitMe<<endl;      
            HitMe=10;
            cout<<HitMe<<endl;
            }
            else{
            HitMe=HitMe;
            }
    cout<<HitMe<<endl;
    Hand+=HitMe;
    cout<<Hand<<endl;
    cout<<"Do you want another card?type 'y'(yes) or 'n'(no)?"<<endl;
    cin>>choice;
    if(choice=='y'){
        continue;
    }
    else{
        break;
    }
}

        
        return 0;
}
  

