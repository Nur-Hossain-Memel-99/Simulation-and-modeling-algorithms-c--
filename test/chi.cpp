#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, OB[20],i,N,EXPEC;
    float CAL[20],FIN,CRITICAL;
    N=0;
    FIN=0.00;
	
	cout<<"How many classes DO you want:?"<<endl;
	
    cin>>n;
    cout<<"***************************************************************"<<endl;
    cout<<"Enter the  Frequency:"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<"Enter Frequency of "<<i+1<<"th number: "<<endl;
        cin>>OB[i];
        cout<<"----------------------------------------"<<endl;
    }


   for(i=0; i<n; i++)
    {
        N=N+OB[i];
    }
    EXPEC=N/n;
    for(i=0; i<n; i++)
    {
        CAL[i]=(float)((OB[i]-EXPEC)*(OB[i]-EXPEC))/EXPEC;
        FIN=FIN+CAL[i];
    }


    cout<<"***************************************************************"<<endl;
    cout<<" S.No     Oi   Ei     ((Oi-Ei)*(Oi-Ei))/Ei"<<endl;
    cout<<"***************************************************************"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<setw(5)<<i+1<<" |";
        cout<<setw(5)<<OB[i]<<" |";
        cout<<setw(5)<<EXPEC<<" |";
        cout<<setw(10)<<setprecision(2)<<CAL[i]<<" |"<<endl;
    }
    cout<<"***************************************************************"<<endl;
    cout<<setw(10)<<N;
    cout<<setw(15)<<FIN;
    cout<<endl;


    

    cout<<endl;
    cout<<"Enter the CRITICAL value:"<<endl;
    cout<<"-------------------------->"<<endl;
    cin>>CRITICAL;
    if(FIN<CRITICAL)
    {
        
		cout<<"-----------------------------|"<<endl;
		cout<<"THE TEST IS ACCEPTED"<<endl;
		cout<<"-----------------------------|"<<endl;
    }
    else
    {
        cout<<"----------------------------|"<<endl;
		cout<<"THE TEST IS REJECTED"<<endl;
		cout<<"----------------------------|"<<endl;
    }
    return(0);
}

