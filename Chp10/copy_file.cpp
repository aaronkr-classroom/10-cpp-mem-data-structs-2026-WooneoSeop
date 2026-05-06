// copy_file.cpp

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream infile("in.txt");
	ofstream outfile("out-again.txt");

	string s;

	while (getline(infile, s))
		outfile << s << endl;
	return 0;
}
