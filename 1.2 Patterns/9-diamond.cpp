#include <iostream>
using namespace std;
int main()
{
    int row = 5;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < row - i ; j++){
            cout<<" ";
        }
        for(int k = 0 ; k < 2*i + 1 ; k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout<<" ";
        }
        for(int k = 0 ; k < 2*(row - i ) - 1 ; k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}