//
// Created by Hajar Sabir on 2/28/22.
//

#include "Karen.h"

int main(int argc, char *argv[])
{
	Karen *karen;

	karen = new Karen;
	for (int i = 1; i < argc; i++) {
		if (i > 1) std::cout << std::endl;
		karen->complain(argv[i]);
	}
	delete karen;

	return 0;
}
