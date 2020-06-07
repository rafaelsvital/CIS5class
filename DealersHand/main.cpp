/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 18, 2020, 11:33 AM
 * Purpose: Hello World
 */

//System Level Libraries
#include <iostream>   //I/O Library
using namespace std;  //Libraries compiled under std

int DealersHand() {
srand(static_cast<unsigned int>(time(0)));
    int First;
    char A;
    char choice;
        First=rand()%13+1;
       
        if(First>10){
            First=10;
           
        }
        else{
            First=First;
        }
        if(card2>10){
            card2=10;
            
        
 
        cout<<First<<endl;
        
        for (int i = 1; i <= 20; i++) {
            int HitMe=0;
            if(sum<21){
            cout<<"Do you want another card?type 'y'(yes) or 'n'(no)?"<<endl;
            cin>>choice;
                if(choice=='y'){
                    HitMe=rand()%13+1;
                    if(HitMe>=10){
                        HitMe=10;
                        cout<<HitMe<<endl;
                    }
                    else if(HitMe<10 && HitMe>1){
                        HitMe=HitMe;
                        cout<<HitMe<<endl;
                    }
                    else{
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
                
                sum+=HitMe;
                cout<<sum<<endl;
                }
                else if(choice=='n'){
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
                    cout<<"I Stand"<<endl;
                    
            break;
            }
            
         
}
    return sum;
}


  

