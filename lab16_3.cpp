#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>, vector<int>);

int main()
{
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x, y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;

	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here
vector<int> randomVector(int n)
{
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
	}
	return a;
}

void showVector(vector<int> x)
{
	for (int i = 0; i < x.size(); i++)
	{
		cout << x[i] << " ";
	}
}

int dotProduct(vector<int> A, vector<int> B)
{
	int C = 0;
	for (int i = 0; i < A.size(); i++)
	{
		C += A[i] * B[i];
	}
	return C;
}