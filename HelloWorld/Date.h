#pragma once
class Date
{
private:
	int m_year{};
	int m_month{};
	int m_day{};

public:
	Date(int year, int month, int day);

	void print() const;  // const means this function does not modify the object

	int getYear() const { return m_year; }
	int getMonth() const { return m_month; }
	int getDay() const { return m_day; }
};