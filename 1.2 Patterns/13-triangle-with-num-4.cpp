#include<iostream>
using namespace std;
int main(){
    int row = 5, num = 1;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }
    return 0;
}