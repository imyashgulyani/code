#include <iostream>
using namespace std;
int main() {
    int a[100],b,sum=0,c;
    do{
        cout<<"enter numbers";
        cin>>a[100];
        if(a[100]>0)
        {
        	sum=sum+a[100];
		}
        cout<<"do you want to exit";
        cout<<"enter 1 if you want to exit and 0 if you want to continue";
        cin>>b;
        if(b==1)
        {
            c=1;
        }
        else
        {
            c=0;
        }
    }while(c==0);
    cout<<"sum is "<<sum;
}
