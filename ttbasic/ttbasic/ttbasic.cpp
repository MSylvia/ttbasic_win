// ttbasic.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include <stdlib.h> // for srand
#include <time.h> // for time

void basic(void);// prototype

int main() {
	srand((unsigned int)time(0)); // for RND function
	basic(); // call The BASIC
	return 0;
}