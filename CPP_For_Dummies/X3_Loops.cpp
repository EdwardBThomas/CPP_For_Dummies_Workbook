#include <iostream>
using namespace std;
//int main()
//{
//	int x = 0;
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		x += i;
//	}
//	cout << x << endl;
//	return 0;
//}

//int main()
//{
//	int i;
//	for (i = 10; i >= 5; i--)
//	{
//		cout << i << endl;
//	}
//	return 0;
//}

//int main()
//{
//	double x = 0.0;
//	double i;
//	for (i = 0.00; i <= 100.0; i += 0.1)
//	{
//		x += i;
//	}
//	cout << x << endl;
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		cout << i << endl;
//		i++;
//	}
//	cout << "Done." << endl;
//	return 0;
//}

//int main() {
//	int i = 0;
//	do {
//		cout << i << endl;
//		i++;
//	} while (i <= 10);
//	cout << "Done." << endl;
//	return 0;
//}

//int main() 
//{
//	int i;
//	for (i = 0; i < 10; i++) 
//	{
//		cout << i << " ";
//		if (i == 5) 
//		{
//			break;
//		}
//		cout << i * 2 << endl;
//	}
//	cout << "Done." << endl;
//	return 0;
//}

//int main() 
//{
//	int i;
//	for (i = 0; i < 10; i++) 
//	{
//		cout << i << " ";
//		if (i == 5) 
//		{
//			cout << endl;
//			continue;
//		}
//		cout << i * 2 << endl;
//	}
//	cout << "Done." << endl;
//	return 0;
//}

//int main() 
//{
//	int x, y;
//	for (x = 1; x <= 10; x++) 
//	{
//		cout << "Products of " << x << endl;
//		for (y = 1; y <= 10; y++) 
//		{
//			cout << x * y << endl;
//		}
//		cout << endl;
//	}
//	return 0;
//}

int main() 
{
	int x, y, z;
	for (x = 1; x <= 3; x++) 
	{
		for (y = 1; y < 3; y++) {
			if (y == 2)
				break;
			for (z = 1; z < 3; z++) 
			{
				cout << x << " " << y;
				cout << " " << z << endl;
			}
		}
	}
	return 0;
}