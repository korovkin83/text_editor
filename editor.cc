#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void help() {
	cout << "HELP: \n";
	cout << "Create file: \n 1) cmd = create 2) path = <dir file + file.txt> 3) text in file \n";
	cout << "Open file: \n 1) cmd = open 2) path <dir file + file.txt> \n";
}

int main() {
	string cmd;
	cout << "CMD: ";
	getline(cin, cmd);

if (cmd == "create") {

	cout << "PATH: ";
	string path;
	getline(cin, path);
	cout << "TEXT: ";
	string text;
	getline(cin, text);
		ofstream fout(path);
		fout << text;
		fout.close(); 

	
} else if (cmd == "open") {

	cout << "PATH: ";
	string path;
	getline(cin, path);
    	string line;
    	ifstream in(path);
    	if (in.is_open()) {
        	while (getline(in, line)) {
            		cout << line;
        	}
    	}
    	in.close(); 	
} else if(cmd == "help") {
	help();

} else {
	help();
}

return 0;
}
