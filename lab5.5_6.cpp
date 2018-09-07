//prgrm to prnt hollow mirrored rohombous star pattern
#include<iostream>
using namespace std;
int main()
{	cout<<"\nhollow  MIRRORED ROHOMBOUS STAR PATTERN"<<endl;
	cout<<"input dimension      ";
	int d;
	cin>>d;//tk dmnsn fromm user 
	cout<<endl;
	//lp for line rfrnce
	for(int i=1;i<=d;i++)
		{//lp fr prntng respective no of spaces bfr * starts

			for(int j=0;j<i;j++)
				{cout<<"   ";}
		
		 //condn for intermediate lines----------------
			if(i>1 && i<d)
			  { cout<<"*";
			    //----------------------------------	
			    int k=1;
			    while(k<=d-2)
			    {cout<<"   ";k++;}
			    //----------------------------------
			    cout<<"  *"<<endl;
			  }
                 //--------------------------------------------
		 //for first and last lin----------------------
			else
			  {for(int k=1;k<=d;k++)
			   {cout<<"*  ";}
			    cout<<endl;
			  }  

		 }	


		

	return 0;



}
