#include <iostream>
using namespace std;
int main(){
  	int n, count = 0;
  	cin >> n;
  	while(n != 1){
          if(n % 2 == 0) n = n / 2;
          else n = (n * 3 + 1) / 2;
          count++;
  	}
  	cout << count << endl;
	return 0;
}