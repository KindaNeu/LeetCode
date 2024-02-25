#include<iostream>
using namespace std;

int product(int num){

    int multi = 1;

    while(num!=0){
        int rem = num%10;
        multi = multi * rem;
        num = num/10;
    }
    return multi;
}

int sum(int num){

    int add = 0;

    while(num!=0){
        int rem = num%10;
        add = add + rem;
        num = num/10;
    }
    return add;
}

int main(){

    int num;
    cin >> num;

    int ans = product(num);
    int ans1 = sum(num);

    int diff = ans - ans1;

    cout << diff << endl;
}