#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x; 
public:
	bidangDatar() { 
		x = 0;
	}
	virtual void input() {}
		virtual float Luas(int a) { return 0; } 
	virtual float Keliling(int a) { return 0; }
	void setX(int a) { 
		this->x = a;
	}
	int getX() { 
		return x;
	}
};
class Lingkaran :public bidangDatar {
public :

	Lingkaran(int a)x :
		bidangDatar(a)
	{
		cout << "lingkaran dibuat\n" << endl;
	}
};
class Bujursangkar :public bidangDatar {
public:

	Bujursangkar(int a) :
		bidangDatar(a)
	{
		cout << "Bujursangkar dibuat\n" << endl;
	}
};
int main() {  }