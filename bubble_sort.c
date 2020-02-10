#include<stdio.h>
#include<stdlib.h>

#define MAX 20 //Maximum number of arguments accepted

int list[MAX];

int bubble_sort(int size);

int main(int argc, char *argv[])
{
    int list_size = argc - 1;

    if (list_size > MAX)
        return 1;

    for (int i = 0; i < argc - 1; i++)
    {
        list[i] = atoi(argv[i + 1]);
    }

    bubble_sort(argc - 1);

    for (int i = 0; i < argc - 1; i++)
    {
        printf("%i\n", list[i]);
    }
}

int bubble_sort(int size)
{
    int swaps = 1;
    while (swaps > 0)
    {
        swaps = 0;
        for (int i = 0; i < size - 1; i++)
        {
            int first = list[i];
            int second = list[i + 1];
            if (first > second)
            {
                list[i] = second;
                list[i + 1] = first;
                swaps++;
            }
        }
    }
}