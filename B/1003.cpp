#include <iostream>
using namespace std;
struct stu{
    char name[20];
    char ID[20];
    int score;
}temp, maxstu = {"\0", "\0", -1}, minstu= {"\0", "\0", 101};
int main(){
    int n;
    cin >> n;
    while(n--){
        cin >> temp.name >> temp.ID >> temp.score;
        if(temp.score > maxstu.score) maxstu = temp;
        if(temp.score < minstu.score) minstu = temp;
    }
    cout << maxstu.name << " " << maxstu.ID << endl
         << minstu.name << " " << minstu.ID << endl;
    return 0;
}
