#include <iostream>
using namespace std;
void input(int a[][3]);
void addition(int a[][3]);
void display(int a[][3]);
int main()
{
    int a[3][3],b[3][3],c[3][3];
    cout<<"Enter value in first matrix  : ";
    input(a);

    addition(a);
    display(a);
}
void input(int a[][3])
{
    int i,j;
    cout<<"enter value in first matrix";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
}
void addition(int a[][3])
{
    int i,j;
    int sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i+j<3)
            {
                sum=sum+a[i][j];
            }
        }
    }
    cout<<"sum is="<<sum;
}
void display(int a[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}