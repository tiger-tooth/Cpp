#include<iostream>
const int aisize = 8;
int sum_arr(int arr[], int n);
int main()
{
	using namespace std;
	int cookies[aisize] = { 1,2,4,8,16,32,64,128 };

	int sum = sum_arr(cookies, aisize);
	cout << "Total cookies eaternL: " << sum << endl;
	system("pause");
	return 0;
}

int sum_arr(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
		total = total + arr[i];
	return total;
}