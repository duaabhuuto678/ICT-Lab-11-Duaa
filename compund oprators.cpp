#include<iostream>
using namespace std;
int main()
{

/*{
	int a=7;
	a+=1;
	cout<<a<<endl;
	a-=1;
	cout<<a<<endl;
	int a; int b=3;
	a=b;
	a+=2;
	cout<<"sum is:"<<a;
	return 0;
}*/
int firstno;
int secondno;
cout<<"Enter first number:";
cin>>firstno;
cout<<"Enter second number:";
cin>>secondno;
(firstno>secondno)?cout<<"first number is greater":cout<<"second number is greater";
return 0;
}