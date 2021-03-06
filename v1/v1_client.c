/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "v1.h"
#include <math.h>

void lab1_50(char *host)
{
	CLIENT *clnt;
	float *result_1;
	vetor getmaior_50_arg;
	float *result_2;
	vetor getmenor_50_arg;

#ifndef DEBUG
	clnt = clnt_create(host, LAB1, V1, "udp");
	if (clnt == NULL)
	{
		clnt_pcreateerror(host);
		exit(1);
	}
#endif /* DEBUG */

	/*
		Calcula o vetor[i] do lado do cliente e armazena nas suas respectivas structs
		*/
	for (int i = 0; i < 10; i++)
	{
		getmaior_50_arg.vetor[i] = sqrt(pow(i - 10 / 2, 2));
		getmenor_50_arg.vetor[i] = sqrt(pow(i - 10 / 2, 2));
	}

	/*
		Chama o getMenor e getMaior passando os vetores calculados do lado do cliente
	*/
	result_2 = getmenor_50(&getmenor_50_arg, clnt);
	if (result_2 == (float *)NULL)
	{
		clnt_perror(clnt, "call failed");
	}
	printf("Menor número do vetor: %f\n", *result_2);
	result_1 = getmaior_50(&getmaior_50_arg, clnt);
	if (result_1 == (float *)NULL)
	{
		clnt_perror(clnt, "call failed");
	}
	printf("Maior número do vetor: %f\n", *result_1);
#ifndef DEBUG
	clnt_destroy(clnt);
#endif /* DEBUG */
}

int main(int argc, char *argv[])
{
	char *host;

	if (argc < 2)
	{
		printf("usage: %s server_host\n", argv[0]);
		exit(1);
	}
	host = argv[1];
	lab1_50(host);
	exit(0);
}
