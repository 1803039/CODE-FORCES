///beautiful matrix
#include<bits/stdc++.h>
using namespace std;

int main(){
    int move = 0;
    int arr[5][5];

    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cin>>arr[i][j];
            
            if( arr[i][j] == 1){
                if(i < 2){
                    move = 2 - i;
                    if(j < 2){
                        move = move + (2-j);
                    }
                    else if (j == 2){ move +=0;}
                    else if(j > 2){
                        move = move + (j - 2);
                    }
                }
                else if(i == 2){
                    move = 0;
                    if(j < 2){
                        move = move + ( 2 - j);
                    }
                    else if ( j == 2){ move = 0;}
                    else if ( j > 2){
                        move = move + ( j - 2);
                    }
                }
                else if ( i > 2){
                    move = i - 2;
                    if(j < 2){
                        move = move + (2 - j);
                    }
                    else if( j == 0){
                        move += 0;
                    }
                    else if( j > 2){
                        move = move + ( j - 2);
                    }
                }

            }
        }
    } cout<<move<<endl;

return 0;    
}
/// completed by my logic only

/* most efficient logic
if (arr[i][j] == 1)
            {
                cout << abs(i - 2) + abs(j - 2) << endl;
            }
*/            