#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int a, b, c, i, count = 0;
    char s[] = "1000000000";
    cin >> a >> b;
    c = a + b;
    if(c == 0) {
        cout << 0;
    }else{
        if(c < 0){
            cout << "-";
            c = -c;
        }
        for(i = 0; c != 0; i++){
            s[i] = char((c % 10) + '0');
            c /= 10;
        }
        s[i] = '\0';
        //cout << s << endl;
        string str(s);
        for(i = 0; i < str.length(); i += 4){
            str.insert(i,",", 1);
        }
        reverse(str.begin(), str.end());
        *(str.end() - 1)= '\0';
        cout << str;
    }
    cout << endl;
    return 0;
}
