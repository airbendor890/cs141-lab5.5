//pprgrm to prnt mirrored rohombous star pattern
#include<iostream>
using namespace std;
int main()
{	cout<<"MIRRORED ROHOMBOUS STAR PATTERN"<<endl;
	cout<<"input dimension of rohombous   ";
	int d;	
	//tk dmnsn frm user 
	cin>>d;cout<<endl;	
	for(int i=1;i<=d;i++)
		{ //lp for prntng respctv no of spaces bfr * starts-----
			for(int j=0;j<=i;j++)
			{cout<<" ";}
		  //--------------------------------------------
		  //------for prntng *-------------------------		  	          
			int k=1;
			while(k<=d)
			{cout<<"*  ";k++;}
			cout<<endl;	
		  //------------------------------------
	
		}



	return 0;

}
