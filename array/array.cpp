#include<iostream>
using namespace std;
 
template<typename T, size_t n>
void print_array(T const(& arr)[n])
{
    for (size_t i = 0; i < n; i++) {
       cout << arr[i] << ' ';
    }
}
int main(){
 int a[]={1,2,3,4,5,6,7,8,9};
    cout<<a[3]<<endl;
     print_array(a);
    return 0;
}