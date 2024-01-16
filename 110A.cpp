///Nearly Lucky Number
#include<bits/stdc++.h>
using namespace std;

int main(){

    long long input;
    cin>>input;

    int count = 0;
    while(input != 0){
        if(input %  10 == 4 || input % 10 == 7){
            count++;
        }
        input = input / 10;
    }

    if(count == 4 || count == 7){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
return 0;}