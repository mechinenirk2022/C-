#include<iostream>
using namespace std;
class gopal{
	int i;
	int j;
public:
	void add(int x,int y)
	{
		i=x;
		j=y;
		//cout<<"i= "<<i<<endl<<"j= "<<j<<endl;
	}
	void add(float x,float y)
	{
		float z=x+y;
		//cout<<"addition of float= "<<z<<endl;
	}
	void show()
	{
		cout<<"i="<<i<<" "<<"j="<<j<<endl;
	}
};
int main()
{
	gopal obj;
	int a;
	int b;
	obj.show();
	cout<<"enter i value:";
	cin>>a;
	cout<<"enter j value:";
	cin>>b;
	obj.add(a,b);
	//obj.add(c,d);
	obj.show();
}