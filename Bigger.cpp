#include <iostream>
using namespace std;

template <class T,class U>
T bigger(T a,U b)
{
	return (a > b ? a:b);
}

int main()
{
	cout<<"Output"<<endl;
	int x = 120;
	double y = 19.56;
	cout<<bigger(x,y)<<endl;
	return 0;
}
