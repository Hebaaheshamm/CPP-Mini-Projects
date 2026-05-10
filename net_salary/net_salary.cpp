#include <iostream>
using namespace std;
double calc_NetSalary(double WorkedHours , double PayRate)
{
double GrossSalary = WorkedHours * PayRate;
double NetSalary = GrossSalary - 10 ;
return NetSalary;
}

int main ()
{
double Hours , Rate;
for (int employee = 1; employee <=10; employee ++)
{
cout << "Enter employee " << employee << " working hours : ";
cin >> Hours;
cout << "Enter employee " << employee << " pay rate : ";
cin >> Rate;

double NetSalary = calc_NetSalary(Hours, Rate);

cout << "The net salary for the employee " << employee << " is : " << NetSalary << endl;

}
	
	return 0;
}
