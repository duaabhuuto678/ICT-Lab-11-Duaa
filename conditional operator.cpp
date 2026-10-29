////Write a C++ program that takes two integers from the user and uses the conditional operator ?: to find the greater number.
////#include<iostream>
////using namespace std;
////int mai ()
////{
////	int a,b;
////	cout<<"Enter the value of a="<<endl;
////	cin>>a;
////    cout<<"Enter the value of b="<<endl;
////	cin>>b;
////	cout<<((a<b)?a:b);
////	return 0;
////}
////Write a C++ program that takes one integer from the user and uses the conditional operator to check whether the number is even or odd.
////#include<iostream>
////using namespace std;
////int main()
////{
////		int a;
////	cout<<"Enter the value of a="<<endl;
////cin>>a;
////cout<<((a%2==0)? "a is even":"a is odd");
////return 0;
////}
////Write a C++ program that takes three integers from the user and uses the conditional operator to find the largest number.
//#include<iostream>
//using namespace std;
//int main()
////{
////	int a,b,c;
////	cout<<"Enter the value of a="<<endl;
////cin>>a;
////cout<<"Enter the value of b="<<endl;
////cin>>b;
////cout<<"Enter the value of c="<<endl;
////cin>>c;
////cout<<(a>b?(a>c?a:c):(b>c?b:c));
////return 0;
////	
////}
////{
////	cout<<"size of int datatype:"<<sizeof(int)<<endl;
////return 0;
////}
////{
////	int a;
////	float pie=3.141,Area;
////	cout<<"Enter the values of radius="<<endl;
////	cin>>a;
////	Area=pie*a*a;
////	cout<<"The radius of circle="<<Area<<endl;
////	return 0;
////}
//{
//	int a;
//	cout<<"Enter the value of a="<<endl;
//	cin>>a;
//	cout<<((a<0)?"number is negatibe":"number is positive");
//	return 0;
//}
//	
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int days, years, months, remainingDays;
//
//    cout << "Enter number of days: ";
//    cin >> days;
//
//    years = days / 365;
//    days = days % 365;
//
//    months = days / 30;
//    remainingDays = days % 30;
//
//    cout << years << " years " << months << " months " << remainingDays << " days";
//
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	float celcius, farhenite;
//	cout<<"enter the value in celcius="<<endl;
//	cin>>celcius;
//	farhenite=(celcius*9/5)+32;
//	cout<<"Temapertaure convert into Frahenite="<<farhenite;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a;
//	cout<<"Enter the value of a="<<endl;
//	cin>>a;
//	cout<<((a<0)?"the number is negative":"the number is positive");
//	return 0;
//}
#include<iostream>
using namespace std;
int main(){
	int totalDays,years,days,months;
	cout<<"Enter the Total days:"<<endl;
	cin>>totalDays;
	years=totalDays/365;
	months=totalDays/31;
	days=months%days;
	cout<<" years="<<years<<" months="<<months<<"days"<<days<<endl;
	return 0;
}
