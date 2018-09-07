//prgm to prnt mirrored righttriangl * pattern
#include<iostream>
using namespace std;

int main()
{cout<<"MIRRORED RIGHTTRIANGLE STAR PATTERN"<<endl;
 cout<<"base = height"<<" :give dimension  "<<endl<<endl;
	int d;
	cin>>d;		//tk dimensn frm user

	for(int i=1;i<=d;i++)      //lop fr line rfrnc
		{//----------------------------------------
		 int j=d-i;
		  while(j>0)	     //lp for prinng spc in rsptcv line
		       { cout<<" ";
			 j--;
		       }
		  //--------------------------------------

		  for(int k=1;k<=i;k++)//lp fr prntng* in rspctv ln 
			{cout<<"*";}
			
                  cout<<endl;
		  //--------------------------------------	
		
		}
	return 0;

}
