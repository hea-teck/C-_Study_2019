#include "stdafx.h"
#include "iostream"

int n;
void set() {
	n = 10;
}

namespace huitaek {
	int n;
	void set() {
		n = 20;
	}

	namespace google {
		int n;
		void set() {
			n = 30;
		}
	}
}

int main() {
	using namespace std;
	using namespace huitaek;

	::set(); // :: ���� �Ұ�
	huitaek::set(); // huitaek:: ���� �Ұ�
	huitaek::google::set(); // huitaek:: ���� ����

	cout << ::n << endl;
	cout << huitaek::n << endl;
	cout << huitaek::google::n << endl;
}