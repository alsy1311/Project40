#include <iostream>
#include <fstream>
#include <string>
void getLine(size_t m) {
	std::string c;
	std::fstream in;
	in.open("Source1.txt");
	std::getline(in, c);
	in.seekg((c.size() + 2) * (m-1), std::ios::beg);
	std::getline(in, c);
	std::cout << c << std::endl;
	in.close();
}
int main() {
		getLine(2);
		return 0;
	
}
