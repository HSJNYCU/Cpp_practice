//


//// Ex2_03.cpp
//// Sizing a pond for happy fish
//#include<iostream>
//#include<numbers>  // for pi
//#include<cmath>    // for square root
//using namespace std;
//
//int main()
//{
//	const double fish_factor{2.0/0.5};
//	const double inches_per_foot{ 12.0 };
//
//	double fish_count{}, fish_lenghth{};
//
//	cout << "Enter the number of fish you want to keep: ";
//	cin >> fish_count;
//	cout << "Enter the average fish length in inches: ";
//	cin >> fish_lenghth;
//
//	fish_lenghth /= inches_per_foot;
//	cout << '\n';
//
//	// calculate the required surface area
//	const double pond_area{ fish_count * fish_lenghth * fish_factor };
//
//	const double pond_diameter{ 2 * std::sqrt(pond_area / std::numbers::pi) };
//
//	cout << "Pond diameter required for " << fish_count << " fishes is " << pond_diameter << " feet." << endl;
//
//	
//	return 0;
//}






//// Test op=
//#include<iostream>
//#include<numbers>
//#include<cmath>
//
//int main()
//{
//	int i{2}, j{5}, k1{3}, k2{3};
//	k1 *= i + j;
//	k2 *= (i + j);
//
//	const double pi = std::numbers::pi;
//	const double rad2degree = 180 / pi;
//	const double degree2rad = pi / 180;
//	double cosine60 = std::cos(60 * degree2rad);
//
//	std::cout << "k1 - k2 = " << k1 - k2 << std::endl;
//
//	std::cout << "cos(60) = " << cosine60 << std::endl;
//
//	return 0;
//}



//// Ex2_02.cpp
//// Converting distances
//
//#include <iostream>;
//
//int main()
//{
//	unsigned int yards{}, feet{}, inches{};
//
//	std::cout << "Enter yards, feet, inches, with three values separated by spaces ";
//	std::cin >> yards >> feet >> inches;
//
//	const unsigned feet_per_yard{ 3 };
//	const unsigned inches_per_foot{ 12 };
//
//	unsigned total_inches{};
//	total_inches = inches + inches_per_foot * (yards * feet_per_yard + feet);
//	std::cout << " This distance corresponds to " << total_inches << " inches " << std::endl;
//
//
//	std::cout << "Enter a distance in inches: ";
//	std::cin >> total_inches;
//
//	feet = total_inches / inches_per_foot;
//	inches = total_inches % inches_per_foot;
//	yards = feet / feet_per_yard;
//	feet = feet % feet_per_yard;
//
//	std::cout << "This distance corresponds to " << yards << " yards "
//		<< feet << " feet " << inches << "inches." << std::endl;
//
//	return 0;
//}