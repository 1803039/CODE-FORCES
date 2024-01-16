#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int flag = 0;
    cin>>n;
    bool array[n] = {};
    for(int i = 0; i<n; i++){
        cin>>array[i];
        if(array[i] == 1){
            flag += 1;
        }
    }

    if(flag != 0){cout<<"HARD"<<endl;}
    else cout<<"EASY"<<endl;

    return 0;
}