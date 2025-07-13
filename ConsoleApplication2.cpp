#include <iostream>
#include <windows.h>
#include <algorithm>
using namespace std;

class Vector {
	unsigned int capacity = 10; // при створенні масиву, він одразу для себе робить запас пам'яті на 10 елементів
	int* data = new int[capacity];
	unsigned int length = 0; // фактична (реальна) кількість елементів, присутніх у масиві

public:
	Vector() {}


	void AddToBack(int value) {
		if (length < capacity) // якщо виділенної зарання пам'яті ВИСТАЧАЄ для додавання чергового елемента
			data[length] = value;
		else { // АЛЕ ЯКЩО МІСЦЯ ВЖЕ НЕ ВИСТАЧАЄ, ТО
			// треба перевиділити пам'ять
			capacity *= 2; // збільшуємо запас пам'яті у 2 рази (можна і в 1.5, можна і в 1.2)
			// якщо був запас 10 елементів, то стане 20
			// якщо запас був 20 елементів, то стане 40, і тд
			int* temp = new int[capacity]; // новий масив буде в 2 рази більше по пам'яті
			// але в старому масиві все ще усього 10 елементів, тому цикл треба написати так, щоб зачепити лише старі елементі зі старого масиву
			for (int i = 0; i < length; i++) {
				temp[i] = data[i];
			}
			// в новий масив в кінець (по індексу 10) пишеться ОДИНАДЦЯТИЙ елемент
			temp[length] = value;
			delete[] data; // в цілях запобігання витокам пам'яті, чистимо пам'ять від старого масиву
			data = temp; // переставляємо покажчик на новий масив
		}
		length++;
	}

	void AddToFront(int value) {
		if (length < capacity) { // ще є вільна пам'ять під черговий елмент
			// перевиділяти пам'ять на 1 елемент кожен раз - погана ідея (якщо елементів буде більше ніж 300000+ то все буде відбуватися максимально повільно)
			// при тому що пам'ять вже виділена (є кепесіті), то доведеться зробити зсув для всіх існуючих елементів на 1 вправо
			for (int i = length - 1; i >= 0; i--) { // зсув іде справа наліво (тому що якщо робити його зліва направо, з початку масива в кінець) то можна втратити існуючі елементи
				data[i + 1] = data[i];
			}
			data[0] = value;
		}
		else { // АЛЕ ЯКЩО МІСЦЯ ВЖЕ НЕ ВИСТАЧАЄ, ТО
			// треба перевиділити пам'ять
			capacity *= 2; // збільшуємо запас пам'яті у 2 рази (можна і в 1.5, можна і в 1.2)
			// якщо був запас 10 елементів, то стане 20
			// якщо запас був 20 елементів, то стане 40, і тд
			int* temp = new int[capacity]; // новий масив буде в 2 рази більше по пам'яті
			// але в старому масиві все ще усього 10 елементів, тому цикл треба написати так, щоб зачепити лише старі елементі зі старого масиву
			for (int i = 0; i < length; i++) {
				temp[i + 1] = data[i];
			}
			// в новий масив в початок (по індексу 0) пишеться ОДИНАДЦЯТИЙ елемент
			temp[0] = value;
			delete[] data; // в цілях запобігання витокам пам'яті, чистимо пам'ять від старого масиву
			data = temp; // переставляємо покажчик на новий масив
		}
		length++;
	}

	void RemoveFromBack() {
		if (length == 0) {
			cout << "масив пустий, видаляти НЕМА ЧОГО!\n";
			return;
		}
		length--;
	}

	// написати:
	// метод видаляє значення по індексу 0
	void RemoveFromFront() {
		if (length == 0) {
			cout << "Масив пустий!!!\n";
			return;
		}
		else {
			for (int i = 0; i < length - 1; i++) {
				data[i] = data[i + 1]; // зсуваємо всі елементи на 1 вліво
			}
			length--;
		}
	}

	//  метод який вставляє значення по індексу без втрати елемента по індексу
	void Insert(int value, int index) {
		if (index < 0 || index > length) {
			cout << "Індекс за межою масиву!\n";
			return;
		}
		if (length < capacity) { 
			for (int i = length - 1; i >= index; i--) { 
				data[i + 1] = data[i];
			}
			data[index] = value; 
		}
		else { 
			capacity *= 2; 
			int* temp = new int[capacity];
			for (int i = 0; i < index; i++) {
				temp[i] = data[i];
			}
			temp[index] = value;
			for (int i = index; i < length; i++) {
				temp[i + 1] = data[i];
			}
			delete[] data; 
			data = temp;
		}
		length++;
	}

