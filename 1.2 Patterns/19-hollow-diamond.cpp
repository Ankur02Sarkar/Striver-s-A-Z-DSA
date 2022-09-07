#include <iostream>
using namespace std;
int main()
{
    int row = 5;
    for(int i = row ; i > 0 ; i--){
        for(int j = 0 ; j < i ; j++){
            cout<<"*";
        }
        for(int k = 0 ; k < 2*(row - i) ; k++){
            cout<<" ";
        }
        for(int j = 0 ; j < i ; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i = 1 ; i < row + 1 ; i++){
        for(int j = 0 ; j < i ; j++){
            cout<<"*";
        }
        for(int k = 0 ; k < 2*(row - i) ; k++){
            cout<<" ";
        }
        for(int j = 0 ; j < i ; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}