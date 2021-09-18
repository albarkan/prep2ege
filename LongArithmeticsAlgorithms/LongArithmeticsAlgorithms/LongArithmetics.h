#pragma once

#include <vector>
#include <string>

class big_integer {
	// основание системы счисления (1 000 000 000)
	static const int BASE = 1000000000;

	// внутреннее хранилище числа
	std::vector<int> _digits;

	// знак числа
	bool _is_negative;

	// Создание числа.
	big_integer(std::string str);

	// Удаление ведущих нулей.
	void _remove_leading_zeros();

	// Преобразование обычных чисел в длинные.
	big_integer(signed long long l);
	big_integer(unsigned long long l);

	// Печатаем число в потом и преобразовываем в строку.
	friend std::ostream& operator <<(std::ostream& os, const big_integer& bi);
	operator std::string() const;

	// Сравнить два числа на равенство.
	friend bool operator ==(const big_integer& left, const big_integer& right);

	// Проверим то, что одно число меньше другого.
	friend bool operator <(const big_integer& left, const big_integer& right);

	// Унарный плюс.
	const big_integer operator +() const;

	// Унарное отрицание.
	const big_integer operator -() const;

	// Операторы сравнения.
	friend bool operator !=(const big_integer& left, const big_integer& right);
	friend bool operator <=(const big_integer& left, const big_integer& right);
	friend bool operator >(const big_integer& left, const big_integer& right);
	friend bool operator >=(const big_integer& left, const big_integer& right);

	// Сложение.
	friend const big_integer operator +(big_integer left, const big_integer& right);

	// Вычитание.
	friend const big_integer operator -(big_integer left, const big_integer& right);

	// Сложение с присвоением.
	big_integer&operator +=(const big_integer& value);

	// Вычитание с присвоением.
	big_integer& operator -=(const big_integer& value);

	// Инкремент - декремент.
	const big_integer operator++();
	const big_integer operator ++(int);
	const big_integer operator --();
	const big_integer operator --(int);
};
