#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	string line;
    if (source.is_open() && dest.is_open()) {
        dest << "-------------------- BOOM ---------------------" << std::endl;

        while (getline(source, line)) {
            dest << line << std::endl;
        }

        dest << "-------------------- HA!! ---------------------" << std::endl;
    } else {
        std::cout << "Unable to open file";
    }

    source.close();
    dest.close();
	return 0;
}
