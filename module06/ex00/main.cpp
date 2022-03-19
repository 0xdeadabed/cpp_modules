/**
 * @author   : Hajar Sabir (wubbalubba@dub.dub)
 * @created  : 3/17/22.
 */

#include "Scalar.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "Usage: <program> <a string literal>" << std::endl;
		return 127;
	}
	Scalar::convert(argv[1]);
	return 0;
}
