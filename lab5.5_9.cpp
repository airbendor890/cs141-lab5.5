//prgrm to prnt hollow right triangle star pattern
#include<iostream>
using namespace std;
int main()
{	//input from user----------------	
	cout<<"\nHOLLOW RIGHT TRIANGLE STARPATTERN"<<endl;
	cout<<"input dimnsn of trngl   ";
	int d;cin>>d;cout<<endl<<endl;
	//-------------------------------	
	for(int i=1;i<=d;i++)
		{ //condn fr intermediate lines 
			if(i>2 && i<d)
			{      cout<<"*";
			        for(int k=1;k<=i-2;k++)
			         {cout<<"   ";}
			         cout<<"  *"<<endl;		
			}
		  //-------------------------
		  //fr first,second and last line
		  else
			{ int j=1;
			        while(j<=i)
				  {cout<<"*  ";
				   j++;	
				  }
			        cout<<endl;	
			}	

		 //----------------------------

		}

	return 0;

}

