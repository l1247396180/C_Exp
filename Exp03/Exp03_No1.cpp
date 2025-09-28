#include<iostream>
using namespace std;
void function1()
{
	int i=-3,k;
	float x=-2.58;
	k=(int)((int)x+(float)i);
	cout<<k<<endl;
}
void function2()
{
	int x;
	float k;
	k=(float)(x=85.58);
	cout<<k<<endl;
}
int main()
{
	function1();
	function2();
	system("pause");
	return 0;
}