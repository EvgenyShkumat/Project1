#include <iostream>
#include <string>
#define N 5
#define M 5

using namespace std;

int find_max_avg(int matrix[N][M]) {
	double max = 0;
	int max_index = 0;

	for (int i = 0; i < N; i++)
	{
		double sum = 0;

		for (int j = 0; j < M; j++)
		{
			sum += matrix[i][j];
		}

		sum /= M;
	
		if (sum > max) {
			max = sum;
			max_index = i;
		}
	}

	return max_index;
}