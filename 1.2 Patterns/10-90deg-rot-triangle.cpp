#include<iostream>
using namespace std;
int main(){
    int row = 5;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    
    for(int i = row - 1 ; i > 0 ; i--){
        for(int j = 0 ; j < i ; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}