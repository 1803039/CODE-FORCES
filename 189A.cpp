///Cut Ribbon
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, c;
    cin>>n>>a>>b>>c;

    int array[] = {a, b, c};
    sort(array, array+3);

    int i = 1;
    ///int remaining = 0;
    if(n % array[0] == 0){
        cout<< n / array[0]<<endl;
    }
    else
    {
        while(array[0] * i <= n){
        int remaining = n - (array[0]*i);
        if(remaining > array[1] || remaining > array[2]){
            i++;
        }
        else if(remaining == array[1] || remaining == array[2]){
            break;
        }
    }
    cout<<i+1<<endl;
    }

return 0;
}