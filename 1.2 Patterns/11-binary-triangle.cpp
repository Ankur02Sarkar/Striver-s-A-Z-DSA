#include<iostream>
using namespace std;
int main(){
    int row = 5;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j <= i ; j++){
            if((i+j)%2 == 0)
                cout<<"1";
            else
                cout<<"0";
        }
        cout<<"\n";
    }
}