#include<iostream>

using namespace std;

int main()
{  
	int a,c,m,n=1000,d=0,flag = 0;
	int z[10000];
	cout<<"------------Linear congruential generator-------------\n";
	
	cout <<"value of a =\n";
	cin >> a;
	
	cout <<"value of c =\n";
	cin >> c;
	
	cout <<"value of m =\n";
	cin >> m;
	
	cout <<"value of Z0 =\n";
	cin >> z[0];
	cout << endl;
	
	cout<<z[0]<<"\n";
	
	cout <<"value of n =\n";
	cin >> n;
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
		cout<<"\t"<< d<< ". "<<z[i];
		cout<<"\n";
		
	}
	cout<<"Cycle Length: " <<d+1;
	return 0;
}
