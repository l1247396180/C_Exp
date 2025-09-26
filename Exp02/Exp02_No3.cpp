#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

	cin.ignore();// 清除缓冲区的回车符

	cin>>a>>b>>c>>d;
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	system("pause");
	return 0;
}
//{
//	char a,b,c,d;
//	scanf("%c%c%c%c",&a,&b,&c,&d);
//	printf("%c %c %c %c\n",a,b,c,d);
//
//	fflush(stdin);// 没用
//
//	scanf("%c",&a);// 会读入上次输入的回车符
//	scanf("%c",&b);// 导致之后的输入错位
//	scanf("%c",&c);// 评价：不如cin,cout
//	scanf("%c",&d);
//	printf("%c %c %c %c\n",a,b,c,d);
//	printf("%d %d %d %d\n",a,b,c,d);
//	system("pause");
//	return 0;
//}