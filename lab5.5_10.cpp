#include<iostream>
using namespace std;

int main()
{cout<<"MIRRORED RIGHTTRIANGLE STAR PATTERN"<<endl;
 cout<<"base = height"<<" :give dimen sion"<<endl;
	int d;
	cin>>d;		//tk dimensn frm user

	for(int i=d-1;i>=0;i--)      //lop fr line rfrnc
		{ int j=i;
		  while(j>0)	     //lp for prinng spc in rsptcv line
		       { cout<<" ";
			 j--;
		       }

		  for(int k=0;k<=d-1-i;k++)//lp fr prntng* in rspctv ln 
			{cout<<"*";}
			
                  cout<<endl;	
		
		}
	return 0;

}
