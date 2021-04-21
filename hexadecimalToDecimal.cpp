#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int hexadecimalToDecimal(char n[])
{
    int ans=0;
    int x=1;

    int s= strlen(n);
    for(int i=s-1; i>=0; i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            ans += x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F')
        {
            ans += x*(n[i]-'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

int main(){

    
    char a[]= "1CF";
    cout<< hexadecimalToDecimal(a)<<endl;
    return 0;
}