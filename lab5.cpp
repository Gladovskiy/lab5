#include<iostream>
using namespace std;
 int main()
{
int k;
 int equals;
 int number;
 cout<<"enter factorial number"<<endl;
 cin>>number ;
 equals=1;
 for(k=1;k<=number ;k++)
{
 equals=equals*k;
}
 cout<<" factorial equals="<<equals<<endl;
 return 0;
}

