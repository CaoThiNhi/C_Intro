#include <stdio.h>

int main()
{
	float skm,smile,sinch,smet;

	printf("Bo chuyen doi don vi\n");
	printf("Chuyen tu km sang mile: So km:");
	scanf("%f", &skm);
	printf("==>Ket qua: %.3f miles\n", 0.621*skm);
	printf("Chuyen tu mile sang km: So mile:");
	scanf("%f", &smile);
	printf("==>Ket qua: %.3f kms\n", 1.609*smile);
	printf("Chuyen tu meter sang inch: So meter:");
	scanf("%f", &smet);
	printf("==>Ket qua: %.3f inches\n", 100/2.54*smet);

	return 0;

	
}
