// Simple Array Sum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;
	vector<int> arr(n);

	for (int arri = 0; arri < n; arri++) {
		cin >> arr[arri];
		sum += arr[arri];
	}
	cout << sum;

    return 0;
}

