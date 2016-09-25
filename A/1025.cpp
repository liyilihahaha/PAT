#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
struct stu{
    string ID;
    int local;
    int score;
    int localRank;
}student[310000];
int cmp(stu a, stu b){
    return a.score > b.score;
}
int main(){
    int N;
    cin >> N;
    for(int i = 0; i <= N; i++){
        int localNum, j = i, rank = 1;
        cin >> localNum;
        for(; j < localNum + i; j++){
            cin >> student[j].ID >> student[j].score;
            student[j].local = i + 1;
        }
        sort(student + i, student + j, cmp);
        student[]
        for(int k = i; k < localNum + i; k++){
            if(student[i] !)
        }
    }
    return 0;
}
