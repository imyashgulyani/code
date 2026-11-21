#include <iostream>
using namespace std;
class rental{
	protected:
		double daily_rate,tax_rate;
		int days;
	public:
		void compute_rental_cost(double daily_rate)
		{
			cout<<"rental cost for one day = "<<daily_rate;
		}
		void compute_rental_cost(double daily_rate,int days)
		{
			cout<<"rental cost for multiple days is ="<<daily_rate*days;
		}
		void compute_rental_cost(double daily_rate,int days,double tax_rate)
		{
			cout<<"rental cost after tax is ="<<(daily_rate*days)+(daily_rate*days*tax_rate)/100;
		}
};
int main()
{
	rental r1;
	r1.compute_rental_cost(100);
	r1.compute_rental_cost(100,10);
	r1.compute_rental_cost(100,10,10);
}
