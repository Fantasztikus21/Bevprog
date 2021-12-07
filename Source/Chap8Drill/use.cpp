#include "my.h"


void swap_v(int a, int b){

	int temp;
	temp = a;
	a = b;
	b = temp;

	print(a);
	print(b);
}

void swap_r(int& a, int& b){

	int temp;
	temp = a;
	a = b;
	b = temp;

	print(a);
	print(b);
}

/*void swap_cr(const int& a, const int& b){

	int temp;
	temp = a;
	a = b;
	b = temp;   Nem fut mivel const.

	print(a);
	print(b);
}*/

namespace X{
	using namespace std;
	int var;
	void print(){
		cout << var << endl;
	}
}

namespace Y{
	using namespace std;
	int var;
	void print(){
		cout << var << endl;
	}
}

namespace Z{
	using namespace std;
	int var;
	void print(){
		cout << var << endl;
	}
}



int main(){


	X::var = 7;
	X::print();
	using namespace Y;

	var = 9;
	print();
	{
		using Z::var;
		using Z::print;
		var = 11;
		print();
	}
	print();
	X::print();

/*
	foo = 7;

	print_foo();
	print(99);


	int x = 7, y = 9;

	swap_v(x,y);
	swap_r(x,y);
	//swap_cr(x,y); hiba

	swap_v(7,9);
	//swap_r(7,9); hiba
	//swap_cr(7,9); hiba

	const int cx = 7;
	const int cy = 9;

	swap_v(cx,cy);
	//swap_r(cx,cy); hiba
	//swap_cr(cx,cy); hiba

	swap_v(7.7,9.9);
	//swap_r(7.7,9.9); hiba
	//swap_cr(7.7,9.9); hiba

	double dx = 7.7;
	double dy = 9.9;

	swap_v(cx,cy);
	//swap_r(cx,cy); hiba
	//swap_cr(cx,cy); hiba

	swap_v(7.7,9.9);
	//swap_r(7.7,9.9); hiba
	//swap_cr(7.7,9.9); hiba
*/
	return 0;
}
