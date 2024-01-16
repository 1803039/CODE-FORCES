///IQ test
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    int even = 0;
    int odd = 0;

    for(int i = 0; i<n; i++){
        cin>>array[i];
        if(array[i]%2 == 0){even +=1;}
        else{odd +=1;}
    }
    for(int i = 0; i<n; i++){
        if(even > odd){
            if(array[i]%2 != 0){
                cout<<i+1<<endl; break;
            }
        }
        else{
            if(array[i]%2 == 0){
                cout<<i+1<<endl; break;
            }
        }
    }
return 0;
}
///at first I misunderstood the problem. So, i took help from online.
///Now, I understand the problem properly
///complete