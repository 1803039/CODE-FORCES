///Word
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    int l = s.length();
    int count = 0;

    for(int i = 0; i<l; i++){
        if( s[i] >= 'A' && s[i] <= 'Z'){
            count++;
        }
    }

    if(count <= (l - count)){
        for(int i = 0; i<l; i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = 'a' + (s[i] - 'A');
            }
            cout<<s[i];
        }
    }

    else{
        for(int i = 0; i<l; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = 'A' + (s[i] - 'a');
            }
        }
        cout<<s<<"\n";
    }
    cout<<"\n";

return 0;
}
///complete