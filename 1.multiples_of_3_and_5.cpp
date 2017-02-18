#include<iostream>

using namespace std;


int main(){

	int T;
	
	cin>>T;

	while(T--)
	    {
		int N,sum=0;
		
		cin>>N;
		
		for(int i = 1; i*3<N ;  i++)
		     sum+=i*3;

		for(int i = 1; i*5<N ; i++)
		    sum+=i*5;
		
		cout<<sum<<endl;
	    }
return 0;
}
