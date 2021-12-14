#include <iostream>
using namespace std;
#include<math.h>
bool narcissistic( int value ){
  //Code away
  int sum =0;
  
  int original =value;
  
  while(value>0){
    int ldigit=value%10;
    sum +=pow(ldigit,3);
      value=value/10;
  }
  if(sum==original){
  return true;
  }else{
    return false;
  }
  
  
}
int main() {
   cout<<narcissistic(7)<<endl;
 
    return 0;
}