
//����������� �������


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
	//������ 1.���������� �������� �������
	/*std::cout << "������ 1.\n����������� ������\n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % (10 + 1 - 1) + 1;//[1....10]
		std::cout << arr1[i] << ' ';
	}
	std:: cout << std::endl;




	//����� �������� ����������� ����������
	//for (int i = 4; i > 0; i--)
	//	for (int j = 0; j < i; j++)
		//	if (arr1[j] > arr1[j + 1])
		//		std::swap(arr1[j], arr1[j + 1]);
	


	//������� ����������

	std::sort(arr1, arr1+5);

	std::cout << "�������� ������: \n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n\n";*/

	//������ 2.

	/*std::cout << "������ 2\n. ����������� �� ��� ��� ������";
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (-1 + 1-(-30)) + (-30); //[-30.....-1] ��������
		                  // rand()%30-30
		std::cout << arr2[i] << ", ";


	}
	std::cout << "\b\b.\n";
	sum = 0;               //����� ��� ��.���������������
	int counter = 0;       //���-�� ���� ���<n
	std::cout << "������� ������������ ������� �����������(�� -30 �� -1)->";
	std::cin >> n;
	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] < n)
			counter++;
	}
	std::cout << "���-�� ���� ����� ����������� ���������� ����" << n << "��������" << counter << '\n';
	std::cout << "������� �����������" << (double)sum / size2<<"\n\n";*/

	//������ 3. ��������� � ��������.


	std::cout << "������ 3\n ������� ������ ��������� ->";
	std::cin >> n;
	std::cout << "������� ����� ��������� ->";
	std::cin >> m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	std::cout << "���������:\n";
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 101;        //[0...100]    //rand()%x
		if (arr3[i] > n && arr3[i] < m)
			std::cout << i + 1 << ". " << arr3[i] << "!\n";
		else
			std::cout << i + 1 << ". " << arr3[i] << '\n';
	}
	std::cout << std::endl;

	//������ 4 ������� 32, ������� �������� ������



	return 0;
}