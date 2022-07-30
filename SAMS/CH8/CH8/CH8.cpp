//// P.214 LISTING 8.19 Using a const Reference to Ensure That the Calling Function Cannot Modify a Value Sent by Reference
//#include<iostream>
//using namespace std;
//
//void Square(const int& number, int& result)
//{
//	result = number * number;
//}
//
//int main()
//{
//	cout << "Enter a number you wish to square: ";
//	int number = 0;
//	cin >> number;
//
//	int square = 0;
//	Square(number, square);
//	cout << "Number input is: " << number << ", and square reslut is: " << square << endl;
//
//	return 0;
//}





//// P.212 LISTING 8.18 Function That Calculates Square Returned in a Parameter by Reference
//#include<iostream>
//using namespace std;
//
//void Square(int& number)
//{
//	number *= number;
//}
//
//int main()
//{
//	cout << "Enter a number you wish to square: ";
//	int num = 0;
//	cin >> num;
//
//	Square(num);
//	cout << "Square is:	" << num << endl;
//
//	return 0;
//}




//// P.210 LISTING 8.17 Demonstrating That References Are Aliases for Assigned Values
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int original = 30;
//	cout << "original = " << original << endl;
//	cout << "original is at address: " << hex << &original << endl;
//
//	int& ref1 = original;
//	cout << "ref1 is at address: " << hex << &ref1 << endl;
//	cout << "Value of ref1 is: " << dec << ref1 << endl;
//
//	int& ref2 = ref1;
//	cout << "ref2 is at address: " << hex << &ref2 << endl;
//	cout << "Therefore, ref2 = " << dec << ref2 << endl;
//
//	return 0;
//}



//// P.208 LISTING 8.16 Using new(nothrow), Which Returns NULL When Allocation Fails
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int* pointsToManyNums = new(nothrow) int[0xffffffff];
//
//	if (pointsToManyNums)
//	{
//		delete[] pointsToManyNums;
//	}
//	else
//		cout << "Memory allocation failed";
//	
//	return 0;
//}




//// P.205 LISTING 8.14 Safer Pointer Programming: A Correction of Listing 8.13
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	cout << "Is it sunny? (y/n)";
//	char userInput = 'y';
//	cin >> userInput;
//
//	bool* const isSunny = new bool;
//	*isSunny = true;
//
//	if (userInput == 'n' || userInput == 'N')
//	{
//		*isSunny = false;
//	}
//
//	cout << "*isSunny: " << *isSunny << endl;
//	delete isSunny;
//
//	return 0;
//}







//// P.203 LISTING 8.13 Poor Pointer Hygiene in a Program That Stores a Boolean Value Using Pointers
//#include<iostream>
//using namespace std;
//
//int main() {
//	// uninitialized pointer
//	bool* isSunny = new bool;
//
//	cout << "Is it sunny? (y/n)" << endl;
//	char userInput = 'y';
//	cin >> userInput;
//
//	if (userInput == 'y')
//	{
//		//isSunny = new bool;
//		*isSunny = true;
//	}
//
//	// isSunny contains invalid value if user enter 'n'
//	cout << "isSunny says: " << *isSunny << endl;
//
//	delete isSunny;
//
//	return 0;
//}





//// P.201 LISTING 8.12 Accessing Elements in an Array Using the Dereference Operator (*) and Using the Array Operator([]) with a Pointer
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	const int ARRAY_LEN = 5;
//
//	int myNumbers[ARRAY_LEN] = { 1001, 2, 3, 4, 5 };
//
//	int* ptr2Nums = myNumbers;
//
//	cout << "Display array using pointer syntax, operator*: *(myNumbers+i)" << endl;
//	for (int i = 0; i < ARRAY_LEN; ++i)
//	{
//		cout << "Element " << i << " = " << *(myNumbers+i) << endl;
//	}
//	
//	cout << endl;
//
//	cout << "Display array using pty with array syntax, operator[]: ptr2Nums[i]" << endl;
//	for (int i = 0; i < ARRAY_LEN; ++i)
//	{
//		cout << "Element " << i << " = " << ptr2Nums[i] << endl;
//	}
//	cout << endl;
//
//	cout << "Individual result:" << endl;
//
//	cout << "*myNumbers   = " << *myNumbers << endl;
//	cout << "myNumbers[0] = " << myNumbers[0] << endl;
//	cout << "*ptr2Nums    = " << *ptr2Nums << endl;
//	cout << "ptr2Nums[0]  = " << ptr2Nums[0] << endl;
//
//	return 0;
//}






//// P.200 LISTING 8.11 Demonstrating That the Array Variable Is a Pointer to the First Element
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	// static array of 5 integer
//	int myNumbers[5]={0};
//	
//	int* pointToNums = myNumbers;
//
//	// Display address contained in pointer
//	cout << "pointToNums =   0x" << hex << pointToNums << endl;
//
//	// Address of first element of array
//	cout << "&myNumbers[0] = 0x" << hex << &myNumbers[0] << endl;
//
//	return 0;
//}






//// P.198 LISTING 8.10 Using the const Keyword in Calculating the Area of a Circle
//#include<iostream>
//using namespace std;
//
//void CalcArea(const double* const ptrPi,
//	const double* const ptrRadius,
//	double* const ptrArea)
//{
//	// check pointers for validity before using
//	if (ptrPi && ptrRadius && ptrArea)
//		*ptrArea = (*ptrPi) * (*ptrRadius) * (*ptrRadius);
//}
//
//int main() 
//{
//	const double Pi = 3.1415;
//	cout << "Enter radius: ";
//	double radius = 0;
//	cin >> radius;
//
//	double area = 0;
//	CalcArea(&Pi, &radius, &area);
//
//	cout << "Area is: " << area << endl;
//
//	return 0;
//}


//// P.195 LISTING 8.9 Using Offset Values and Operators to Increment and Decrement Pointers
//#include<iostream>
//using namespace std;
//
//int main() 
//{
//	cout << "How many integer you wish to enter?" << endl;
//	int numEntries = 0;
//	cin >> numEntries;
//
//	int* ptr2Ints = new int[numEntries];
//
//	cout << "original value" << endl;
//	for (int i = 0; i < numEntries; ++i)
//	{
//		cout << "the " << i << " value of *ptr2Ints is " << *ptr2Ints << endl;
//	}
//
//	cout << "Allocated for integers " << endl;
//	for (int counter = 0; counter < numEntries; ++counter)
//	{
//		cout << "Enter number " << counter << ": ";
//		cin >> *(ptr2Ints + counter);
//		// Why cannot use cin >> *(ptr2Ints++); or cin >> *(++ptr2Ints);
//	}
//
//	cout << "Displaying all numbers entered: " << endl;
//	for (int i = 0; i < numEntries; ++i)
//		cout << *(ptr2Ints++) << " ";
//
//	cout << endl;
//
//	cout << "Now ptr2Ints is: 0x" << ptr2Ints << endl;
//	ptr2Ints -= numEntries;
//	cout << "After ptr2Ints -= numEntries, ptr2Ints is: 0x" << ptr2Ints << endl;
//
//	delete[] ptr2Ints;
//	
//	return 0;
//}



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