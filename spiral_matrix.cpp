#include "class.h"

int main()
{
	spiral_matrix matrix;
	matrix.print_matrix();
	matrix.fill_spiral();
	matrix.print_matrix();
	matrix.~spiral_matrix();
	return 0;
}
