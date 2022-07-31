//// P.233 LISTING 9.5 A Class with Overloaded Constructors and No Default Constructor
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Human
//{
//private:
//	string name;
//	int age;
//
//public:
//	Human(string humansName, int humansAge)
//	{
//		name = humansName;
//		age = humansAge;
//		cout << "Overloaded constructor creates	" << name;
//		cout << " of age " << age << endl;
//	}
//
//	void IntroduceSelf()
//	{
//		cout << "I am " << name << " and am " << age << " years old" << endl;
//	}
//};
//
//int main()
//{
//	Human firstMan("Adam", 25);
//	Human firstWoman("Eve", 28);
//
//	firstMan.IntroduceSelf();
//	firstWoman.IntroduceSelf();
//
//	return 0;
//}





//// P.231 LISTING 9.4 A Human Class with Multiple Constructors(Overloading Constructors)
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Human
//{
//private:
//	string name;
//	int age;
//
//public:
//	Human() // default constructor
//	{
//		age = 0;
//		cout << "Default constructor: name and age not set" << endl;
//	}
//
//	Human(string humansName, int humansAge) // overloaded
//	{
//		name = humansName;
//		age = humansAge;
//		cout << "Overloaded constructor creates";
//		cout << name << " of " << age << " years" << endl;
//	}
//
//};
//
//int main()
//{
//	Human firstMan;   // use default constructor
//	Human firstWoman("Eve", 20); // use overloaded constructor
//
//	return 0;
//}





//// P.229 LISTING 9.3 Using Constructors to Initialize Class Member Variables
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Human
//{
//private:
//	string name;
//	int age;
//
//public:
//	Human() // constructor
//	{
//		age = 1; // initialization
//		cout << "constructed an instance of class Human " << endl;
//	}
//
//	void SetName(string humansName)
//	{
//		name = humansName;
//	}
//
//	void SetAge(int humansAge)
//	{
//		age = humansAge;
//	}
//
//	void IntroSelf()
//	{
//		cout << "I am " + name << " and am " << age << " years old" << endl;
//	}
//
//};
//
//int main()
//{
//	Human firstWoman;
//	firstWoman.SetName("Eve");
//	firstWoman.SetAge(28);
//
//	firstWoman.IntroSelf();
//
//	return 0;
//}








//// P.226 LISTING 9.2 A Model of the Class Human Where the True age Is Abstracted from the User, and a Younger age Is Reported
//#include<iostream>
//using namespace std;
//
//class Human
//{
//private:
//	//private member data:
//	int age;
//
//public:
//	void SetAge(int inputAge)
//	{
//		age = inputAge;
//	}
//
//	// Lies age
//	int GetAge()
//	{
//		if (age > 30)
//			return (age - 2);
//		else
//			return age;
//	}
//
//};
//
//int main()
//{
//	Human firstMan;
//	firstMan.SetAge(35);
//
//	Human firstWoman;
//	firstWoman.SetAge(22);
//
//	cout << "Age of first man: " << firstMan.GetAge() << endl;
//	cout << "Age of first woman: " << firstWoman.GetAge() << endl;
//
//	return 0;
//}






//// P.223 LISTING 9.1 A Compile-Worthy Class Human
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Human
//{
//public:
//	string name;
//	int age;
//
//	void IntroduceSelf()
//	{
//		cout << "I am " + name << " and am ";
//		cout << age << " years old" << endl;
//	}
//};
//
//int main()
//{
//	// An object "Adam"
//	Human firstMan;
//	firstMan.name = "Adam";
//	firstMan.age = 30;
//
//	Human firstWoman;
//	firstWoman.name = "Eve";
//	firstWoman.age = 28;
//
//	firstMan.IntroduceSelf();
//	firstWoman.IntroduceSelf();
//
//	return 0;
//}

