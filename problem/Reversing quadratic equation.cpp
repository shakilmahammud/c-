//💡  Revising Quadratic Equations
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
double a,b,c;
cin>>a>>b>>c;
double d;
d=(b*b)-(4*a*c);
double r1,r2;
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
double first,second;
if(r1>r2){
first=r2;
second=r1;
}
else{
first=r1;
second=r2;
}
if(d>0){
	cout<<"Real and Distinct"<<endl;
	cout<<first<<" "<<second<<endl;
}
if(d==0){
	cout<<"Real and Equal"<<endl;
	cout<<first<<" "<<second<<endl;
}
if(d<0){
	cout<<"Imaginary"<<endl;
}
return 0;
}