#include<iostream>
using namespace std;
int main(){
    int row = 5, col = 4 ;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}