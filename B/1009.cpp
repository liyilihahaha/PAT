#include <iostream>
#include <string>
int main(){
	std::string str[100];
	int n = 0;
	while(std::cin >> str[n++]);
	for(int i = n - 2; i > 0; i--)
		std::cout << str[i] << ' ';
	std::cout << str[0] << std::endl;
	return 0;
}
