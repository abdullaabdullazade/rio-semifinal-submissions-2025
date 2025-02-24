#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string time;
		int min=0,hour=0;
		cin>>time>>min;
		hour=hour+(min/60);
		min=min-(60*(min/60));
		int a=int(char(time[0]))-48,b=(int(char(time[1]))-48)+hour,c=int(char(time[3]))-48,d=(int(char(time[4]))-48)+min;
		a=(a*10)+b;
		d=(c*10)+d;
		a=a+(d/60);
		d=d-((d/60)*60);
		a=a-(24*(a/24));
		b=a%10;
		a=a/10;
		c=d%10;
		d=d/10;
		cout<<a<<b<<":"<<d<<c<<endl;
	}
	return 0;
}
