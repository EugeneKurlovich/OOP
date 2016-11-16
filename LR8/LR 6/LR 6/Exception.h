#pragma once
#include <exception>

	class exception_one : std::exception
	{
	public:
		virtual const char *er()
		{
			return "Ошибка !!! Попытка извлечения из пустого стека!!!";
		}
	};

	class exception_two : public exception_one
	{
	public:
		virtual const char *er()
		{
			return "Ошибка!!! Попытка вывода пустого стека!!!";
		}
	};

	class exception_three : public exception_one
	{
	public:
		virtual const char *er()
		{
			return "Ошибка!!! Добавление отрицательного элемента!!!";
		}
	};

	class exception_four : public exception_one
	{
	public:
		virtual const char *er()
		{
			return "Ошибка !!! Попытка деления на 0!!!";
		}
	};

	class exception_five : public exception_one
	{
	public:
		virtual const char *er()
		{
			return "Ошибка !!!Копирование пустого стека в другой стек ";
		}
	};