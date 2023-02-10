
//Прорешиваем массивы


#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>

int main()
{
	system("chcp 1251>nul");
	int n, m;
	int sum;
	std::cout << "Hello world!\n\n";
	//Задача 1.Сортировка половины массива
	/*std::cout << "Задача 1.\nИзначальный массив\n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % (10 + 1 - 1) + 1;//[1....10]
		std::cout << arr1[i] << ' ';
	}
	std:: cout << std::endl;




	//Общий алгоритм пузырьковой сортировки
	//for (int i = 4; i > 0; i--)
	//	for (int j = 0; j < i; j++)
		//	if (arr1[j] > arr1[j + 1])
		//		std::swap(arr1[j], arr1[j + 1]);
	


	//Быстрая сортировка

	std::sort(arr1, arr1+5);

	std::cout << "Итоговый массив: \n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n\n";*/

	//Задача 2.

	/*std::cout << "Задача 2\n. Температура за все дни января";
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (-1 + 1-(-30)) + (-30); //[-30.....-1] диапазон
		                  // rand()%30-30
		std::cout << arr2[i] << ", ";


	}
	std::cout << "\b\b.\n";
	sum = 0;               //сумма для ср.арифметического
	int counter = 0;       //кол-во дней для<n
	std::cout << "Введите максимальную границу температуры(от -30 до -1)->";
	std::cin >> n;
	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] < n)
			counter++;
	}
	std::cout << "Кол-во дней когда температура опускалась ниже" << n << "градусов" << counter << '\n';
	std::cout << "Средняя температура" << (double)sum / size2<<"\n\n";*/

	//Задача 3. Вхождение в диапазон.


	std::cout << "Задача 3\n Введите начало диапазона ->";
	std::cin >> n;
	std::cout << "Введите конец диапазона ->";
	std::cin >> m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	std::cout << "Результат:\n";
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 101;        //[0...100]    //rand()%x
		if (arr3[i] > n && arr3[i] < m)
			std::cout << i + 1 << ". " << arr3[i] << "!\n";
		else
			std::cout << i + 1 << ". " << arr3[i] << '\n';
	}
	std::cout << std::endl;

	//Модуль 4 занятие 32, система контроля версий



	return 0;
}