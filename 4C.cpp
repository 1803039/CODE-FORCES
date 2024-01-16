///Registration system
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    string array[n];

    for(int i = 0; i < n; i++){
        cin>>array[i];
    }
    cout<<"OK"<<endl;
    
    for(int i = 1; i < n; i++){
        int j = i - 1;
        int count = 0;
        while(j >= 0){
            if(array[i] == array[j]){
                count++;
            }
            j--;
        }
        if(count == 0){cout<<"OK"<<endl;}
        else{cout<<array[i] + to_string(count)<<endl;}
    }

return 0;
}