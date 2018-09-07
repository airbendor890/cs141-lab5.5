//PRGRAMM TO PRNT HOLLOW SQUARE PATERN

#include<iostream>
using namespace std;
int main()
{	cout<<"HOLLOW SQUARE PATTERN \n";
	cout<<"give dimnsn of square"<<endl;
	int d;	//dmnsn var
	//tk dmnsn frm usr
	cin>>d;
	//lp for ln rfrnc
	for(int i=0;i<=d-1;i++)
		{ if(i<d-1 && i>0)	
			{cout<<"@";
				for(int j=0;j<2*d-3;j++)
				{cout<<" ";}
			 cout<<"@"<<endl;	
			
			}
		  else
			{ for(int j=0;j<=d-1;j++)
				cout<<"@ ";
				cout<<endl;
			}
		}



}
