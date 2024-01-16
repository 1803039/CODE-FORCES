///Queue at the school
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, t;
    cin>>n>>t;
    string s, a;
    cin>>s;

    int i = 1;
    int j = 1;

    while(i <= t){
        while(j < n)
        {
            if(s[j] == 'G' && s[j-1] == 'B'){
            swap(s[j], s[j-1]);
            j++;
        }
        j++;
        }
        j = 1;
        i++;
    }
    a = s;
    cout<<a<<endl;
return 0;
}