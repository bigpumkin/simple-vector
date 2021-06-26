# О библиотеке 
Библиотека simple vector предназначена для упрощения работы с веторами.

#### Функции для работы с одномерными массивами/векторами


- vec_show(name_vec) - выводит вектор в консоль  в консоль

- vec_reverse(name_vec) - возвращает реверснутый вектор

- vec_move(name_vec,start_pos,amount,target) - перемещает векторе amount чисел с позиции start_pos на позицию target
```
//Пример//
vector<int> pumpkin = {1, 3, 5, 7, 12};
vec_show(pumpkin);

vec_move(pumpkin, 3, 2, 1);
vec_show(pumpkin);
==Вывод==
1 3 5 7 12
1 7 12 3 5
//======//
```

#### Функции для работы с двумерными массивами/векторами

- mtx_init(row,col) - создает двумерную матрицу векторов, заполнение с клавиатуры. row - количество строк, col - количество столбцов. row,col - int

- mtx_show(name_mtx) - выводит двумерную матрицу векторов в консоль

- mtx_size(name_mtx) - возращает размер матрицы в виде pair. name_pair.firsr - row, name_pair.second -col

- mtx_size_show(name_mtx) - выводит размер матрицы в формате row x col в консоль

```
//Пример//
vector<vector<int>> pumpkin = mtx_init(3, 3);
cout << endl;
mtx_show(pumpkin);
mtx_size_show(pumpkin);
//======//
```
