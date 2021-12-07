#include "../std_lib_facilities.h"

struct Date{

	int y;
	int m;
	int d;
};

void init_day(Date& dd, int y, int m, int d){

	if(d < 1 || d > 31) error("Invalid day");
	if(m < 1 || m > 12) error("Invalid month");

	dd.y = y;
	dd.m = m;
	dd.d = d;
}

void add_day(Date& dd, int n){

	dd.d += n;

	if(dd.d > 31) { ++dd.m; dd.d -= 31; }
	if(dd.d < 1) { --dd.m; dd.d += 31; }

	if(dd.m > 12) { ++dd.y; dd.m -= 12; }
	if(dd.m < 1) { --dd.y; dd.m += 12; }
}

int main(){
try{

	Date today{2021, 12, 07};
	Date tomorrow(today);
	add_day(tomorrow, 1);

	cout << "Today: " <<  today.y << '.' << today.m << '.' << today.d << endl;
	cout << "Tomorrow: " << tomorrow.y << '.' << tomorrow.m << '.' << tomorrow.d << endl;

	return 0;
}catch(exception& e){
	cerr << e.what() << endl;
	return 1;
}catch(...){
	cerr << "Unknown exception!!" << endl;
	return 2;
}

	
}