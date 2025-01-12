#include <iostream>
using namespace std;

class seseorang {
public:
	// pure virtual function
	virtual void pesan() = 0;
	// virtual function biasa
	// virtual void pesan() {
	//	   cout << "Pesan dari seseorang" << endl;
	// }
};

class joko : public seseorang {
public:
	// deklarasi
	void pesan() {
		//implementasi
		cout << "Pesan dari joko" << endl;
	}
};

class lia : public seseorang {
public:
	// deklarasi
	void pesan() {
		//implementasi
		cout << "Pesan dari lia" << endl;
	}
};

int main() {
	seseorang* obyek;
	joko a;
	lia b;

	obyek = &a;
	obyek->pesan();
	obyek = &b;
	obyek->pesan();

	// akses method pesan() dari class seseorang
	// a.seseorang::pesan();

	return 0;
}