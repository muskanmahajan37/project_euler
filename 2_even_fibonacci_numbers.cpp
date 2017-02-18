#include<iostream>

using namespace std;

int main(void){
	
	int T , N ;

	cin>>T;
	
	while(T--){ 
	
	long temp = 0, sum = 0, fib_0 = 0 , fib_1 =1;

	cin>>N;

	while(fib_0<=N){
	
	      temp = fib_0;

 	      if(fib_0%2 == 0)
	         sum+=fib_0;

		fib_0 = fib_1;

		fib_1 += temp;
	}
        
	   cout<<sum<<endl;
	  
	}

return 0;
}
	 
