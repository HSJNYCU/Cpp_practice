// P.195 LISTING 8.9 Using Offset Values and Operators to Increment and Decrement Pointers
#include<iostream>
using namespace std;

int main() 
{
	cout << "How many integer you wish to enter?" << endl;
	int numEntries = 0;
	cin >> numEntries;

	int* ptr2Ints = new int[numEntries];

	cout << "Allocated for integers " << endl;
	for (int counter = 0; counter < numEntries; ++counter)
	{
		cout << "Enter number " << counter << ": ";
		cin >> *(ptr2Ints + counter);
		// Why cannot use cin >> *(ptr2Ints++); or cin >> *(++ptr2Ints);
	}

	cout << "Displaying all numbers entered: " << endl;
	for (int i = 0; i < numEntries; ++i)
		cout << *(ptr2Ints++) << " ";

	cout << endl;

	cout << "Now ptr2Ints is: 0x" << ptr2Ints << endl;
	ptr2Ints -= numEntries;
	cout << "After ptr2Ints -= numEntries, ptr2Ints is: 0x" << ptr2Ints << endl;

	delete[] ptr2Ints;
	
	return 0;
}



//// P.195 My pointer increment test
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int val = 0;
//	int* ptr = &val;
//	cout << "Address of val is   0x" << ptr << endl;
//	int* pp_ptr = ++ptr;
//	int* ptr_pp = ptr++;
//	cout << "Address of ++ptr is 0x" << pp_ptr << endl;
//	cout << "Address of ptr++ is 0x" << ptr_pp << endl;
//	cout << "The size of integer is: " << sizeof(int) << endl;
//
//	return 0;
//}



//// P.193 LISTING 8.8 Allocating Memory Using new[...] and Releasing It Using delete[]
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	cout << "How many integers shall I reserve memory for?" << endl;
//	int numEntries = 0;
//	cin >> numEntries;
//
//	int* myNumbers = new int[numEntries];
//	
//	cout << "Memory allocated at :0x" << myNumbers << hex << endl;
//
//	delete [] myNumbers;
//
//	return 0;
//}





//// review the different method for using pointer
//// 自行練習
//#include<iostream>
//using namespace std;
//
//int main() {
//	int num1 = 0;
//
//	int* ptr1 = &num1;
//	int* ptr2 = new int;
//
//	cout << "The address of ptr1 is 0x" << hex << ptr1 << endl;
//	cout << "The address of ptr2 is 0x" << hex << ptr2 << endl;
//
//	cout << "Assign value to ptr1 and ptr2 respectively: " << endl;
//	cin >> *ptr1;
//	cin >> *ptr2;
//
//	cout << "Now the value of *ptr1 is: " << dec << *ptr1 << endl;
//	cout << "and the value of *ptr2 is: " << dec << *ptr2 << endl;
//
//	delete ptr2;
//
//	return 0;
//}






//// LISTING 8.7 Accessing Memory Allocated Using new via the * Operator and Releasing It Using delete
//#include<iostream>
//using namespace std;
//
//int main() {
//	// request for memory space 
//	int* ptr2age = new int;
//
//	// use the allocated memory
//	cout << "Enter your dog's age: ";
//	cin >> *ptr2age;
//
//	// use indirection operator* to access value
//	cout << "Age(*ptr2age) = " << *ptr2age << " is stored at 0x" << hex << ptr2age << endl;
//
//	delete ptr2age;
//	
//	return 0;
//}








//// P.187 LISTING 8.5 Manipulating Data Using a Pointer and the Dereference Operator (*)
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int dogsAge = 0;
//	int* ptr2age = &dogsAge;
//	cout << "Please input dog's age: " << endl;
//	cin >> *ptr2age;
//
//	cout << "Now the dog's age is: " << *ptr2age << endl;
//
//	return 0;
//}







//// P.183 LISTING 8.2 Demonstrating the Declaration and Initialization of a Pointer
//// P.184 LISTING 8.3 Pointer Reassignment to Another Variable
//// P.185 LISTING 8.4 Demonstrating the Use of the Dereference Operator (*) to Access Integer Values
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int age = 30;
//	int* ptr = &age;
//
//	cout << "ptr = 0x" << hex << ptr << endl;
//	cout << "ptr = 0x" << ptr << endl;
//	cout << "*ptr = age = " << dec << *ptr << endl;
//	
//	cout << endl;
//
//	int dogsAge = 10;
//	ptr = &dogsAge;
//	cout << "Now ptr point to dog's age, the memory address is: 0x" << hex << ptr << endl;
//	cout << "dogsAge = *ptr = " << dec << *ptr << endl;
//
//	return 0;
//}






//// P.181 LISTING 8.1 Determining the Addresses of an int and a double
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int age = 30;
//	const double Pi = 3.1415;
//
//	cout << "&age = 0x" << &age << endl;
//	cout << "&Pi  = 0x" << &Pi << endl;
//
//	return 0;
//}