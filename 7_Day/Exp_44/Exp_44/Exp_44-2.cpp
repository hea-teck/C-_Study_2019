#include "stdafx.h"
#include "stdio.h"

//enum

enum EGameState { // ���� �����ص� �ڵ����� ��ȣ�� �����ȴ�. �˾Ƽ� �ڷ����� int�� �����Ѵ�.
	GAMESTATE_MAINMENU,
	GAMESTATE_PLAYING,
	GAMESTATE_PAUSED,
	GAMESTATE_GAMEOVER
};


int main() {
	EGameState currState = GAMESTATE_MAINMENU;
	
	while (true) {
		switch (currState) {
		case GAMESTATE_MAINMENU:
			break;
		case GAMESTATE_PLAYING:
			break;
		case GAMESTATE_PAUSED:
			break;
		case GAMESTATE_GAMEOVER:
			break;
		}
	}
}