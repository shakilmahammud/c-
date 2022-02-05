#include<iostream>
using namespace std;

int main(){
    int ruppe =15;
    int choprice = 1;
    int sum = 0;
    for(choprice ;choprice<=ruppe;choprice++){
        sum = sum +1;
     if(sum>=15){
        int newsum = sum/3;
        sum = sum +newsum;
        if(newsum>=5){
            sum =sum+2;
        }
    }
    }
     
       cout<<sum<<endl;
    
}
