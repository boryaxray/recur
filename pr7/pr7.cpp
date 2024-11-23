// pr7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int nod(int a, int b)
{
	if (b == 0)return a;
	return nod(b, a % b);
}
int nodarr(int arr[], int n)
{
	if (n == 1)
	{
		return arr[0];
	}
	return nod(nodarr(arr, n - 1), arr[n - 1]);
}
int main()
{
	setlocale(0, "rus");
	int arr[10] = { 35,40,25,45,55,65,15,90,75,25 };
	cout << nodarr(arr, 10);
}