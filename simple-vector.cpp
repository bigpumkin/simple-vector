#include <algorithm>
#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

template <class Type> //вывод вектора
void vec_show(vector<Type> container)
{
	for (auto elem : container)
	{
		cout << elem << " ";
	}
	cout << endl;
}

template <class Type> //реверс вектора
vector<Type> vec_reverse(vector<Type> container)
{
	std::reverse(container.begin(), container.end());
	return container;
}

template <class Type>
void vec_move(vector<Type> &container, int start_pos, int amount, int target) //start_pos - начало копирования, amount - сколько чисел копируется
{																		  //target - куда переместить эти числа
	//проверка чтобы target не ввыходила за размеры массива
	try
	{
		if (container.empty())
		{
			throw -1;
		}
	}
	catch (int)
	{
		cout << "error: container is empty" << endl;
	}

	try
	{

		if (start_pos + amount > container.size())
		{
			throw -1;
		}
	}
	catch (int)
	{
		cout << "error: out of range, reduce 2 or 3 argument" << endl;
		system("pause");
		exit (EXIT_SUCCESS);
	}


	vector<Type> buffer;
	int unsigned buffer_size = buffer.size();
	buffer.reserve(buffer_size);

	int unsigned end_pos = start_pos + amount; //индекс конца копирования

	for (int unsigned i = start_pos; i < end_pos; ++i)
	{

		buffer.push_back(container[i]);
	}

	container.erase(container.begin() + start_pos, container.begin() + end_pos);
	buffer = vec_reverse(buffer);
	//исправить: когда вставляешь в тоже место - выводится ошибка, но код выполняется
	try
	{

		if (target + amount > container.size())
		{
			throw -1;
		}
	}
	catch (int)
	{
		cout << "error: out of range, reduce 3 or 4 argument" << endl;
		system("pause");
		exit (EXIT_SUCCESS);
	}

	for (int i = 0; i < buffer.size(); ++i)
	{
		container.insert(container.begin() + target, buffer[i]);
	}
}

template <class Type> //инициализация матрицы row x col
vector<vector<Type>> mtx_init(Type row, Type col)
{
	vector<vector<Type>> container(row, vector<Type>(col)); // Объявление вектора на n строк по m элементов
	for (int unsigned i = 0; i < row; ++i)					// Цикл, который идёт по строкам
		for (int unsigned j = 0; j < col; ++j)				// Цикл, который идёт по элементам
		{
			cin >> container[i][j]; // Заполнение вектора
		}

	return container;
}

template <class Type> //вывод матрицы
void mtx_show(vector<vector<Type>> *container)
{
	pair<int, int> size = mtx_size(container);
	int unsigned size_first = size.first;
	int unsigned size_second = size.second;

	for (int unsigned i = 0; i < size_first; ++i) // Цикл, который идёт по строкам
	{
		for (int unsigned j = 0; j < size_second; ++j) // Цикл, который идёт по элементам
			cout << container[i][j] << ' ';			   // Вывод элементов i строки вектора
		cout << endl;
	}

	cout << endl;
}

template <class Type> //получить размер матрицы
pair<int unsigned, int unsigned> mtx_size(vector<vector<Type>> container)
{
	int unsigned row = container.size();
	int unsigned col = container[1].size();

	pair<int unsigned, int unsigned> size;
	size.first = row;
	size.second = col;

	return size;
}

template <class Type> //вывод размера матрицы
void mtx_size_show(vector<vector<Type>> container)
{
	cout << mtx_size(container).first << " x " << mtx_size(container).second << endl;
}
