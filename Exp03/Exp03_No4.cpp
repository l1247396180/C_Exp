#include<iostream>
using namespace std;
void function1()
{
	float a=2.5;
	int b=31,c=3;
	a=a+b%c;
	cout<<a<<endl;
}
void function2()
{
	float a=2.5;
	int b=31,c=3;
	a+=b>c;
	cout<<a<<endl;
}
void function3()
{
	float a=2.5;
	int b=31,c=3;
	a+=(b++)+(++c);
	cout<<a<<endl;
}

int main()
{
	function1();
	function2();
	function3();
	system("pause");
	return 0;
}