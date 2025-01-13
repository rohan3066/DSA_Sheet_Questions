#include<bits/stdc++.h>
using namespace std;

void sunOfN(int i,int sum){
    if(i<1){
        return;
    }

    cout<<sum<<endl;
    sunOfN(i-1,i+sum);

}

int sumOfn(int i){
    if(i==0){
        return 0 ;
    }

    return i+sumOfn(i-1);

};

int factorial(int n){
    if(n==0){
        return 1;
    }

    return n*factorial(n-1);
}

  int reverseNum(int num){
      int newDigit=0;
      while(num>0){
         int lastDigit=num%10;
         num=num/10;
         newDigit=newDigit*10+lastDigit;
      }
      
      return newDigit;
  }






int main(){
    int res=reverseNum(123);
    cout<<res<<endl;


    return 0;
}