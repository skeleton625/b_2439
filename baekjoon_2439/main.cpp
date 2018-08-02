#include <iostream>
using namespace std;

int main()
{
	int l;
	cin >> l;
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < l - i-1; j++) cout << " ";
		for (int j = 0; j <= i; j++) cout << "*";
		cout << endl;
	}
	return 0;
}