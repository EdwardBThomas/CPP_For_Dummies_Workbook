#include <iostream>
#include <sstream>
using namespace std;

////Listing 6-1: Using the & character to take the address of a variable
//int main()
//{
//	int Arbitrary_Integer = 47; //Just make a variable from an integer. Any integer.
//	cout << &Arbitrary_Integer << endl; //Print where exactly in the machine's memory the integer is stored.
//	int *Pointer; //Create a *pointer to an integer* pointer variable.
//	Pointer = &Arbitrary_Integer; //Assign an address to the pointer variable.
//	cout << Pointer << endl;
//	return 0;
//}

////Listing 6-2:Modify the original variable with a pointer variable
//int main()
//{
//	int arbitrary_integer = 47;
//	int* pointer;
//	pointer = &arbitrary_integer;
//	*pointer = 53;
//	cout << arbitrary_integer << endl;
//	return 0;
//}

////Listing 6-3: Accessing a value through a pointer
//int main()
//{
//	int arbitrary_integer = 47;
//	int *pointer = &arbitrary_integer;
//	int SaveForLater;
//	*pointer = 53;
//	SaveForLater = *pointer; //set a normal variable to equal the pointer variable
//	cout << SaveForLater << endl;
//	*pointer = 57; //change the value at the pointer variable
//	cout << *pointer << endl;
//	cout << SaveForLater << endl;
//	return 0;
//}

////Listing 6-4 & -5: Pointing to a string with pointers
//int main()
//{
//	string good_film;
//	string *pointer_string;
//	good_film = "Lawrence of Arabia";
//	pointer_string = &good_film;
//	cout << *pointer_string << endl;
//	*pointer_string = "El Cid";
//	cout << *pointer_string << endl;
//	for (unsigned i = 0; i < good_film.length(); i++)
//	{
//		cout << (*pointer_string)[i] << endl;
//	}
//
//	return 0;
//}

////Listing 6-6: Using pointers to point to something else and back again
//int main()
//{
//	int high_number;
//	int low_number;
//	int* number_pointer;
//
//	number_pointer = &high_number;
//	*number_pointer = 13;
//	cout << *number_pointer << endl;
//
//	number_pointer = &low_number;
//	*number_pointer = 7;
//}

////Listing 6-7: Allocating memory on the heap with the new operator
//int main()
//{
//	int* ptr = new int;
//	*ptr = 10;
//	cout << *ptr << endl;
//	return 0;
//}

////Listing 6-8: Putting a value in parentheses to initialize memory that you allocate
//int main()
//{
//	int* ptr = new int(10);
//	cout << *ptr << endl;
//	cout << &ptr << endl; //Decided to try looking up where in the heap the above variable was randomly assigned...
//	return 0;
//}

////Listing 6-9: Using the New operator with strings
//int main()
//{
//	string* phrase = new string;
//	*phrase = "Cast in the name of God...";
//	cout << *phrase << endl;
//	return 0;
//}

////Listing 6-10: Using the delte command to clean up pointers
//int main()
//{
//	string* phrase = new string("Cast in the name of God...");
//	cout << *phrase << endl;
//	(*phrase)[20] = 'g';
//	phrase->replace(21, 3, "ood");
//	cout << *phrase << endl;
//
//	delete phrase;
//	return 0;
//}

////Listing 6-11: Functions cannot change original variables passed into them
//void ChangesAreGood(int myparam)
//{
//	myparam += 10;
//	cout << "inside the function:" << endl;
//	cout << myparam << endl;
//}
////Only the value of the variable went into the function--not the variable itself. The variable remains untouched by the function.
//int main()
//{
//	int mynumber = 30;
//	cout << "before the function:" << endl;
//	cout << mynumber << endl;
//
//	ChangesAreGood(mynumber);
//	cout << "after the function:" << endl;
//	cout << mynumber << endl;
//	return 0;
//}

////Listing 6-12; Using Pointers to modify a variable passed into a function:
//void ChangesAreGood(int* myparam)
//{
//	(*myparam) += 10;
//	cout << "inside the function:" << endl;
//	cout << (*myparam) << endl;
//}
//
//int main()
//{
//	int mynumber = 30;
//	cout << "before the function:" << endl;
//	cout << mynumber << endl;
//
//	ChangesAreGood(&mynumber);
//	cout<< "after the function:" << endl;
//	cout<< mynumber <<endl;
//	return 0;
//}

////Listing 6-13; Using a function to modify a string passed into it by using pointers
//void Paranoid(string* realmessage)
//{
//	(*realmessage)[6] = 'i';
//	realmessage->replace(9, 1, "");
//	realmessage->insert(18, "ad");
//	realmessage->replace(15, 2, "in");
//	realmessage->replace(23, 7, "!");
//	realmessage->replace(4, 3, "ali");
//}
//
//int main()
//{
//	string message = "The friends are having dinner";
//	cout << message << endl;
//
//	Paranoid(&message);
//	cout << message << endl;
//	return 0;
//}

////Listing 6-14; Returning a pointer from a string involves using an asterisk in the return type
//string* GetSecretCode()
//{
//	string* code = new string;
//	code->append("CR");
//	
//	int randomnumber = rand();
//	ostringstream converter;
//	converter << randomnumber;
//
//	code->append(converter.str());
//	code->append("NQ");
//
//	return code;
//}
//
//int main()
//{
//	string *newcode;
//	int index;
//
//	for (index = 0; index < 10; index++)
//	{
//		newcode = GetSecretCode();
//		cout << *newcode << endl;
//	}
//	return 0;
//}

////Listing 6-15; Dereferencing your return value immediately so you don't need to use it as a pointer
//string* GetNotSoSecretCode()
//{
//	string* code = new string("ABCDEF");
//	return code;
//}
//
//int main()
//{
//	string newcode;
//	int index;
//
//	for (index = 0; index < 10; index++)
//	{
//		newcode = *GetNotSoSecretCode();
//		cout << newcode << endl;
//	}
//	return 0;
//}

//Listing 6-16; With references, you don't need pointers
void MessMeUp(int& myparam)
{
	myparam = myparam * 2 + 10;
}

int main()
{
	int mynumber = 30;
	MessMeUp(mynumber);
	cout << mynumber << endl;
	return 0;
}
