#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int FindW(char* fileame, char ch);
void Print(char* filename);

int main() {

	char filename[60];
	cout << "enter file name ";
	cin.getline(filename, sizeof(filename));

	Print(filename);

	int k = FindW(filename, 'b');
	cout << "amount of words begining 'b': \n" << k;

	return 0;
}

int FindW(char* filename, char ch) {
	int k = 0;
	size_t pos = 0;
	ifstream f(filename);
	string x;
	if (!f)
	{
		cerr << "file \"f.txt\" not found" << endl;
		return 1;
	}

	while (f >> x) {
		if (x[0] == 'b') {
			pos++;
			k++;
		}
	}

	return k;
}
void Print(char* filename)
{
	ifstream f(filename);
	string x;
	while (f >> x)
		cout << x << ' ';
	cout << endl << endl;
}