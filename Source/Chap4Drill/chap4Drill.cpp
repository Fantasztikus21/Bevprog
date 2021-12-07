#include "std_lib_facilities.h"

int main(){

/*
	int a = 0, b = 0;

	while(cin >> a >> b && a != '|' && b != '|'){

		cout << "Enter 2 number!" << endl;

		if ( a < b )
			cout << "the smaller value is: " << a << " the larger value is: " << b << endl;
		else if ( a > b )
			cout << "the smaller value is: " << b << " the larger value is: " << a << endl;
		else if ( a = b )
			cout << "the numbers are equal" << endl;
	}

	double a = 0, b = 0;
	double diff = 0;

	while(cin >> a >> b && a != '|' && b != '|'){

		cout << "Enter 2 number!" << endl;

		if ( a < b ){
			cout << "the smaller value is: " << a << " the larger value is: " << b << endl;
			diff = b-a;
		}
		else if ( a > b ){
			cout << "the smaller value is: " << b << " the larger value is: " << a << endl;
			diff = a-b;
		}
		else
			cout << "the numbers are equal" << endl;

		if ( diff < 0.01)
			cout << "the numbers are almost equal" << endl;
	}
*/
	double a = 0;

	double min = numeric_limits<double>::max();
	double max = numeric_limits<double>::lowest();
	double sum = 0;

	char unit;
	double meter = 0;
	vector<double> VectorSz;



	while(cin >> a >> unit && a != '|' && unit != '|'){

		cout << "Please add number (m, c = cm, i = inch, f = ft" << endl;

		switch(unit){
			case 'm':
					meter = a;
					cout << "Number in m: " << meter << endl;
					break;

			case 'c':
					meter = a/100.0;
					cout << "Number in m: " << meter << endl;
					break;

			case 'i':
					meter = a*0.0254;
					cout << "Number in m: " << meter << endl;
					break;

			case 'f':
					meter = a*0.3048;
					cout << "Number in m: " << meter << endl;
					break;

			default:
					cout << "Error, illagal unit!" << endl;
					break;
		}

		VectorSz.push_back(meter);
	}
		sort(VectorSz);
		
	for (auto numb : VectorSz){
		cout << numb << endl;
		if (numb > max) max = numb;	
		if (numb < min) min = numb;
		sum += numb;
	}

	cout << "The smallest so far: " << min << endl;
	cout << "The largest so far: " << max << endl;
	cout << "The sum of values: " << sum << endl;



	return 0;
}