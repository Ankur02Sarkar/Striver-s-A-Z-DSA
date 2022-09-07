#include <iostream>
using namespace std;
int main()
{
    int row = 5, i, j, k;
    for( i = 0 ; i < row ; i++){
        for( j = 0 ; j <= i ; j++){
            cout<<j+1;
        }
        for( k = 1 ; k < 2*(row - i ) - 1 ; k++){
            cout<<" ";
        }
        for(;j > 0 ; j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}