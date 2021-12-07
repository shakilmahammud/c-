#include<iostream>
using namespace std;

int main (){
    int n;
    cin>>n;
   int reversenum = 0;

   while(n>0){
       int lasdigit = n%10 ;
        cout<<lasdigit<<endl;
       reversenum = reversenum*10 + lasdigit;
        cout<<reversenum<<endl;
       n = n/10;
       cout<<n<<endl;
        }
        // cout<<reversenum<<endl;
}

