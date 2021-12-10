#include<iostream>
using namespace std;


int main(){
  //break & Continue
  for(int i=0; i<=3;i++){

      if(i==2){
          break;
      }
      cout<<i<<" "<<"break na hoya projonto colo"<<endl<<endl;
  }
   for(int i=0; i<=3;i++){

      if(i==2){
          continue;
      }
      cout<<i<<" "<<" continue pore colo"<<endl<<endl;
  }


    return 0;
}