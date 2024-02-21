#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

int reverse(int x) {
        
        int rev = 0;
        
        while(x!=0){
            int rem = x%10;
            
            if(rev > INT_MAX/10 || rev < INT_MIN/10){
                return 0;
            }
            
            rev = (rev * 10) + rem;
            x = x/10;
        }
        
        return rev;
    }


int main(){

    int num;
    cin >> num;
    cout << "Reverse: " << reverse(num) << endl;
}