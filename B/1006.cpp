#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
    int m = floor(sqrt(double(n)));
    for(int i = 2; i <= m; i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    int n, left = 0, right = 0, turn = 0, count = 0;
    cin >> n;
    for(int i = 2; i < n; i++){
        if(isPrime(i)){
            //cout << i << endl;
            if(!turn){
                right = i;
                turn = 1;
            }else{
                right = i;
                turn = 0;
            }
        }
        if(turn == 0 && right != 0 && right - left == 2) cout << count++ <<"\t" << left << "\t" << right << endl;
    }
    cout << count << endl;
    return 0;
}
