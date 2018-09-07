//PROGRAMM TO PRINT ROHOMBOUS STAR PATTERN

#include<iostream>
using namespace std;
int main()
{	cout<<"ROHOMBOUS STAR PATTERN"<<endl;
	//TK DMNSN FROM UESR
	cout<<"	give dimensiion of rohombous"<<endl<<endl;
	int d;cin>>d;
	cout<<endl;
	//lp fr line rfrnc
	for(int i=d;i>=1;i--)
		{ //lp fr prntng respective no of spaces bfr * starts
		   for(int j=i;j>=1;j--)
			{cout<<"  ";}
		  //lp fr prntng d number of stars	
		  int h=1;			  
			while(h<=d)
			{cout<<"* ";h++;}
		  cout<<endl;		
			
		}

	return 0;

}
