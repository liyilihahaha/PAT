#include <iostream>
using namespace std;
int main(){
    int req[110] = {0}, n, total = 0, now = 0, to;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> req[i];
    }
    for(int i = 0; i < n; i++){
        to = req[i];
        if(now > to){
            total += 4 * (now - to) + 5;
        }else{
            total += 6 * (to - now) + 5;
        }
        now = to;
    }
    cout << total << endl;
    return 0;
}
