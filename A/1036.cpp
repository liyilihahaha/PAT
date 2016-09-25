#include <iostream>
#include <string>
using namespace std;
struct stu{
    string name;
    string id;
    int score;
    char sex;
}lowest_male = {"", "", 101, 'M'}, highest_female = {"", "", -1, 'F'}, temp;
int main(){
    int n;
    cin >> n;
    while(n--){
        cin >> temp.name >> temp.sex >> temp.id >> temp.score;
        if(temp.sex == 'F'){
            if(highest_female.score < temp.score){
                highest_female = temp;
            }
        }else if(temp.sex == 'M'){
            if(lowest_male.score >= temp.score){
                lowest_male = temp;
            }
        }
    }
    if(highest_female.score == -1){
        cout << "Absent" << endl;
    }else{
        cout << highest_female.name  << " " << highest_female.id << endl;
    }
    if(lowest_male.score == 101){
        cout << "Absent" << endl;
    }else{
        cout << lowest_male.name  << " " << lowest_male.id << endl;
    }
    if(highest_female.score == -1 || lowest_male.score == 101){
        cout << "NA" << endl;
    }else{
        cout << highest_female.score - lowest_male.score << endl;
    }

    return 0;
}
