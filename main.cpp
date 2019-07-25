#include<stdio.h>
#include<stdint.h>
#include "whitebox-homework1.h"

int main()
{
	uint8_t key[16];

	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			for (int k = 0; k < 16; k++)
			{
				if (sbox[j][k] == tbox[0][i][0])
				{
					key[i] = j * 16 + k;
				}
			}
		}
	}
	inverse_sr(key);
	for (int i = 0; i < 16; i++) {
		printf("%c ", key[i]);
	}
	printf("\n");
}