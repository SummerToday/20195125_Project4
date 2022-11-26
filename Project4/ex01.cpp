#include <iostream>

using namespace std;

static int b = 0;
class Box {
public:
	int l, w, h, v;
	Box(int l = 0, int w = 0, int h = 0) :l(l), w(w), h(h), v(l* w* h) {};
	bool operator< (Box box)
	{
		return v < box.v;
	}

	void print() {
		++b;
		cout << "���� #" << b << endl;
		cout << "������ ����: " << l << endl;
		cout << "������ �ʺ�: " << w << endl;
		cout << "������ ����: " << h << endl;
		cout << "������ ����: " << l * w * h << endl;

	}
};
int main() {
	int l, w, h, v;

	Box a(10, 10, 10), b(20, 20, 20);

	a.print();
	cout << endl;
	b.print();
	cout << endl;
	cout << (a < b);

}