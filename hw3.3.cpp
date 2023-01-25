
#include<iostream>
#include<algorithm> //transform
#include<vector> //vector
#include<cmath> //pow
using namespace std;

class Nth_Power {
private:	
	int n;

public:
	Nth_Power(int x) : n(x) {}

	double operator()(int num) const {
		return pow(num, n);
	}
};

int main() {
	vector<int> v = { 1 , 2 , 3 , 4 , 5 };
	Nth_Power cube{3};
	cout << cube(7) << endl; // prints 343
	// print first five cubes
	transform(v.begin(), v.end(), ostream_iterator<int>(cout, ", "), cube);
	return 0;
}