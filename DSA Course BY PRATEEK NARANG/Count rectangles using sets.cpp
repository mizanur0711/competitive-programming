#include<bits/stdc++.h>
using namespace std;

//point class to hold cartesian point
class Point {
public:
	int x;
	int y;
	Point ()
	{

	}
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
};


//compare class for set

class Compare {
public:
	bool operator()(const Point p1, const Point p2)
	{
		if (p1.x == p2.x)
		{
			return p1.y < p2.y;
		}

		return p1.x < p2.x;
	}
};
//count rectangle
int coun_rectangle(vector<Point> points)
{
	//1. insert all point in set

	set<Point, Compare> s;
	for (Point p : points)
	{
		s.insert(p);
	}

	int ans = 0;
	//2. logic brute forse for two point + looksup fpr other two
	for (auto it = s.begin(); it != prev(s.end()); it++)
	{
		for (auto jt = next(it); jt != s.end(); jt++)
		{
			Point p1 = *it;
			Point p2 = *jt;

			// small check that we want to make;
			if (p2.x == p1.x || p2.y == p1.y)
			{
				continue;
			}

			// p3,p4

			Point p3(p1.x, p2.y);
			Point p4(p2.x, p1.y);

			// lookUp

			if (s.find(p3) != s.end() && s.find(p4) != s.end())
			{
				ans += 1;
			}

		}
	}
	return ans / 2;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int x, y;

	vector<Point > points;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		Point p(x, y);
		points.push_back(p);
	}

	cout << coun_rectangle(points) << endl;

	return 0;
}
