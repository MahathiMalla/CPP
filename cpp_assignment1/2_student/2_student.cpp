#include<iostream>
using namespace std;

class student
{
public:
	//student()
	
		int m1, m2, m3;
		char grade;
		char stuname[10];
		float avg;
	
	void set_data(char *name,int a, int b, int c)
	{
		strcpy_s(stuname, sizeof(char) + 30, name);
		m1 = a;
		m2 = b;
		m3 = c;
		avg=average(m1, m2, m3);
		gradeachieved(avg);
	}
	float average(int d, int e, int f)
	{
		int sum = 0;
		float avg;
		sum = d + e + f;
		avg = sum / 3;
		return avg;
	}

		void gradeachieved(float avg)
		{
			//avg = x;
			if (avg > 60)
			{
				grade = 'A';
			}
			else if ((avg < 60) && (avg > 50))
			{
				grade = 'B';
			}
			else if ((avg < 50) && (avg > 400))
			{
				grade = 'C';
			}
			if (avg < 40)
			{
				grade = 'F';
			}
		}
		void display()
		{
			cout << "student name:" << stuname << endl;
			cout << "marks:" << m1 <<" "<< m2 <<" "<< m3 << endl;
			cout << "average" << avg << endl;
			cout << "Grade is:" << grade << endl;
		}
};
int main()
{
	student s1;
	int t;
	s1.set_data("sweetha",50, 100, 60);
	
	s1.display();
	cin >> t;


}