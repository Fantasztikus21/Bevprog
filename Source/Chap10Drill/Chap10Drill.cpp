#include "../std_lib_facilities.h"

struct Point{

	double x, y;
};


int main(){

	double x, y;
	vector<Point> original_points;
	vector<Point> processed_points;


	//Bekérés
	cout << "Enter 7 x y pairs:" << endl;

	for (int i = 0; i < 7; ++i){
		cin >> x >> y;
		original_points.push_back(Point{x,y});
	}


	//Kiírás

	ofstream ost{"mydata.txt"};

	for(Point& pp : original_points){
		ost << pp.x << ' ' <<pp.y << endl;
	}
	ost.close();


	//Újra beolvas

	ifstream ist{"mydata.txt"};

	if(!ist) error("Can't open the file");

	while(ist >> x >> y){
		processed_points.push_back(Point{x, y});
	}


	if(processed_points.size() != original_points.size()){

		cout << "Something's wrong!" << endl;;
	} else {
		for (int i = 0; i < original_points.size(); ++i){
			if (original_points[i].x != processed_points[i].x || original_points[i].y != processed_points[i].y){

				cout << "Something's wrong!" << endl;;
			}
		}
	}

	cout << "Original: " << endl;
	for(Point& op : original_points){
		cout << op.x << ' ' << op.y << endl;
	}

	cout << "Processed: " << endl;
	for(Point& pp : processed_points){
		cout << pp.x << ' ' << pp.y << endl;
	}


	return 0;
}