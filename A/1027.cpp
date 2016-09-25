#include <iostream>
using namespace std;
char* redix = "0123456789ABC";
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << "#" << redix[a / 13] << redix[a % 13]
                << redix[b / 13] << redix[b % 13]
                << redix[c / 13] << redix[c % 13]
                << endl;
    return 0;
}