	// метод видаляє елемент по індесу
	void RemoveByIndex(int index) {
		if (index < 0 || index >= length) {
			cout << "Індекс за межою масиву!\n";
			return;
		}
		for (int i = index; i < length - 1; i++) {
			data[i] = data[i + 1]; 
		}
		length--;
	}


	// метод видаляє всі вказані значення з масиву
	void RemoveByValue(int value) {
		if (length == 0) {
			cout << "Масив пустий!!!\n";
		}
		else {
			for (int i = 0; i < length; i++) {
				if (data[i] == value) {
					RemoveByIndex(i); // видаляємо елемент по індексу
					i--;
				}
			}
		}
	}

	// метод випадковим чином перемішує елементи в масиві
	void Shuffle() {
		if (length == 0) {
			cout << "Масив пустий!!!\n";
			return;
		}
		for (int i = 0; i < length; i++) {
			int randIndex = rand() % length; // випадковий індекс
			swap(data[i], data[randIndex]); // обмін значеннями
		}
	}

	// метод сортує масив за зростанням
    void Sort() {
		if (length == 0) {
			cout << "Масив пустий!!!\n";
			return;
		}
		sort(data, data + length); // бібліотека для сортування
	}

	// метод змінює порядок слідування елементів на протилежний
	void Reverse() {
		if (length == 0) {
			cout << "Масив пустий!!!\n";
			return;
		}
		for (int i = 0; i < length / 2; i++) {
			swap(data[i], data[length - 1 - i]); // обмін значеннями з початку і кінця
		}
	}

	// перевантажити:
	// []
	int& operator[](unsigned int index) {
		if (index >= length)
			throw out_of_range("Індекс за межами масиву");
		return data[index];
	}

	const int& operator[](unsigned int index) const {
		if (index >= length)
			throw out_of_range("Індекс за межами масиву");
		return data[index];
	}

	// == та !=
	bool operator==(const Vector& other) const {
		if (this->length != other.length)
			return false;
		for (unsigned int i = 0; i < length; ++i) {
			if (this->data[i] != other.data[i])
				return false;
		}
		return true;
	}

	bool operator!=(const Vector& other) const {
		return !(*this == other);
	}

	// гетери для отримання даних масиву та його довжини, для перевантаження оператора виводу
	int* GetData() const {
		return data;
	}

	unsigned int GetLength() const {
		return length;
	}

	void Print() const {
		if (length == 0) {
			cout << "масив пустий!\n";
		}
		else {
			cout << "ємність масиву: " << capacity << "\n";
			cout << "елементи масиву: ";
			for (int i = 0; i < length; i++)
			{
				cout << data[i] << " ";
			}
			cout << "\n";
		}
	}

	~Vector() {
		cout << "D-TOR\n";
		if (data != nullptr) {
			delete[] data;
		}
	}

	Vector(const Vector& original) {
		cout << "COPY C-TOR\n";
		this->length = original.length;
		this->capacity = original.capacity;
		this->data = new int[capacity];
		for (int i = 0; i < length; i++)
			this->data[i] = original.data[i];
	}
};

// перевантажити:
// cin >> 
istream& operator>>(istream& left, Vector& right) {
	int value;
	cout << "Введіть значення для додавання в масив: ";
	cin >> value;
	right.AddToFront(value);
	return cin;
}

// cout <<
ostream& operator<<(ostream& left, const Vector& v) {
	if (v.GetLength() == 0) {
		cout << "Масив пустий!!!\n";
		return cout;
	}
	
	for (unsigned int i = 0; i < v.GetLength(); ++i) {
		cout << v[i];
		if (i != v.GetLength() - 1) cout << ", ";
	}
	return cout;
}

int main() {
	SetConsoleOutputCP(1251);
	srand(time(0));

	Vector a;

	for (int i = 0; i < 100; i++) {
		a.AddToFront(i);
	}
	a.Print();

	a.RemoveFromFront();
	a.Print();

	a.Insert(25, 6);
	a.Print();

	a.RemoveByIndex(5);
	a.Print();

	a.RemoveByValue(92);
	a.Print();

	a.Shuffle();
	a.Print();

	a.Sort();
	a.Print();

	a.Reverse();
	a.Print();

	Vector b;
	for (int i = 0; i < 100; i++) {
		b.AddToFront(i);
	}

	if (a != b) {
		cout << "<<<Масиви різні>>>\n";
	}
	else {
		cout << "<<<Масиви однакові>>>\n";
	}

	Vector c;
	for (int i = 0; i < 100; i++) {
		c.AddToFront(i);
	}

	if (b == c) {
		cout << "<<<Масиви однакові>>>\n";
	}
	else {
		cout << "<<<Масиви різні>>>\n";
	}

	cout << "Введіть значення для додавання в масив: ";
	cin >> a;
	cout << a << "\n";
	cout << "***" << a[0] << "***\n";

}