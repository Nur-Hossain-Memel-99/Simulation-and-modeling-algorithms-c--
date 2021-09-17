#include<iostream>

using namespace std;

int main()
{
	int a,c,m,n=1000,d=0,flag = 0;
	int z[1000];
	
	cout <<"value of a =";
	cin >> a;
	
	cout <<"value of c =";
	cin >> c;
	
	cout <<"value of m =";
	cin >> m;
	
	cout <<"value of Z0 =";
	cin >> z[0];
	cout << endl;
	
	cout<<z[0]<<"\n";
	
	for(int i=1;i<n;i++)
	{
		z[i]= (a*z[i-1]+c) % m ;
		
		d++;
		for(int j = 0;j<i;j++)
		{
			if(z[j] == z[i])
			flag = 1;
			
		}
		if(flag == 1)
			break;
		cout<<z[i];
		cout<<"\n";
		
	}
	cout<<"Cycle Length is : " <<d;
	return 0;
}
