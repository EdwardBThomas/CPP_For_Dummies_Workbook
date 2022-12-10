#include <iostream>
using namespace std;
int main() {
	int i;
	cout << "Type a number: ";
	cin >> i;
	if (i > 10) 
	{
		cout << "Greater than ten." << endl;
	}
	else if (i == 10)
	{
		cout << "Equal to ten." << endl;
	}
	else
	{
		cout << "Less than ten." << endl;
	}
	return 0;
}