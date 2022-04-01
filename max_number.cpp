#include<iostream.h>
main()
{
	int x , max ;
	cout<<"enter any 10 values to find the max number"<<endl;
	cin>>x;
	max=x;
	for(int i=1 ; i<=9 ; i++)
	{cin>>x;
	if(x>= max)
	max=x;}
	cout<<"this is max number = "<<max<<endl;




	
}