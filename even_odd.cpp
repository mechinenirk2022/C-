#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<< "give a number:";
	cin>>a;
	if(a%2==0)
		cout<< a <<" is an even number"<<endl;
	else 
		cout<< a <<" is a odd number"<<endl;
	return 0;
}