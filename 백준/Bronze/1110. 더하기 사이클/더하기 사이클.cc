#include <iostream>
using namespace std;

int main()
{
	int n;
	int init_arr[2];
	int temp_arr[2];
	int new_arr[2];
	int cycle_count = 1;
	int sum = 0;

	cin >> n;
	
	if (n < 10)
	{
		init_arr[0] = 0;
		init_arr[1] = n;
	}
	else
	{
		init_arr[0] = n / 10;
		init_arr[1] = n % 10;
	}

	temp_arr[0] = init_arr[0];
	temp_arr[1] = init_arr[1];

	while (1)
	{
		sum = temp_arr[0] + temp_arr[1];
		
		new_arr[0] = temp_arr[1];
		new_arr[1] = sum % 10;

		if (init_arr[0] == new_arr[0] && init_arr[1] == new_arr[1])
			break;
		else
			cycle_count++;

		temp_arr[0] = new_arr[0];
		temp_arr[1] = new_arr[1];
	}

	cout << cycle_count;
}