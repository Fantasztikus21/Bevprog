#include "../std_lib_facilities.h"

void print_array(ostream& os, int* a, int n){

	cout << n << " elements array: ";
	for(int i = 0; i < n; ++i){
		os << a[i] << " ";
	}
	cout << endl;
}



int main(){

	int i = 7;
	int* p1 = &i;
	cout << i << ' ' << p1 << endl;

	int* array = new int[7] {1, 2, 4, 8, 16, 32, 64};

	int* p2 = array;
	print_array(cout, array, 7);
	cout << p2 << endl;

	int* p3 = p2;
	p2 = p1;
	p2 = p3;

	cout << p1 << ' ' << *p1 << ' ' << p2 << ' ' << ' ' << *p2 << endl;

	delete[] array;


	int* a2 = new int[10]{1,2 ,4 ,8 ,16 , 32, 64, 128, 256, 512};
	p1 = a2;

	int* a3 = new int[10];
	p2 = a3;
	for(int i = 0; i < 10; ++i){
		p2[i] = p1[i];
	}
	print_array(cout, p2, 10);

	cout << "Vector" << endl;
	vector<int> vector;
	for(int i = 0; i < 10; ++i){
		vector.push_back(pow(2, i));
	}

	p1 = &vector[0];
	print_array(cout, p1, 10);
	return 0;
}