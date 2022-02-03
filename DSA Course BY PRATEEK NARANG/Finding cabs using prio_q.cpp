#include<bits/stdc++.h>
using namespace std;

class Car {
public:
	string id;
	int x, y;
	Car(string id, int x, int y) {
		this->id = id;
		this->x = x;
		this->y = y;
	}
	int dist() const {
		return x * x + y * y;
	}

};

class CarCompare {
public:
	bool operator()(const Car A, const Car B) {
		return A.dist() < B.dist();

	}
};

void printNearestCars(vector<Car> cars, int k) {

	//create a max heap of size k
	priority_queue<Car, vector<Car>, CarCompare> max_heap(cars.begin(), cars.begin() + k);

	//reamaining Cars

	for (int i = k; i < cars.size(); i++)
	{
		auto car = cars[i];

		if (car.dist() < max_heap.top().dist())
		{
			max_heap.pop();
			max_heap.push(car);
		}
	}
	//print all cars inside the heap

	vector<Car> output;
	while (!max_heap.empty())
	{
		output.push_back(max_heap.top());
		max_heap.pop();
	}

	//vector of k neares cars

	reverse(output.begin(), output.end());

	for (auto car : output)
	{
		cout << car.id << endl;
	}
	return;

}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	string id;
	int x, y;
	vector <Car> cars;
	for (int i = 0; i < n; i++)
	{
		cin >> id >> x >> y;
		Car car(id, x, y);
		cars.push_back(car);
	}
	printNearestCars(cars, k);


	return 0;
}
