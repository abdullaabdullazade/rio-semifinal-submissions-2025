#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string time;
		int delay;
		int min=0,hour=0;
		cin>>time>>delay;
		while(delay>=60){
			delay=delay-60;
			hour++;
		}
		min=delay;
		int a=int(char(time[0]))-48,b=(int(char(time[1]))-48)+hour,c=int(char(time[3]))-48,d=(int(char(time[4]))-48)+min;
		a=(a*10)+b;
		d=(c*10)+d;
		while(d>=60){
			d=d-60;
			a++;	
		}
		while(a>=24){
			a=a-24;
		}
		b=a%10;
		a=a/10;
		c=d%10;
		d=d/10;
		cout<<a<<b<<":"<<d<<c<<endl;
	}
	return 0;
}
