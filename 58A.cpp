///chat room
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "hello";
    int j = 0;
    int count = 0;
    string str2;
    cin>>str2;
    int n = str2.size();

    for(int i = 0; i<n; i++){
        if(str2[i] == str1[j]){
            count++;
            j++;
            if(count == 5){
                break;
            }
        }
    }
    if(count == 5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}
///complete
//greedy