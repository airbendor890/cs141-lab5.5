//PROGRAMM FOR PRINTING SQUARE PATTERN

#include<iostream>
using namespace std;
int main()
{		
	cout<<"SQUARE PATTERN\n";
	cout<<"give dimensn of your square";
	int d;
	//tk squr dmnsn frm user
	cin>>d;	
	//lp fr line rfrnc
	for(int i=0;i<d;i++)
	{//intr lp prntng @ at respctv ln
		for(int i=0;i<d;i++)
			{cout<<"@  ";}	
	 cout<<endl;	
	}

	return 0;
}
