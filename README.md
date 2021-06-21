# Функции для работы с одномерными массивами/векторами


- vec_show(name_vec) - выводит вектор в консоль  в консоль

- vec_reverse(name_vec) - возвращает реверснутый вектор

# Функции для работы с двумерными массивами/векторами

- mtx_init(row,col) - создает двумерную матрицу векторов, заполнение с клавиатуры. row - количество строк, col - количество столбцов. row,col - int

- mtx_size_show(name_mtx) - выводит двумерную матрицу векторов в консоль

- mtx_size(name_mtx) - возращает размер матрицы в виде pair. name_pair.firsr - row, name_pair.second -col

- mtx_size_show(name_mtx) - выводит размер матрицы в формате row x col в консоль

```
//Пример//
vector<vector<int>> pumpkin = mtx_init(3, 3);
cout << endl;
mtx_show(pumpkin);
cout << endl;
mtx_size_show(pumpkin);
//======//
```
