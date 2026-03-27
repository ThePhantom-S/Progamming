#include<iostream>

int main(){
	std::string name;
	std::cout << "Hello World!" << '\n';		//basic output.
	std::cout << "What is your name ? \n";
	std::getline(std::cin,name);
	std::cout << "Hi, " << name << " Hope you are having good day.\n";
	return 0;
}
