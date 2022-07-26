// CH4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//


// P70 Dynamic Arrays Listing 4.4
#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> dynArray(3); // dynamic array of int
	dynArray[0] = 365;
	dynArray[1] = -421;
	dynArray[2] = 789;
	cout << "Number of integers in array: " << dynArray.size() << endl;

	cout << "Enter another element to insert" << endl;
	int newValue = 0;
	cin >> newValue;
	dynArray.push_back(newValue);

	cout << "Number of integers in array: " << dynArray.size() << endl;
	cout << "Last element in array: ";
	cout << dynArray[dynArray.size() - 1] << endl;
	return 0;
}





//// P69 3 dimension array
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int threeDim[3][3] = { {1,2,3}, {4,5,6},{7,8,9} };
//	cout << "Row 0: " << threeDim[0][0] << " " << threeDim[0][1] << " " << threeDim[0][2] << endl;
//
//	return 0;
//}


