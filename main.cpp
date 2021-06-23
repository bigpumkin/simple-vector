#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

template <class Type> //вывод вектора
void vec_show(vector<Type> container)
{
	int unsigned size = container.size();
	for (int unsigned i = 0; i < size; ++i)
	{
		cout << container[i] << " ";
	}
}

template <class Type> //реверс вектора
vector<Type> vec_reverse(vector<Type> container)
{
	int buffer;
	int unsigned container_size = container.size();
	int unsigned container_size_div2 = container.size() / 2;

	for (int unsigned i = 0; i < container_size_div2; ++i)
	{
		buffer = container[i];
		container[i] = container[container_size - i - 1];
		container[container_size - i - 1] = buffer;
	}

	return container;
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
void mtx_show(vector<vector<Type>> container)
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
	cout << mtx_size(container).first << " x " << mtx_size(container).second;
}

/*template <class Type>
void move(vector<Type> container, int start_pos, int amount, int end_pos)
{
	//start_pos - индекс начала копирования, amount - количество чисел, которых нужно скопировать, end_pos - индекс, куда нужно переместить
	vector<int> buffer_move;
	vector<int> buffer_remainder_l; //остаток, находящийся слева от end_pos
	vector<int> buffer_remainder_r; //остаток, находящийся справа от end_pos

	int container_size = container.size();
	int end_pos_range = end_pos + amount;

	try
	{
		int range = start_pos + amount;

		for (int i = start_pos; i < range; i++)
		{
			buffer_move.push_back(container[i]);
		}

		if (range > container_size)
		{
			throw range;
		}
	}

	catch (const int error)
	{
		cout << "out of range, reduce the 3 argument function move ";
	}

	int buffer_move_size = buffer_move.size();

	int range = start_pos + amount; //обнуление небуферизированых переменных
	for (int i = start_pos; i < range; i++)
	{
		container[i] = 0;
	}

	//==============buffer_l======================
	for (int i = start_pos; i >= 0; --i)
	{

		if (container[i] != 0)
		{
			buffer_remainder_l.push_back(container[i]);
		}
	}

	buffer_remainder_l = vec_reverse(buffer_remainder_l);

	//==============buffer_r======================
	for (int i = range; i < container_size; ++i)
	{
		if (container[i] != 0)
		{
			buffer_remainder_r.push_back(container[i]);
		}
	}

	container.clear();
	int buffer_remainder_l_size = buffer_remainder_l.size();
	int buffer_remainder_r_size = buffer_remainder_r.size();
777777777777777777777777777777777777777777777777777777777777777
	//==========glue buff L,buff move< buff R==============
	for (int i = 0;; ++i)
	{

		for (int k = 0; k < buffer_move_size; ++k)
		{
			for (int j = 0; j < buffer_remainder_r_size; ++j)
			{
				if (i < end_pos)
				{
					container.push_back(buffer_remainder_l[i]);
				}

				if (i >= end_pos && i < end_pos_range)
				{
					container.push_back(buffer_move[k]);
				}
				if (i > end_pos_range)
				{
					container.push_back(buffer_remainder_r[k]);
				}
			}
		}
		
	}
	//===============OUT======================

	cout << "container= ";
	for (int i = 0; i < container.size(); i++)
	{
		cout << container[i] << " ";
	}

	cout << endl;

	cout << "buffer move= ";
	for (int i = 0; i < buffer_move.size(); i++)
	{
		cout << buffer_move[i] << " ";
	}

	cout << endl;

	cout << "buffer remainder_l= ";
	for (int i = 0; i < buffer_remainder_l.size(); i++)
	{
		cout << buffer_remainder_l[i] << " ";
	}

	cout << endl;

	cout << "buffer remainder_r= ";
	for (int i = 0; i < buffer_remainder_r.size(); i++)
	{
		cout << buffer_remainder_r[i] << " ";
	}
}
*/
int main()
{

	vector<int> b = {1, 3, 5, 2, 7, 9, 12, 34};
	move(b, 3, 2, 1);

	getch();
	return 0;
}
