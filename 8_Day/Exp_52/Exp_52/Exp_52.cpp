// Exp_52.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

int main()
{
	string name;
	
	int score;
	
	cout << "이름 입력 : ";
	cin >> name;

	cout << "점수 입력 : ";
	cin >> score;

	cout << name << "님의 점수는 "<< score << "점입니다." << endl;

}

