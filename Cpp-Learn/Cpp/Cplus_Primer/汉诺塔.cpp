#include<iostream>
using namespace std;

int p = 0;
void move(char src, char dest)
{
	cout << src << "-->" << dest << endl;
}
void hanoi(int n, char src, char medium, char dest)
{
	if (n == 1)
		move(src, dest);
	else
	{
		hanoi(n - 1, src, dest, medium);
		move(src, dest);
		hanoi(n - 1, medium, src, dest);
	}

}
int main()
{
	int m;
	cout << "Enter the number of dikes: ";
	cin >> m;
	cout << "the step to moving " << m << " dikes:" << endl;
	hanoi(m, 'A', 'B', 'C');
	system("pause");
	return 0;
}