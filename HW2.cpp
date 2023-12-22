#include <iostream>
using namespace std;

#define nl << '\n'

//Task 4
void fill_array(int** arr, int row, int col) {
	srand(time(0));
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			arr[i][j] = (rand() % 41 + 10);
}

void show_array(int** arr, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) cout << arr[i][j] << '\t';
		cout nl;
	}
}

void task_4() {
	cout << "Введите количество строк: ";
	int rows = NULL;
	cin >> rows;
	int** array = new int* [rows];

	cout << "Введите количество столбцов: ";
	int columns = NULL;
	cin >> columns;

	for (int i = 0; i < rows; i++) array[i] = new int[columns];

	fill_array(array, rows, columns);
	show_array(array, rows, columns);

	for (int i = 0; i < rows; i++) delete[] array[i];
	delete[] array;
}

//Task 5
float sum(int a, int b) { return a + b; }
float dif(int a, int b) { return a - b; }
float prod(int a, int b) { return a * b; }
float quot(int a, int b) { return a / b; }

void task_5() {
	cout << "Введите два числа и знак операции" nl;
	int a, b = 0;
	char oper = NULL;
	float (*func)(int, int) = nullptr;

	while (true) {
		cin >> a >> b >> oper;
		if (oper == 'q') break;

		bool flag = false;

		switch (oper)
		{
		case '+':
			func = sum;
			break;
		case '-':
			func = dif;
			break;
		case '*':
			func = prod;
			break;
		case '/':
			func = quot;
			break;
		default:
			flag = true;
		}

		if (flag) {
			cout << "Недопустимый оператор" nl;
			continue;
		}

		cout << "Результат операции: " << func(a, b) nl;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	task_4();
	task_5();
}

