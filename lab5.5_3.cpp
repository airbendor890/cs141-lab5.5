//PROGRAMM TO PRINT HOLLOW SQUARE WTH DIAGONAL
#include<iostream>
using namespace std;
int main()
{	cout<<"dimension of square"<<endl;
	cout<<"note-if dimension is even there";
	cout<<"will be no central star"<<endl;
	cout<<"if its odd there will be a central star"<<endl; 		
		int n;
		//tk dimension frm usr
		cin>>n;
		//lp fr ro rfrnc
	for(int i=1;i<=n;i++)
		{//condn for first and last row
			if(i==1 || i==n)
			{ for(int j=1;j<=n;j++)
				{cout<<"* ";}
			  cout<<endl;
			}
		 //for other rows
		 else
			{ //nothing to do with perimeter stars
			 cout<<"* ";
		 //lp for coloumn rfrnc
			  for(int k=2;k<=n-1;k++)
				{ //cond for prnting * and space
					
				  if(k==i || k==n-i+1)
					{cout<<"* ";}
				  //otherwise prnt two spaces
				  else
					{cout<<"  ";}
				}
			  cout<<"* "<<endl;	
			}


		}

	return 0;


}
