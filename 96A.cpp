///football
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    int count = 1;

    for(int i = 1; i<s.length(); i++){
        if(s[i-1] == s[i]){
            count++;
            if(count == 7){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else count = 1;
    }

    cout<<"NO"<<endl;

return 0;
}
///took help from online a little bit;
/// return 0 inside of if statement was not understood