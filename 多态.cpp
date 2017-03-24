#include<iostream>
using namespace std;
class mobile
{
public:
	char mynimber[11];
	void showstd()
	{
		cout << "---unclear---";
	}
};
class a:public mobile
{
public:
	void showstd()
	{
		cout << "---44---";
	}
};
class b :public mobile
{
public:
	void showstd()
	{
		cout << "---66---";
	}
};
void main()
{
	mobile *p;
	a m;
	b n;
	p = &m;
	p->showstd();
	p = &n;
	p->showstd();
}