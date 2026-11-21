#include <iostream>
using namespace std;
int main()
{
	char grades;
	cout<<"enter grades";
	cin>>grades;
	switch(grades){
	case 'A':
		cout<<"grade A";
		break;
	case 'B':
		cout<<"grade B";
		break;
	case 'C':
		cout<<"grade C";
		break;
	case 'D':
		cout<<"grade D";
		break;
	case 'F':
		cout<<"grade F";
		break;
	default:
		cout<<"invalid grade";
    }
}
