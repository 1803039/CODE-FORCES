/// helpful maths
#include<bits/stdc++.h>
using namespace std;

int main(){

    char temp;
    string s;
    cin>>s;

    for(int i = 0; i<s.length()-1; i+=2){
        for(int j = 0; j<s.length()-1-i; j+=2){
            if(s[j] > s[j+2]){
                temp = s[j];
                s[j] = s[j+2];
                s[j+2] = temp;
            }
        }
    }

    for(int i = 0; i<s.length(); i++){
        cout<<s[i];
    }
    cout<<endl;
return 0;
}
///complete from all my logic.
