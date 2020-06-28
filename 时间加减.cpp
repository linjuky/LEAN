#include<iostream>
using namespace std;
class Time
{
	private:
		int hours;
		int minutes;
	public:
		Time(){
			hours=0;
			minutes=0;
		}
		Time(int h,int m){
			hours=h;
			minutes=m;
		}
		Time operator+(const Time &t) const{
		Time sum;
		sum.minutes=minutes+t.minutes;
		sum.hours=hours+t.hours+sum.minutes/60;
		sum.minutes%=60;
		return sum;
		}
		Time operator-(const Time &t) const{
		Time sum;
		sum.minutes=minutes-t.minutes;
		if(sum.minutes<0){
		sum.hours=hours-t.hours-1;
		sum.minutes+=60;
	    }
	    else{
	    sum.hours=hours-t.hours;
		}
		return sum;
		}
		void show() const{
		cout<<hours<<":"<<minutes<<'\n';
		}
}; 
int main(){
Time a(5,30);
Time b(3,50);
Time c=a+b;
c.show();
c=a-b;
c.show();
return 0;
}

