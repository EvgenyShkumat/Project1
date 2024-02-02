#include <iostream>
#define N 5
#define M 5
using namespace std;

void random_matrix_init(int matrix[N][N], int min, int max);
string convert_matrix_to_string(int matrix[N][N]);
int find_max_avg(int matrix[N][M]);

int main() {
	int matrix[N][M];

	random_matrix_init(matrix, 1, 10);

	cout << "Matrix:\n" << convert_matrix_to_string(matrix);
	cout << "The group with the biggest average mark is " <<
		find_max_avg(matrix) + 1;
	
	return 0;
}