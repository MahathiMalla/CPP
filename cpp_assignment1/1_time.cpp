#include<iostream>
using namespace std;

class Time
{
public:
	int hrs, mins, secs;
	Time()
	{
		int hrs = 0;
		int mins = 0;
		int secs = 0;
	}
	Time(int h, int m, int s)
	{
		hrs = h;
		mins = m;
		secs = s;
	}
	void get_time(int p,int q,int r)
	{
		hrs = p;
		mins = q;
		secs = r;
	}
	void display()
	{
		cout << hrs << ":" << mins << ":" << secs<<endl;
	}
	void add (Time t1,Time t2)
	{
		secs = t1.secs + t2.secs;
		mins = secs / 60;
		secs = secs % 60;
		mins = mins + t1.mins + t2.mins;
		hrs = mins / 60;
		mins = mins % 60;
		hrs = hrs + t1.hrs + t2.hrs;
		
	}
};
int main()
{
	Time t1, t2, t3;
	int s;
	t1.get_time(9, 12, 45);
	t1.display();
	t2.get_time(1, 12, 30);
	t2.display();
	t3.add(t1, t2);
	t3.display();
	cin >> s;
}
