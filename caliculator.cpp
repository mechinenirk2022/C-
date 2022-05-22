#include<iostream>
using namespace std;
int main()
{
	int a,b,c=0,d;
	while(c!=6)
	{
		cout<<"Please select option:"<<endl<<"1.add 2.sub 3.mul 4.div 5.mdiv 6.exit"<<endl;
		cin>>a;
		switch (a)
		{
		case 1:
			{
				cout<<"1st number=";
				cin>>b;
				cout<<"2nd number=";
				cin>>c;
				cout<<"addition= "<<b+c<<endl;
				break;
			}
		case 2:
			{
				cout<<"1st number=";
				cin>>b;
				cout<<"2nd number=";
				cin>>c;
				cout<<"subtraction= "<<b-c<<endl;
				break;
			}
		case 3:
			{
				cout<<"1st number=";
				cin>>b;
				cout<<"2nd number=";
				cin>>c;
				cout<<"multiplication= "<<b*c<<endl;
				break;
			}
		case 4:
			{
				cout<<"1st number=";
				cin>>b;
				cout<<"2nd number=";
				cin>>c;
				if(c==0)
					cout<<"input error"<<endl;
				else 
					cout<<"division= "<<b/c<<endl;
				break;
			}
		case 5:
			{
				cout<<"1st number=";
				cin>>b;
				cout<<"2nd number=";
				cin>>c;
				if(c==0)
					cout<<"input error"<<endl;
				else 
					cout<<"m.division= "<<b%c<<endl;
				break;
			}
		case 6:
			{
				c=6;
				break;
			}
		default:
			{
				cout<<"Wrong selection"<<endl<<"Please select again"<<endl;
				break;
			}
		}
	}
}