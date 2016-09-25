#include <iostream>
#include <algorithm>
using namespace std;
bool isUsed[30000] = {false};
int num[110] = {0};
int main(){
    int n, i = 0, first = 1;
    cin >> n;
    while(n--){
        cin >> num[i];
        int temp = num[i++];
        while(temp != 1){
                if(temp % 2 == 0) isUsed[temp = temp / 2] = true;
                else isUsed[temp = (temp * 3 + 1) / 2] = true;
        }
    }
    sort(num, num + i);
    for(i--; i >= 0; i--){
        if(!isUsed[num[i]]) {
            if(first) first = !first;
            else cout << " ";
            cout << num[i];
        }
    }
    cout << endl;
    return 0;
}
