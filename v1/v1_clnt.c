/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "v1.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = {25, 0};

float *
getmaior_50(vetor *argp, CLIENT *clnt)
{
	static float clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, getMaior,
								(xdrproc_t)xdr_vetor, (caddr_t)argp,
								(xdrproc_t)xdr_float, (caddr_t)&clnt_res,
								TIMEOUT) != RPC_SUCCESS)
	{
		return (NULL);
	}
	return (&clnt_res);
}

float *
getmenor_50(vetor *argp, CLIENT *clnt)
{
	static float clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, getMenor,
								(xdrproc_t)xdr_vetor, (caddr_t)argp,
								(xdrproc_t)xdr_float, (caddr_t)&clnt_res,
								TIMEOUT) != RPC_SUCCESS)
	{
		return (NULL);
	}
	return (&clnt_res);
}
