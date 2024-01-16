///Puzzles
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, i, j;
    cin>>n>>m;
    int f[m];
    
    for(int i = 0; i < m; i++){
        cin>>f[i];
    }
    sort(f, f+m);

    int minimum = f[n-1] - f[0];
    for(i = n; i < m; i++){
        j = i - (n-1);
       if (minimum > (f[i] - f[j])){
           minimum = f[i] - f[j];
       }
    }
    cout<<minimum<<endl;

return 0;
}
///complete
///greedy