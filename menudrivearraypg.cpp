#include <stdio.h>

#define MAX 100

int main()
{
    int arr[MAX];
    int n = 0;
    int choice, i, pos, value, key, found;

    while (1)
    {
        printf("\n\n------ MENU ------\n");
        printf("1. CREATE\n");
        printf("2. DISPLAY\n");
        printf("3. INSERT\n");
        printf("4. DELETE\n");
        printf("5. LINEAR SEARCH\n");
        printf("6. EXIT\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);

                if (n <= 0 || n > MAX)
                {
                    printf("Invalid size!\n");
                    n = 0;
                    break;
                }

                printf("Enter %d elements:\n", n);

                for (i = 0; i < n; i++)
                {
                    scanf("%d", &arr[i]);
                }

                printf("Array created successfully.\n");
                break;


            case 2:
                if (n == 0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    printf("Array elements are: ");

                    for (i = 0; i < n; i++)
                    {
                        printf("%d ", arr[i]);
                    }

                    printf("\n");
                }
                break;


            case 3:
                if (n >= MAX)
                {
                    printf("Array is full.\n");
                    break;
                }

                printf("Enter position to insert: ");
                scanf("%d", &pos);

                printf("Enter value to insert: ");
                scanf("%d", &value);

                if (pos < 1 || pos > n + 1)
                {
                    printf("Invalid position!\n");
                }
                else
                {
                    for (i = n; i >= pos; i--)
                    {
                        arr[i] = arr[i - 1];
                    }

                    arr[pos - 1] = value;
                    n++;

                    printf("Element inserted successfully.\n");
                }
                break;


            case 4:
                if (n == 0)
                {
                    printf("Array is empty.\n");
                    break;
                }

                printf("Enter position to delete: ");
                scanf("%d", &pos);

                if (pos < 1 || pos > n)
                {
                    printf("Invalid position!\n");
                }
                else
                {
                    value = arr[pos - 1];

                    for (i = pos - 1; i < n - 1; i++)
                    {
                        arr[i] = arr[i + 1];
                    }

                    n--;

                    printf("Deleted element is %d\n", value);
                }
                break;


            case 5:
                if (n == 0)
                {
                    printf("Array is empty.\n");
                    break;
                }

                printf("Enter element to search: ");
                scanf("%d", &key);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (arr[i] == key)
                    {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Element not found.\n");
                }
                break;


            case 6:
                printf("Program terminated.\n");
                return 0;


            default:
                printf("Invalid choice! Please enter 1 to 6.\n");
        }
    }

    return 0;
}