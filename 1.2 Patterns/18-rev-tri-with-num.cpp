#include<iostream>
using namespace std;
int main(){
    int row = 5;
    for(int i = row  ; i > 0 ; i--){
        for(int j = i ; j <= row ; j++){
            cout<<char(j+64);
        }
        cout<<"\n";
    }
    return 0;
}