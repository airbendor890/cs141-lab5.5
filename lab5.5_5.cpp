#include<iostream>
using namespace std;
int main()
{	cout<<"HOLLOW ROHOMBOUS STAR PATTERN"<<endl;
	cout<<"give dimension"<<endl;
	int d;
	cin>>d;cout<<endl;

	for(int i=d;i>=1;i--)
		{// lp for prntng respecve no of spaces bfr * starts 
			for(int j=i;j>=0;j--)
			{cout<<"  ";}
		 //condn for intermidiate lines
		  if(i>1 && i<d)
			{//nothing to do with first and last star
			 cout<<"*";
				int j=1;
				while(j<=d-2)
				{cout<<"   ";j++;}
			 cout<<"  * "<<endl;
			}
		 //for first and last line	
		  else
			{ int j=1;
				while(j<=d)
				{cout<<"*  ";j++;}
			 cout<<endl;	


			}


		}


	return 0;



}
