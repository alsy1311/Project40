#include <iostream>
#include <fstream>
#include <string>
void getLine(int n, int m){
	std::string c;
	std::fstream in;
	in.open("Source1.txt");
	in.seekg(n*m, std::ios::beg);
	std::getline(in, c);
	std::cout << c ;
	in.close();

}
int main() {
	getLine(5, 3);
}