#include "std_lib_facilities.h"

unique_ptr<vector<int>> make_vec(){

	unique_ptr<vector<int>> vp {new vector<int>};

	for (int i = 0; i < 10; ++i){
		
		vp -> push_back(i);
	}

	cout << "Vector elements: ";

	for(int i = 0; i < vp -> size(); ++i){

		cout << i << " ";
	}

	return vp;

}

int main(){
	
	make_vec();

	return 0;
}