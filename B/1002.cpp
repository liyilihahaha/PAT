#include <iostream>
#include <cstdio>
using namespace std;
const char *msg[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main(){
    char c;
    int sum;
    while(cin >> c){
        sum += c - '0';
    }
    //cout << sum << endl;
    if(sum >= 100) cout << msg[sum / 100] << " ";
    if(sum >= 10) cout << msg[sum / 10 % 10] << " ";
    cout << msg[sum % 10] << endl;
    return 0;
}
