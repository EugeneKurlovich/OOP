#pragma once

class Treangle
{

private:
	int x1, y1;
	int x2, y2;
	int x3, y3;
	Treangle(int t_x1, int t_y1, int t_x2, int t_y2, int t_x3, int t_y3);
public:

	Treangle();
	Treangle(const Treangle&A);
	void setdata(int t_x1, int t_y1, int t_x2, int t_y2, int t_x3, int t_y3);
	void getdata();
	void len_perimetr();
	void type_treangle();
	int get_perimetr();
	~Treangle();
};