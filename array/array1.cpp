#include<iostream>
using namespace std;


int main(){
   // datatype name = value;
   //datatype name[] ={value}; array syntax
   //datatype name[number of element store] ={value}; array syntax

   int number[] = {1,4,5,6,9,10,15};
//index number      0 1 2 3 4

//    cout<<number[4]<<endl;

   //
 int arrsize = sizeof(number)/sizeof(number[0]);
 cout<<arrsize<<endl;

 int arrsize1 = *(&number+1)-number;
 cout<<arrsize1<<endl;



   

    return 0;
}