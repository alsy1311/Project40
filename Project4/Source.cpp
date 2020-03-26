#include <iostream>
#include <fstream>
#include <string>
void main(){
	std::string c;
	std::fstream in;
	in.open("Source1.txt");
	in.seekg(3*5, std::ios::beg);
	std::getline(in, c);
	std::cout << c ;
	in.close();
}