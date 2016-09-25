#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        long long a, b, c, sum;
        cin >> a >> b >> c;
        sum = a + b;
        cout << "Case #" << i << ": " << (sum > c ? "true\n" :"false\n");
    }
    return 0;
}
