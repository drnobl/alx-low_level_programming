/**
 * print_list - check the code for Holberton School students.
 * @h: name of the list
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	int cnt = 0;

	while (h)
	{
		if (h.str != NULL)
		{
                        printf("[%d] %s\n", h.len, h.str);
                }
		else
		{
				printf("[0] (nil)\n");
		}
		count++;
		h = h.next;
	}
	return (count);
}
