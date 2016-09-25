#include <iostream>
#include <algorithm>
using namespace std;
int num[1010] = {0}, index = 0, n, tree[1010];
void inOrder(int root){
    if(root > n) return;
    inOrder(root * 2);
    tree[root] = num[index++];
    inOrder(root * 2 + 1);
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    sort(num, num + n);
    inOrder(1);
    for(int i = 1; i <=n; i++){
        cout << tree[i];
        if(i < n) cout << " ";
    }
    cout << endl;
    return 0;
}
