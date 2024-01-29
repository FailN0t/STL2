// STL2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class B {
public:
	virtual void Test() {
		cout << "Test B" << endl << endl;
	}
};

class D:public B {
public:
	void Test() {
		cout << "Test D" << endl << endl;
	}
};

int main()
{
	B* ptr_b, obj_b;
	D* ptr_d, obj_d;
	
	ptr_d = dynamic_cast<D*> (&obj_b);
	if (ptr_d) {
		cout << "good";
		ptr_d->Test();
	}
	else {
		cout << "error" << endl;
	}

	ptr_b = dynamic_cast<B*> (&obj_b);
	if (ptr_b) {
		cout << "good ";
		ptr_b->Test();
	}
	else {
		cout << "error" << endl;
	}

	ptr_b = dynamic_cast<B*> (&obj_d);
	if (ptr_b) {
		cout << "good ";
		ptr_b->Test();
	}
	else {
		cout << "error" << endl;
	}

	ptr_d = dynamic_cast<D*> (ptr_b);
	if (ptr_d) {
		cout << "good";
		ptr_d->Test();
	}
	else {
		cout << "error" << endl;
	}

	ptr_b = dynamic_cast<B*> (ptr_d);
	if (ptr_b) {
		cout << "good ";
		ptr_b->Test();
	}
	else {
		cout << "error" << endl;
	}

	ptr_b = dynamic_cast<B*> (&obj_b);
	if (ptr_b) {
		cout << "good ";
		ptr_b->Test();
	}
	else {
		cout << "error" << endl;
	}

	ptr_d = dynamic_cast<D*> (ptr_b);
	if (ptr_d) {
		cout << "good";
		ptr_d->Test();
	}
	else {
		cout << "error" << endl;
	}
	

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
