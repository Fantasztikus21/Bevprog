#include "../std_lib_facilities.h"

void print_array10(ostream& os, int* a){

	cout << "10 elements array: ";
	for(int i = 0; i < 10; ++i){
		os << a[i] << " ";
	}
	cout << endl;
}

void print_array(ostream& os, int* a, int n){

	cout << n << " elements array: ";
	for(int i = 0; i < n; ++i){
		os << a[i] << " ";
	}
	cout << endl;
}

void print_vector(ostream& os, vector<int*> vec){

	cout << vec.size() << " elements vector: ";

	for (int i = 0; i < vec.size(); ++i){
		os << *vec[i] << " ";
	}
	cout << endl;
}

int main(){

	int* array = new int[10];

	for(int i = 0; 0 < i; ++i){
		cout << array[i] << endl;
	}

	delete[] array;


	int* tenArray = new int[10];
	for(int i = 0; i < 10; ++i){
		tenArray[i] = 100+i;
	}
	print_array(cout, tenArray, 10);

	int* elevenArray = new int[11];
	for(int i = 0; i < 11; ++i){
		elevenArray[i] = 100+i;
	}
	print_array(cout, elevenArray, 11);

	int* twentyArray = new int[20];
	for(int i = 0; i < 20; ++i){
		twentyArray[i] = 100+i;
	}
	print_array(cout, twentyArray, 20);

	delete[] tenArray;
	delete[] elevenArray;
	delete[] twentyArray;


	vector<int*> fiveVector;
	for(int i = 0; i < 5; ++i){
		fiveVector.push_back(new int(100+i));
	}
	print_vector(cout, fiveVector);

	vector<int*> sixVector;
	for(int i = 0; i < 6; ++i){
		sixVector.push_back(new int(100+i));
	}
	print_vector(cout, sixVector);

	vector<int*> eightVector;
	for(int i = 0; i < 8; ++i){
		eightVector.push_back(new int(100+i));
	}
	print_vector(cout, eightVector);

	return 0;
}