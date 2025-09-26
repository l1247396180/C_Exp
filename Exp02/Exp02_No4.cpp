#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;

void printAlignedFloats(vector <double> nums,int decimalPlaces=0)
{
	int maxWidth=0;
	for(double num:nums)
		maxWidth=max(maxWidth,snprintf(nullptr,0,"%f",num));
	if(decimalPlaces==0)
	{
		for(double num:nums)
		{
			num-=(int)num;
			int places=0;
			while(num!=0)
			{
				num*=10;
				num-=(int)num;
				places++;
			}
			decimalPlaces=max(decimalPlaces,places);
		}
	}
	cout<<"Decimal places: "<<decimalPlaces<<endl;
	cout<<"Max width: "<<maxWidth<<endl;
	for(double num:nums)
		printf("%*.*lf\n",maxWidth,decimalPlaces,num);
}

int main()
{
	int a=2,b=52,c=132;
	printf("%2d %2d %2d\n",a,b,c);
	double x=-1.2,y=23.58,z=123.456;
	cout<<x<<" "<<y<<" "<<z<<endl;
	printAlignedFloats(vector <double>{ x,y,z });
	//printf("%7.3lf\n%3.1lf\n%3.2lf\n%3.3lf\n",x,y,z);
	system("pause");
	return 0;
}