#pragma once
#include <exception>

	class exception_one : std::exception
	{
	public:
		virtual const char *er()
		{
			return "������ !!! ������� ���������� �� ������� �����!!!";
		}
	};

	class exception_two : public exception_one
	{
	public:
		virtual const char *er()
		{
			return "������!!! ������� ������ ������� �����!!!";
		}
	};

	class exception_three : public exception_one
	{
	public:
		virtual const char *er()
		{
			return "������!!! ���������� �������������� ��������!!!";
		}
	};

	class exception_four : public exception_one
	{
	public:
		virtual const char *er()
		{
			return "������ !!! ������� ������� �� 0!!!";
		}
	};

	class exception_five : public exception_one
	{
	public:
		virtual const char *er()
		{
			return "������ !!!����������� ������� ����� � ������ ���� ";
		}
	};