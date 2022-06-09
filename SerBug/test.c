#include <stdlib.h>

double sum_double(double a, double b, double c) {
	return a + b + c;
}

void* test_malloc_d3(double a, double b, double c) {
	size_t sum = (int)(a + b + c);
	return malloc(sum);
}

void* test_malloc_d2(double a, double b) {
	size_t sum = (int)(a + b);
	return malloc(sum);
}

void* test_malloc_d1(double a) {
	size_t sum = (int)a;
	return malloc(sum);
}

void* test_malloc_f3(float a, float b, float c) {
	size_t sum = (int)(a + b + c);
	return malloc(sum);
}

void* test_malloc_df2(double a, float b) {
	size_t sum = (int)(a + b);
	return malloc(sum);
}

void test_free(void* mem) {
	free(mem);
}
