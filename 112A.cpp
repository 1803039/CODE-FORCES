///petya and strings
#include<bits/stdc++.h>
using namespace std;

int main(){

    string str1,str2;
    cin>>str1>>str2;

    long long k = 0, m = 0;

    for(int i = 0; i<str1.length(); i++){
        str1[i] = toupper(str1[i]);
        str2[i] = toupper(str2[i]);
    }

    if(str1 > str2) cout<<1<<endl;
    else if(str1 < str2) cout<<-1<<endl;
    else if(str1 == str2) cout<<0<<endl;
    
    return 0;
}
///complete