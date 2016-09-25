#include <iostream>
using namespace std;
int main(){
    int zhi, xi, first = 1;
    while(cin >> xi >> zhi) {
        if(zhi < 1 ) continue;
        if(first) first = 0;
        else cout << " ";
        cout << zhi * xi << " " << zhi - 1;
    }
    return 0;
}
