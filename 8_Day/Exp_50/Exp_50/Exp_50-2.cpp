#include "stdafx.h"
#include "iostream"

using namespace std;

int main() {
	int arr[10] = { 3,1,4,1,5,9,2,6,5,3 };

	for (int &n : arr) {
		// ex) int n = arr[6] �϶�, n++�� ������ ... n�� �ٲ�ٰ� arr[6]�� �ٲ�� ���� �ƴϴ�.
		// ���۷��� ���� &n�� �̿��ϰԵǸ� int &n = arr[6] ...
		// �ٵ�... �� �迭 ���� 1�� �����ұ�..... ��� �����غ���!
		cout << n << ' ';
		n++;
	}
	cout << endl;

	for (int n : arr) {
		cout << n << ' ';
	}
	cout << endl;
}