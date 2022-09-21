#include <iostream>
using namespace std;

int main()
{
    int row,c=1,space,i,j;
    
    cout << "Enter a Number : ";
    cin >> row;

    for(i=0;i<row;i++)
    {
        for(space=1;space<=row-i;space++)
        cout<<"  ";
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            cout<<c<<"   ";
        }
        cout<<endl;
    }
}