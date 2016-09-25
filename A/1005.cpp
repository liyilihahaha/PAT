#include <iostream>
#include <string>
using namespace std;
const char* msg[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
int main(){
    string s, ans[5];
    int sum = 0, i;
    cin >> s;
    for(i = 0; i < s.size(); i++){
        sum += (s[i] - '0');
    }
    for(i = 0; sum != 0; i++, sum /= 10){
        ans[i] = msg[sum % 10];
    }
    if(i == 0){
        cout << msg[0];
    }else{
        for(i = i - 1; i > 0; i--){
            cout << ans[i] << " ";
        }
        cout << ans[0] << endl;
    }
    return 0;
}
