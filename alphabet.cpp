#include<iostream>
using namespace std;

void alphabet(char ch){
    bool flag=false;
    for(int i=65;i<=122;i++){
        if(int(ch)==i){
        flag=true;
        }
        for(int j=91;j<=96;j++){
            if(int(ch)==j){
            flag=false;
            }
        }
    }
    if(flag==true){
        cout<<"alphabet";
    }
    else{
        cout<<"not an alphabet";
    }
}

int main(){

    char c;
    cin>>c;

    alphabet(c);
    


    return 0;
}