#include<iostream>
using namespace std;

int factorial(int num){
    int fact=1;
    for(int i=2;  i<=num; i++){
        fact = fact* i;

    }
    return fact;
}

int main(){
    int n,r;
    cin>>n>>r;

    int nCr= factorial(n)/(factorial(r)*factorial(n-r));
    cout<<nCr<<endl;

    return 0;
}
