///bit++
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x = 0;
    cin>>n;
    string str;

    for(int i = 0; i<n; i++){
        cin>>str;
        
        if( str == "++X"){
            ++x;
        }
        else if ( str == "X++"){
            x++;
        }
        else if ( str == "--X"){
            --x;
        }
        else if (str == "X--"){
            x--;
        }   
    }

    cout<<x<<endl;

return 0;
}
///complete