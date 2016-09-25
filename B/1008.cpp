#include <iostream>
#include <algorithm>
using namespace std;
int num[110] = {0};
void rev(int num[], int len, int h){
    reverse(num, num + h);
    reverse(num + h, num + len);
    reverse(num, num + len);
}
int main(){
    int len, h, i = 0;
    cin >> len >> h;
    while(cin >> num[i++]);
    rev(num, len, len - h % len);
    cout << num[0];
    for(int i = 1; i < len; i++) cout << " " << num[i];
    cout << endl;
    return 0;
}
