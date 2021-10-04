#include<iostream>
using namespace std;
int main()
{
	 int AR[10],i,j,temp;
	cout<<"Enter 10 numbers: ";
	for(i=0;i<=9;i++)
		cin>>AR[i];
	for(i=0;i<=8;i++)
	{
		for(j=0;j<=10-(i+2);j++)
		{
			if(AR[j]>AR[j+1])
			{
				temp=AR[j];
				AR[j]=AR[j+1];
				AR[j+1]=temp;
			}
		}
	}
	cout<<"Sorted array is: ";
	for(i=0;i<=9;i++)
	cout<<AR[i]<<",";
}					
