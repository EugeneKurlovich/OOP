#pragma once

class Treangle
{

private:
	int x1, y1;
	int x2, y2;
	int x3, y3;
public:
	Treangle(const Treangle&A);
	Treangle(int t_x1, int t_y1, int t_x2, int t_y2, int t_x3, int t_y3);
	Treangle();
	void setdata(int t_x1, int t_y1, int t_x2, int t_y2, int t_x3, int t_y3);
	void getdata();
	void len_perimetr();
	bool type_treangle1();
	bool type_treangle2();
	bool type_treangle3();
	void all_type_treangles();
	int get_perimetr();
	~Treangle();
};

void max_perimetr(Treangle *arr, int size);
void min_perimetr(Treangle *arr, int size);
void result();