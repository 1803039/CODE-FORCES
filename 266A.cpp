///Stones on the table
#include<bits/stdc++.h>
using namespace std;

int main(){

    int input;
    cin>>input;
    string str;
    cin>>str;

    int i = 1;
    int count = 0;

    while(i <= input){
        if(str[i] == str[i-1]){
            count++;
        }
        i++;
    }
    cout<<count<<endl;
return 0;
}