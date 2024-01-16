///elephant
#include<bits/stdc++.h>
using namespace std;

int main(){

    int x,a;
    cin>>x;
    a = x;
    int cnt = 0;

    int arr[] = {5,4,3,2,1};

    for(int i = 0; i<5; i++){
        cnt = cnt + (a / arr[i]);
        a = a % arr[i];
    }
     cout<< cnt <<endl;

return 0;
}
///complete