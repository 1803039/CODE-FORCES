/// string task
#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin>>str;
    int size = str.length();

    for(int i = 0; i<size; i++){ ///deleting vowels
        if(str[i] == 'A' || str[i] == 'O' || str[i] == 'Y' || str[i] == 'E' || str[i] == 'U' || str[i] == 'I' || str[i] == 'a' || str[i] == 'o' || str[i] == 'y' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i'){
           for(int j = i; j<size; j++){
               str[j] = str[j+1];
           }
           i--;
           size--;
        }
    }

    for( int i = 0; i<size; i++){ ///converting into lowercase and adding '.';
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = 'a' + (str[i] - 'A');
            cout<<"."<<str[i];
        }
        else cout<<"."<<str[i];
    }

return 0;
}
///complete
///done by me with only my logic
///can be optimised a lot