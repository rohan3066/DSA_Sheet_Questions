#include<iostream>
using namespace std;
void printSum(int n,int sum){
	if(n<1){
		cout<<sum<<endl;
		return;
	}
	printSum(n-1,sum+n);
}

int funSunOfN(int n){
	if(n==0){
		return 0;
	}
	return n+funSunOfN(n-1);
}
int FactorialOfN(int n){
	if(n==1){
		return 1;
	}
	return n*FactorialOfN(n-1);
}


int main(){
	int n;
	cout<<"Enter N to find Sum :";
	cin>>n;
	 printSum(n,0);

	int result=funSunOfN(n);
	cout<<result<<endl;
	int result1=FactorialOfN(n);
	cout<<"factorial of "<<n<<": "<<result1<<endl;

	return 0;
}