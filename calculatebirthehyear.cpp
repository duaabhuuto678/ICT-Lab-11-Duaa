#include<iostream>
using namespace std;
//function decalaration
int BirthYear(int currentYear,int age);
int main()
{
	string name;
	int age;
	int currentYear=2026;
	cout<<"Enter your name:"<<endl;
	cin>>name;
	cout<<"Enter your age:"<<endl;
	cin>>age;
	int birthYear=BirthYear(currentYear,age);
	cout<<"name:"<<name<<"Your were born in:"<<birthYear;
	return 0;
}
//function defination
int BirthYear(int urrentyear,int age){
	return currentYear-age;
}
