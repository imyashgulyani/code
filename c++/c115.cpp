#include <iostream>
using namespace std;
float circle(float x)
{
	return 3.14*x*x;
}
float square(float x)
{
	return x*x;
}
float rectangle(float x,float y)
{
	return x*y;
}
int main()
{
	int x,y;
	cout<<"enter value for area";
	cin>>x>>y;
	cout<<"the area of circle is "<<circle(x)<<endl;
	cout<<"the area of sqaure is "<<square(x)<<endl;
	cout<<"the area of rectangle is "<<rectangle(x,y);
}
