#include<iostream>
using namespace std;
class gopal{
public:
	void function(int x,int y)
	{
		cout<<"addition="<<x+y<<endl;
	}
	void function(char x,char y)
	{
		cout<<"Given charecters:"<<" "<<x<<" "<<y<<endl;
	}
};
int main()
{
	gopal obj;
	int a;
	int b;
	char ch;
	char ch1;
	cout<<"enter a value:";
	cin>>a;
	cout<<"enter b value:";
	cin>>b;
	cout<<"enter 1st charecter:";
	cin>>ch;
	cout<<"enter 2nd charecter:";
	cin>>ch1;
	obj.function(a,b);
	obj.function(ch,ch1);
}