#include <iostream>
#include <cstdio>
#include <set>
using namespace std;
set<int> S[60];
double cale(int a, int b){
    int nt = S[b].size(), nc = 0;//nt = S[a].size()不对
    for(set<int>::iterator it = S[a].begin(); it != S[a].end(); it++){
        if(S[b].find(*it) != S[b].end()) nc++;
        else nt++;
    }
    return nc * 100.0 / nt;
}
int main(){
    int num;
    cin >> num;
    for(int i = 1; i <= num; i++){
        int number;
        cin >> number;
        for(int j = 0; j < number; j++){
            int n;
            cin >> n;
            S[i].insert(n);
        }
    }
    cin >> num;
    while(num--){
        int a, b;
        cin >> a >> b;
        printf("%.1lf%\n", cale(a, b));
    }
    return 0;
}
