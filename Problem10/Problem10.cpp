// Problem10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct Protoss
{
	unsigned long long int id;
	unsigned int health, shield, position[2];
	char name[100];
};

unsigned int count_wounded(Protoss* army, unsigned int n, unsigned int threshold)
{
	int ans = 0;
	for (int i = 0; i < n; ++i)
		if (army[i].health < threshold)
			++ans;
	return ans;
}

int main()
{
	Protoss army[10];
	for (int i = 0; i < 10; ++i) {
		army[i].id = i;
		std::cin >> army[i].health >> army[i].shield >> army[i].position[0] >> army[i].position[1] >> army[i].name;
	}
	std::cout << count_wounded(army, 10, 100) << '\n';
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
