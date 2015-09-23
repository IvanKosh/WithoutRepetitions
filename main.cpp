/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 23 Сентябрь 2015 г., 6:53
 */

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	string line;
	short i, l;
	char c;
	while (getline(stream, line)) {
		l = line.length();
		cout << line[0];
		c = line[0];
		for (i = 1; i < l; i++) {
			if (line[i] != c) {
				c = line[i];
				cout << c;
			}
		}
		cout << endl;
	}
	return 0;
}

