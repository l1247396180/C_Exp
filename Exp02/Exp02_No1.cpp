#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b;
	double x,y,z;
	char c1,c2;
	scanf("%d%d %c %c%lf%lf%lf",&a,&b,&c1,&c2,&x,&y,&z);
	printf("a=%d,b=%d,c1=%c,c2=%c,x=%.1lf,y=%.2lf,z=%.1lf\n",a,b,c1,c2,x,y,z);
	system("pause");
	return 0;
}