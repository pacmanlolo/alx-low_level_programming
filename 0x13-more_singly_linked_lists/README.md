0x13-more_singly_linked_lists

Print list : A function that prints all the elements of a listint_t list.

Prototype: size_t print_listint(const listint_t *h);

Return: the number of nodes.

Format: see example.

You are allowed to use printf

Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/0-main.c 0-print_listint.c -o a

List length : A function that returns the number of elements in a linked listint_t list.

Prototype: size_t listint_len(const listint_t *h);

Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/1-main.c 1-listint_len.c -o b

Add node : A function that adds a new node at the beginning of a listint_t list.

Prototype: listint_t *add_nodeint(listint_t **head, const int n);

Return: the address of the new element, or NULL if it failed.

Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/2-main.c 2-add_nodeint.c 0-print_listint.c -o c

Add node at the end : A function that adds a new node at the end of a listint_t list.

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);

Return: the address of the new element, or NULL if it failed.

Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d

Free list : A function that frees a listint_t list.

Prototype: void free_listint(listint_t *head);

Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c -o e

Free : A function that frees a listint_t list.

Prototype: void free_listint2(listint_t **head);

The function sets the head to NULL

Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/5-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c -o f

Pop : A function that deletes the head node of a listint_t linked list, and returns the head node's data (n).

Prototype: int pop_listint(listint_t **head);

If the linked list is empty return 0.

Compile the code this way:  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/6-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 6-pop_listint.c -o g

Get node at index : A function that returns the nth node of a listint_t linked list.

Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

Where index is the index of the node, starting at 0.

If the node does not exist, return NULL.

Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/7-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 7-get_nodeint.c -o h

Sum list : A function that returns the sum of all the data (n) of a listint_t linked list.

Prototype: int sum_listint(listint_t *head);

If the list is empty, return 0.

Compile the code thi way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/8-main.c 3-add_nodeint_end.c 5-free_listint2.c 8-sum_listint.c -o i

Insert : A function that inserts a new node at a given position.

Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

Where idx is the index of the list where the new node should be added. Index starts at 0.

Returns: the address of the new node, or NULL if it failed.

If it is not possible to add a new node at index idx, do not add the new node and return NULL

Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/9-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 9-insert_nodeint.c -o j
