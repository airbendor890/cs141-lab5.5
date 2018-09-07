//prgrm to prnt right triangle * pattern
#include<iostream>
using namespace std;

int main()
{	cout<<"RIGHT TRIANGLE STAR PATTERN:::::(base=height)"<<endl;
	cout<<"input dimensn of trngle  ";
	int d; 
        cin>>d;cout<<endl<<endl;
	//lp for ln rfrnce-----
	for(int i=1;i<=d;i++)
		{//prntng *-----------------------	
			int j=1;
		        while(j<=i)
			{cout<<"* ";j++;}
		        cout<<endl;
		  //-------------------------------		
		
		
		}

	return 0;

}
