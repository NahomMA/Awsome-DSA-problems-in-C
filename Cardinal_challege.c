
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_SIZE(a) (sizeof(a)/sizeof((a)[0]))

// ------- begin your code ------------------

int fib (int N)
{
    return 0;
}

void reverse (char *str)
{
}

void sort(int a[], int size)
{
}

//-list--
typedef struct list {
    struct list *next;
    int i;
} list;

void list_add(list **ll, int i)
{
}

void list_print (list **ll)
{
}

void list_reverse(list **ll)
{
}
//-list--

// ------- end your code ------------------



// ------- tester code ------------------

static void test_fibonacci()
{
    printf ("\n----------- %s -----------\n", __FUNCTION__);
    printf ("fib 10: ");

    for (int i=1; i<=10; i++)
        printf ("%d ", fib(i));
    printf ("\n");
}

static void test_sort()
{
    int a[] = {43, 47, 81, 39, -64, 0};
    int b[] = {25, 63, 67, 40, 0, 50};
    int c[] = {};
    int d[] = {22};
    int e[] = {78, 31};

    struct {
        int *array;
        int size;
    } data[] = {
        {a, ARRAY_SIZE(a)},
        {b, ARRAY_SIZE(b)},
        {c, ARRAY_SIZE(c)},
        {d, ARRAY_SIZE(d)},
        {e, ARRAY_SIZE(e)},
    };

    printf ("\n----------- %s -----------\n", __FUNCTION__);


    for (int count=0; count < ARRAY_SIZE(data); count++)
    {
        for (int i=0; i < data[count].size; i++)
            printf("%d ", data[count].array[i]);

        printf(" => ");

        sort(data[count].array, data[count].size);

        for (int i=0; i<data[count].size; i++)
            printf("%d ", data[count].array[i]);

        printf ("\n");
    }
}

static void test_reverse()
{
    char words[][10] = {"one", "two", "racecar", "", "four", "a"};

    printf ("\n----------- %s -----------\n", __FUNCTION__);

    for (int i=0; i<ARRAY_SIZE(words); i++) {
        printf ("[%s] => ", words[i]);
        reverse(words[i]);
        printf (" [%s]\n", words[i]);
    }
}

static void test_list()
{
    list *ll = NULL;

    printf ("\n----------- %s -----------\n", __FUNCTION__);

    list_print(&ll);

    list_add(&ll, 1);
    list_add(&ll, 5);
    list_add(&ll, 3);
    list_add(&ll, 6);

    list_print(&ll);

    list_reverse(&ll);
    list_print(&ll);

    list_reverse(&ll);
    list_print(&ll);
}

int main()
{
    test_fibonacci();
    test_sort();
    test_reverse();
    test_list();

    return 0;
}
nahom_c.c
Displaying nahom_c.c.
