#include<iostream>
#include<math.h>
using namespace std;

bool isPower(int n){

    if(n == 1){
        return true;
    }

    for(int i = 0; i<=30; i++){

        int temp = pow(2,i);

        if(temp == n){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;

    if(isPower(n)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }

    return 0;
}