///way too long words
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string str[n];

    for(int i = 0; i<n; i++){
        cin>>str[i];
    }

    for(int i = 0; i<n; i++){

        if(str[i].length() > 10){
            cout<< str[i].front() << str[i].length() - 2 << str[i].back() <<endl;
            }

        else
        cout<<str[i]<<endl;
    }

return 0;
}
///used stl here
///complete