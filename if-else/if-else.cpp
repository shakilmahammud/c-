#include<iostream>
using namespace std;

int main(){
    #ifndef CODE_JUDGE //no part ofmain code 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int saving;
    cin>>saving;

    if(saving>5000){
        cout<<"samira ke shopping anita jbe\n";
        if(saving>10000){
            cout<<"samira ke niya trip dite jabe";
        }
    }else if(saving>2000){
        cout<<"maria ke niya gurte jabe";
    }else{
        cout<<"frinds";
    }
    
    return 0;
}