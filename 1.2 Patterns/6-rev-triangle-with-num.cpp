#include<iostream>
using namespace std;
int main(){
    int row = 5;
    for(int i = row ; i > 0 ; i--){
        for(int j = 0 ; j < i ; j++){
            cout<<j+1;
        }
        cout<<"\n";
    }
    return 0;
}