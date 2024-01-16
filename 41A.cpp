///Translation
#include<bits/stdc++.h>
using namespace std;

int main(){

    string str1, str2;
    cin>>str1>>str2;

    int i = str1.length() - 1;
    int j = 0;

    while(i >= 0){
        if(str1[i] != str2[j]){
            cout<<"NO"<<endl; return 0;
        }
        j++;
        i--;
    }
    cout<<"YES"<<endl;
return 0;
}