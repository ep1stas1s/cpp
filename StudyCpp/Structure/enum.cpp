// enum
#include <stdio.h>

//const int GAMESTATE_MAINMENU = 0;
//const int GAMESTATE_PLAYING = 1;
//const int GAMESTATE_PAUSED = 2;
//const int GAMESTATE_GAMEOVER = 3;

// 순서를 알아서 정해줌
enum EGameState {
	GAMESTATE_MAINMENU,
	GAMESTATE_PLAYING,
	GAMESTATE_PAUSED,
	GAMESTATE_GAMEOVER
};

int main() {
	//int currState = GAMESTATE_MAINMENU;
	EGameState currState = GAMESTATE_MAINMENU;

	while (true) {
		switch(currState) {
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