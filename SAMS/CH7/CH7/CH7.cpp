// P.168 LISTING 7.9 Fetching the Area of a Circle as a Reference Parameter and Not as a Return Value
#include<iostream>
using namespace std;

const double Pi = 3.1415926;

void Area(double radius, double& result)
{
	result = Pi * radius * radius;
}

int main()
{
	cout << "Enter radius: ";

}






//// Passing an Array of Values to a Function
//// P.166 LISTING 7.8 Function That Takes an Array as a Parameter
//#include<iostream>
//using namespace std;
//
//void DisplayArray(int numbers[], int length)
//{
//	for (int index = 0; index < length; ++index)
//		cout << numbers[index] << " ";
//
//	cout << endl;
//}
//
//void DisplayArray(char characters[], int length)
//{
//	for (int index = 0; index < length; ++index)
//		cout << characters[index] << " ";
//
//	cout << endl;
//}
//
//int main() {
//	int myNums[4] = { 1, 2, 3, 4 };
//	DisplayArray(myNums, 4);
//
//	char myStatement[7] = { 'A', 'P', 'K', 'R', 'l', '!', '\0'};
//	DisplayArray(myStatement, 7);
//
//	return 0;
//}






//// P.164 LISTING 7.7 Using an Overloaded Function to Calculate the Area of a Circle or a Cylinder
//#include <iostream>
//using namespace std;
//
//const double pi = 3.1415926;
//
//double Area(double radius);  // for circle
//double Area(double radius, double height); // for cylinder
//
//int main()
//{
//    cout << "Enter z for cylinder, c for Circle:";
//    char userSelection = 'z';
//    cin >> userSelection;
//
//    cout << "Enter radius: ";
//    double radius = 0;
//    cin >> radius;
//
//    if (userSelection == 'z')
//    {
//        cout << "Enter height";
//        double height = 0;
//        cin >> height;
//
//        cout << "Area of cylinder is: " << Area(radius, height) << endl;
//    }
//    else
//    {
//        cout << "Area of circle is: " << Area(radius) << endl;
//    }
//
//    return 0;
//}
//
//
//double Area(double radius)
//{
//    return pi * radius * radius;
//}
//
//double Area(double radius, double height)
//{
//    return 2 * Area(radius) + 2 * pi * radius * height;
//}

