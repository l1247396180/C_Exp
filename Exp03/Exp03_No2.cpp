#include<iostream>
using namespace std;
void function1()
{
	float a=0.123456789,b=0.000000123;
	float c=a+b;
	printf("float: %.9f\n",c);
}
void function2()
{
	double a=0.123456789,b=0.000000123;
	double c=a+b;
	printf("double: %.9lf\n",c);
}
int main()
{
	function1();
	function2();
	system("pause");
	return 0;
}