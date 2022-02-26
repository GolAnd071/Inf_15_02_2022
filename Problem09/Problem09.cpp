﻿// Problem09.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct Vector
{
	int x, y, z;
};

Vector sum(Vector a, Vector b)
{
	Vector ans = { a.x + b.x, a.y + b.y, a.z + b.z };
	return ans;
}

const int N = 10;

int main()
{
	Vector res = { 0, 0, 0 };
	for (int i = 0; i < N; ++i)
	{
		Vector tmp;
		std::cin >> tmp.x >> tmp.y >> tmp.z;
		res = sum(res, tmp);
	}
	std::cout << res.x << ' ' << res.y << ' ' << res.z << '\n';
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.