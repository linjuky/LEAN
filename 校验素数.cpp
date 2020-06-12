#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n){ 
  if(n==1)    
  return 0;
  if(n==2||n==3)
  return 1;     
  //排除 1，2，3，质数肯定是存在于6的两侧 
  if(n%6!=1&&n%6!=5)	
  return 0;
  //跳6遍历，不被6相邻的两个数整除 
  for(int i=5;i<=floor(sqrt(n));i+=6)
	if(n%i==0||n%(i+2)==0)	
	return 0;
  return 1;
}
int main(){
	int a;
	cin>>a;
	cout<< isPrime(a);
}
