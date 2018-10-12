#include<iostream.h>
void main()
{
	int i,j;
	int x[2][3]={1,3,4,7,8,9};
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
			cout<<x[i][j]<<endl;
	}
}