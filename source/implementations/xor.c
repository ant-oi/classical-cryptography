#include "../headers/xor.h"

void xor
(
	const int size,
	char* from,
	int key,
	char* to
)
{
	int i;
	for(i = 0;i < size; ++i)
		*to++ = from[i] ^ key;
	*to = '\0';
}

void xor_w
(
	const int size,
	char* from,
	char* key,
	char* to
)
{
	int i;
	for(i = 0;i < size; ++i)
		*to++ = from[i] ^ key[i];
	*to = '\0'
}