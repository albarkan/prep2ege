#pragma once

#include <vector>
#include <string>

class big_integer {
	// ��������� ������� ��������� (1 000 000 000)
	static const int BASE = 1000000000;

	// ���������� ��������� �����
	std::vector<int> _digits;

	// ���� �����
	bool _is_negative;

	// �������� �����.
	big_integer(std::string str);

	// �������� ������� �����.
	void _remove_leading_zeros();

	// �������������� ������� ����� � �������.
	big_integer(signed long long l);
	big_integer(unsigned long long l);

	// �������� ����� � ����� � ��������������� � ������.
	friend std::ostream& operator <<(std::ostream& os, const big_integer& bi);
	operator std::string() const;

	// �������� ��� ����� �� ���������.
	friend bool operator ==(const big_integer& left, const big_integer& right);

	// �������� ��, ��� ���� ����� ������ �������.
	friend bool operator <(const big_integer& left, const big_integer& right);

	// ������� ����.
	const big_integer operator +() const;

	// ������� ���������.
	const big_integer operator -() const;

	// ��������� ���������.
	friend bool operator !=(const big_integer& left, const big_integer& right);
	friend bool operator <=(const big_integer& left, const big_integer& right);
	friend bool operator >(const big_integer& left, const big_integer& right);
	friend bool operator >=(const big_integer& left, const big_integer& right);

	// ��������.
	friend const big_integer operator +(big_integer left, const big_integer& right);

	// ���������.
	friend const big_integer operator -(big_integer left, const big_integer& right);

	// �������� � �����������.
	big_integer&operator +=(const big_integer& value);

	// ��������� � �����������.
	big_integer& operator -=(const big_integer& value);

	// ��������� - ���������.
	const big_integer operator++();
	const big_integer operator ++(int);
	const big_integer operator --();
	const big_integer operator --(int);
};
