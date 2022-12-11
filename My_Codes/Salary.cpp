// Code by Abhishek Yadav
#include <iostream>
#include<cmath>
using namespace std;

int totalSalary(int basic, char grade)
{
	int allow;
	if (grade == 'A') {
		allow = 1700;
	}
	else if (grade == 'B') {
		allow = 1500;
	}
	else {
		allow = 1300;
	}
    double hra, da, pf;
	hra = 0.2 * basic;
	da = 0.5 * basic;
	pf = 0.11 * basic;
	int tot;
	tot = round(basic + hra + da + allow - pf);
	return tot;
}
int main()
{
	int basic;
	char grade;
    cin>>basic>>grade;
	cout << totalSalary(basic, grade);
}
