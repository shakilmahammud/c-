#include<iostream>
using namespace std;

int main(){

    int number[] = {1,2,5,6,7};
    int arrsize = sizeof(number)/sizeof(number[0]);
    for(int i =0; i<5; i++){
        cout<<number[i]<<endl;
    }
        cout<<"size of array use kre"<<endl;
    for(int i =0; i<arrsize; i++){
        cout<<number[i]<<endl;
    }

   cout<<"pointer reference of array &arrsize1 use kre"<<endl;
   int arrsize1 = *(&number+1)-number;
    for(int i =0; i<arrsize1; i++){
        cout<<number[i]<<endl;
    }
    return 0;
}