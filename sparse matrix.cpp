/*sparse matrix*/
#include <iostream>
#define row 5
#define col 4
using namespace std;
int main()
{
	int original[row][col]={0,5,0,0,0,5,3,2,3,4,0,6,0,0,0,0,8,9,0,0},sparse[row][3];
	int i,j,count=0;
	for (i=0;i<row;++i)
	{
		for (j=0;j<col;++j)
			{
				if(original[i][j]!=0)
				{sparse[count][0]=i;
				 sparse[count][1]=j;
				 sparse[count][2]=original[i][j];
				 count++;
				}
			 } 
	}
		for (i=0;i<count;++i)
		 	{
		 		cout<<sparse[i][0]<<" "<<sparse[i][1]<<" "<<sparse[i][2]<<endl;
     		}
     		
     		return 0;
}
