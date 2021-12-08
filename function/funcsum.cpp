#include<iostream>
using namespace std;

int sum(int num1,int num2){
    int result= num1 + num2;
    cout<<result<<endl;
   return result;
}

int main (){
    int num1,num2;
    cin>>num1>>num2;
    sum(num1,num2);
    return 0;
}