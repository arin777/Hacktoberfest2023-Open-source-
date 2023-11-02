#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int n=10;
    int i;
    cout<<a<<""<<b<<"";
    for(i=1;i<=n;i++){
        int fib=a+b;
        cout<<fib<<"";
        a=b;
        b=fib;

    }
    
}
