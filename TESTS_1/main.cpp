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

//Execution Begins Here!
int main(int argc, char** argv) {
srand(static_cast<unsigned int>(time(0)));
    int card1, c1;
    int card2, c2;
    int sum, Hand;
    char A;
    char choice;
        card1=GiveMeCard();
        card2=GiveMeCard();
        
       
        if(card1>10){
            card1=10;
        }
   
        if(card2>10){
            card2=10;    
        }
        sum=card1+card2;
        cout<<card1<<" "<<card2<<" "<<sum<<endl;
        
        for (int i = 1; i <= 20; i++) {
            int HitMe=0;
            if(sum<21){
            cout<<"Do you want another card? type 'y'(yes) or 'n'(no)?"<<endl;
            cin>>choice;
                if(choice=='y'){
                    HitMe=GiveMeCard();
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
                            cout<<HitMe<<endl;
                        }
                        else if(A=='n'){
                            HitMe=11;
                            cout<<HitMe<<endl;
                        }
                    }
                    else{
                        HitMe=HitMe;
                        cout<<HitMe<<endl;
                    }
                sum+=HitMe;
                cout<<sum<<endl;
                }
                else if(choice=='n'){
                    cout<<"I Stand"<<endl;
                break;
                }
            }
            else if(sum==21){
                cout<<"BLACK JACK!!!"<<endl;
                cout<<"Good Luck Dealer!"<<endl;
                cout<<sum<<endl;
                break;
            }
            else if(sum>21){
                cout<<"You Busted! "<<endl;
                cout<<"Dealer Wins!"<<endl;
                break;
            }
            else if(choice=='n'){
   
            break;
            }
      
}
    return 0;
}


  

