///Gravity flip
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    ///int a;
    int array[n];
    for(int i = 0; i < n; i++){
        cin>>array[i];
    }
    sort(array, array+n);
    for(int i = 0; i < n; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
return 0;
}
///complete
///greedy