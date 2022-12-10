#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
//int main() {
//	cout << fabs(-10.5) << endl;
//	cout << fabs(10.5) << endl;
//	return 0;
//}

//int main() 
//{
//	double mynumber;
//	mynumber = fabs(-23.87);
//	cout << mynumber << endl;
//	return 0;
//}

//int main() {
//	double start;
//	double finish;
//
//	start = -253.895;
//	finish = fabs(start);
//
//	cout << finish << endl;
//	return 0;
//}

//int main() {
//	double number = 10.0;
//	double exponent = 3.0;
//	cout << pow(number, exponent) << endl;
//		return 0;
//}

//int AddOne(int start)
//{
//	int newnumber;
//	newnumber = start + 1;
//	return newnumber;
//}
//int main()
//{
//	int testnumber;
//	int result;
//
//	testnumber = 20;
//	result = AddOne(testnumber);
//
//	cout << result << endl;
//	return 0;
//}

//string ConnectNames(string first, string last) 
//{
//	return first + " " + last;
//}
//int main() {
//	cout << ConnectNames("Given_Name", "Surname") << endl;
//	return 0;
//}

////Listing 4-8
//void SetUserName(string newname) 
//{
//	cout << "New user-name is " << newname << endl;
//}
//int main() {
//	SetUserName("Given_Name");
//	return 0;
//}

////Listing 4-9
//void PrintName(string first, string last);
//int main() 
//{
//	PrintName("Given_Game", "Surname");
//	return 0;
//}
//void PrintName(string first, string last)
//{
//	string fullname = first + " " + last;
//	cout << fullname << endl;
//}

////Listing 4-10: Overloading a function
//void Combine(string first, string second)
//{
//	cout << first << " " << second << endl;
//}
//
//void Combine(int first, int second)
//{
//	int sum = first + second;
//	cout << first << " + " << second << " = " << sum << endl;
//}
//
//int main()
//{
//	Combine("Given_Name", "Surname");
//	Combine(3, 5);
//	return 0;
//}

////Listing 4-11: Operating on strings (with methods?)
//int main()
//{
//	string words = "Something interesting and bizarre.";
//	cout << words << endl;
//	words.insert(10, "seriously ");
//	cout << words << endl;
//	words.erase(19, 16);
//	cout << words << endl;
//	words.replace(4, 5, "body");
//	cout << words << endl;
//	return 0;
//}

//Listing 4-12: Accessing Command-Line Parameters; get Michael's help running a terminal with this one.
int main(int argc, char* argv[])
{
	for (int index = 0; index < argc; index++)
	{
		cout << argv[index] << endl;
	}
	return 0;
}
