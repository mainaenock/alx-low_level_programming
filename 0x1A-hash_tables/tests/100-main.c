#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    shash_table_t *ht;

    ht = shash_table_create(1024);
    shash_table_set(ht, "a", "1");
    shash_table_set(ht, "z", "26");
    shash_table_set(ht, "l", "12");
    shash_table_set(ht, "x", "24");
    shash_table_set(ht, "b", "2");
    shash_table_set(ht, "d", "4");
    shash_table_set(ht, "c", "3");
    shash_table_set(ht, "g", "7");
    shash_table_set(ht, "e", "5");
    shash_table_set(ht, "f", "6");
    shash_table_set(ht, "h", "8");
    shash_table_set(ht, "k", "11");
    shash_table_set(ht, "i", "9");
    shash_table_set(ht, "j", "10");
    shash_table_set(ht, "m", "13");
    shash_table_set(ht, "o", "15");
    shash_table_set(ht, "n", "14");
    shash_table_set(ht, "p", "16");
    shash_table_set(ht, "w", "23");
    shash_table_set(ht, "v", "22");
    shash_table_set(ht, "u", "21");
    shash_table_set(ht, "q", "17");
    shash_table_set(ht, "r", "18");
    shash_table_set(ht, "s", "19");
    shash_table_set(ht, "y", "25");
    shash_table_set(ht, "A", "1");
    shash_table_set(ht, "1", "1");
    shash_table_set(ht, "t", "20");
    printf("sorted dict accoding to keys\n");
    shash_table_print(ht);
    printf("reversing sort order...\n");
    shash_table_print_rev(ht);
    shash_table_delete(ht);
    return (EXIT_SUCCESS);
}
