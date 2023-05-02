/**
 * list_len - A function that returns the number of elements in a linked list_t list.
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

   while (h)
   {
	   count++;
	   h = h->next;
   }
   return (count);
}
