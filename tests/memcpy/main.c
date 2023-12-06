#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n);

int main() {
	// Test cases
	char src1[] = "Hello, World!";
	char dest1[20];
	char src2[] = "Testing";
	char dest2[10];
	char src3[] = "12345";
	char dest3[10];
	char src4[] = "";
	char dest4[10];

	// Test 1: Copy a string to another
	printf("Test 1:\n");
	ft_memcpy(dest1, src1, strlen(src1) + 1);
	printf("ft_memcpy result: %s\n", dest1);
	printf("Comparison: %s\n", strcmp(dest1, src1) == 0 ? "PASSED" : "FAILED");

	// Test 2: Copy a shorter string to another
	printf("Test 2:\n");
	ft_memcpy(dest2, src2, strlen(src2) + 1);
	printf("ft_memcpy result: %s\n", dest2);
	printf("Comparison: %s\n", strcmp(dest2, src2) == 0 ? "PASSED" : "FAILED");

	// Test 3: Copy a string to another with a smaller buffer
	printf("Test 3:\n");
	ft_memcpy(dest3, src3, strlen(src3) + 1);
	printf("ft_memcpy result: %s\n", dest3);
	printf("Comparison: %s\n", strcmp(dest3, src3) == 0 ? "PASSED" : "FAILED");

	// Test 4: Copy an empty string to another
	printf("Test 4:\n");
	ft_memcpy(dest4, src4, strlen(src4) + 1);
	printf("ft_memcpy result: %s\n", dest4);
	printf("Comparison: %s\n", strcmp(dest4, src4) == 0 ? "PASSED" : "FAILED");

	return 0;
}