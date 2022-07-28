// P.136 LISTING 6.12 Using a Range-Based for Loop over Arrays and a std::string



//// P.134 LISTING 6.11 Using a for Loop Without a Loop Expression to Repeat Calculations on User Request
//#include<iostream>
//using namespace std;
//
//int main() {
//	for (char userSelection = 'm'; (userSelection != 'x');) {
//        cout << "Enter two integers: " << endl;
//        int num1, num2;
//        cin >> num1;
//        cin >> num2;
//
//        cout << num1 << "x" << num2 << " = " << num1 * num2 << endl;
//        cout << num1 << "+" << num2 << " = " << num1 + num2 << endl;
//
//        cout << "Press x to exit or any key for recalculate." << endl;
//        cin >> userSelection;
//	}
//    return 0;
//}






//// P.132 LISTING 6.10 Using for Loops to Enter Elements in a Static Array and Display the Contents of the Array
//#include<iostream>
//using namespace std;
//
//int main() {
//	const int ARRAY_LENGTH = 5;
//	int myNums[ARRAY_LENGTH] = { 0 };
//
//	cout << "Populate array of " << ARRAY_LENGTH << " integers " << endl;
//
//	for (int counter = 0; counter < ARRAY_LENGTH; counter++) {
//		cout << "Enter an integer for element " << counter << ": ";
//		cin >> myNums[counter];
//	}
//
//	cout << "Displaying contents of the array" << endl;
//	
//	for (int counter = 0; counter < ARRAY_LENGTH; counter++) {
//		cout << "Element " << counter << " = " << myNums[counter] << endl;
//	}
//
//	return 0;
//}









//// P.131 LISTING 6.9 Using do...while to Repeat Execution of a Block of Code
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    char userSelection = 'x';
//    do
//    {
//        cout << "Enter two integers: " << endl;
//        int num1, num2;
//        cin >> num1;
//        cin >> num2;
//
//        cout << num1 << "x" << num2 << " = " << num1 * num2 << endl;
//        cout << num1 << "+" << num2 << " = " << num1 + num2 << endl;
//
//        cout << "Press x to exit or any key for recalculate." << endl;
//        cin >> userSelection;
//    } while (userSelection != 'x');
//
//    cout << "GoodBye!!" << endl;
//    return 0;
//}

