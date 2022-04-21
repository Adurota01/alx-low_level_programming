#include "lists.h"
/**
 * print_list - prints all the element os a list_t list.
 * @h: singly linled list.[D[D[D[D[D[D[D[k[C[C[C[C[C[C[C[C
*/

size_t print_list(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nelem++;
	}
	return (nelem);
}[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[D */[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B
