#include<iostream>
#include<math.h>
using namespace std;
double squareRoot(double x){
	if(x<0){
		throw "Invalid";
	}
	else
	return sqrt(x);
}
int main(){
double x;
cin>>x;
try{
	cout<<squareRoot(x);
}
catch(const char* s){
	cout<<s;
}
return 0;
}

