#include <stdio.h>
int main()
{
    int i, j, k = 0, arr1[100], arr2[100], arr3[200], size1, size2, size3, user_input, element, user_input2, position, index, flag, temp, bin, sum = 0, mul = 1;
    printf("Enter the size of array : ");
    scanf("%d", &size1);
    printf("Enter %d elements = \n", size1);
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("The array is = [ ");
    for (i = 0; i < size1; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("]\n");
    printf("What would you like to do with this array\n1 = Insertion\n2 = Searching\n3 = Deletion\n4 = Sorting\n5 = Largest element\n6 = Smallest element\n7 = Merge array\n8 = Reverese array\n9 = Arithmatic operation\nChoose one : ");
    scanf("%d", &user_input);
    switch (user_input)
    {
    case 1:
        printf("Where you want to insert \n1 = In the Beginning\n2 = At the End\n3 = At Custom location\n");
        scanf("%d", &user_input2);
        switch (user_input2)
        {
        case 1:
            printf("Enter the element you want ot insert : ");
            scanf("%d", &element);
            for (i = size1 - 1; i >= 0; i--)
            {
                arr1[i + 1] = arr1[i];
            }
            arr1[0] = element;
            size1++;
            printf("The array is = [ ");
            for (i = 0; i < size1; i++)
            {
                printf("%d ", arr1[i]);
            }
            printf("]\n");
            break;
        case 2:
            printf("Enter the element you want ot insert : ");
            scanf("%d", &element);
            arr1[size1] = element;
            size1++;
            printf("The array is = [ ");
            for (i = 0; i < size1; i++)
            {
                printf("%d ", arr1[i]);
            }
            printf("]\n");
            break;
        case 3:
            printf("Enter the element you want ot insert : ");
            scanf("%d", &element);
        check1:
            printf("Enter the position you want ot insert : ");
            scanf("%d", &position);
            if (position > size1 || position < 0)
            {
                printf("Invalid input\nEnter the correct position\n");
                goto check1;
            }
            else
            {
                for (i = size1 - 1; i >= position - 1; i--)
                {
                    arr1[i + 1] = arr1[i];
                    arr1[position] = element;
                }
                size1++;
                printf("The array is = [ ");
                for (i = 0; i < size1; i++)
                {
                    printf("%d ", arr1[i]);
                }
                printf("]\n");
                break;
            }
        }
        break;
    case 2:
        printf("Enter the element you want search : ");
        scanf("%d", &element);
        for (i = 0; i < size1; i++)
        {
            if (arr1[i] == element)
            {
                printf("Yes, the element found in array at index %d", i + 1);
            }
            else
            {
                printf("Element not found");
            }
        }
        break;
    case 3:
        printf("What you want to delete\n1 = Index\n2 = Element\n");
        scanf("%d", &user_input2);
        switch (user_input2)
        {
        case 1:
            printf("Enter the index you want to delete : ");
            scanf("%d", &index);
            if (index > size1 || index < 0)
            {
                printf("Invalid input\nEnter the correct index.\n");
            }
            else
            {
                for (i = index - 1; i < size1; i++)
                {
                    arr1[i] = arr1[i + 1];
                }
                size1--;
            }
            printf("The array is = [ ");
            for (i = 0; i < size1; i++)
            {
                printf("%d ", arr1[i]);
            }
            printf("]\n");
            break;
        case 2:
            printf("Enter the element you want delete : ");
            scanf("%d", &element);
            for (i = 0; i < size1; i++)
            {
                if (arr1[i] == element)
                {
                    flag = i;
                }
            }
            for (j = flag; j < size1; j++)
            {
                arr1[j] = arr1[j + 1];
            }
            size1--;
            printf("The array is = [ ");
            for (i = 0; i < size1; i++)
            {
                printf("%d ", arr1[i]);
            }
            printf("]\n");
        }
        break;
    case 4:
        printf("1 = Ascending\n2 = Descebding\nCHoose one : ");
        scanf("%d", &user_input2);
        switch (user_input2)
        {
        case 1:
            for (i = 0; i < size1; i++)
            {
                for (j = i + 1; j < size1; j++)
                {
                    if (arr1[i] > arr1[j])
                    {
                        temp = arr1[i];
                        arr1[i] = arr1[j];
                        arr1[j] = temp;
                    }
                }
            }
            printf("Ascending of array is = [ ");
            for (i = 0; i < size1; i++)
            {
                printf("%d ", arr1[i]);
            }
            printf("]\n");

            break;
        case 2:
            for (i = 0; i < size1; i++)
            {
                for (j = i + 1; j < size1; j++)
                {
                    if (arr1[i] < arr1[j])
                    {
                        temp = arr1[i];
                        arr1[i] = arr1[j];
                        arr1[j] = temp;
                    }
                }
            }
            printf("Ascending of array is = [ ");
            for (i = 0; i < size1; i++)
            {
                printf("%d ", arr1[i]);
            }
            printf("]\n");

            break;
        }

    case 5:
        bin = arr1[1];
        for (i = 0; i < size1; i++)
        {
            if (arr1[i] > bin)
            {
                bin = arr1[i];
            }
        }
        printf("Largest element is = %d ", bin);
        break;
    case 6:
        bin = arr1[1];
        for (i = 0; i < size1; i++)
        {
            if (arr1[i] < bin)
            {
                bin = arr1[i];
            }
        }
        printf("Smallest element is = %d ", bin);
        break;
    case 7:
        printf("Enter the size of new array : ");
        scanf("%d", &size2);
        printf("Enter %d elements of new array : ", size2);
        for (i = 0; i < size2; i++)
        {
            scanf("%d", &arr2[i]);
        }
        printf("Ascending of array is = [ ");
        for (i = 0; i < size2; i++)
        {
            printf("%d ", arr2[i]);
        }
        printf("]\n");
        for (i = 0; i < size1; i++)
        {
            arr3[i] = arr1[i];
        }
        for (i = size1; k < size2; i++)
        {
            arr3[i] = arr2[k];
            k++;
        }
        printf("Merged array is = [ ");
        for (i = 0; i < size1 + size2; i++)
        {
            printf("%d ", arr3[i]);
        }
        printf("]\n");
        break;
    case 8:
        for (i = 0; i < size1 / 2; i++)
        {
            temp = arr1[i];
            arr1[i] = arr1[size1 - i - 1];
            arr1[size1 - i - 1] = temp;
        }
        printf("Reversed array is = [ ");
        for (i = 0; i < size1; i++)
        {
            printf("%d ", arr1[i]);
        }
        printf("]\n");
        break;
    case 9:
        printf("1 = Addition\n2 = Multiplication\nChoose one :");
        scanf("%d", &user_input2);
        switch (user_input2)
        {
        case 1:
            for (i = 0; i < size1; i++)
            {
                sum = sum + arr1[i];
            }
            printf("Sum of the array is : %d", sum);
            break;
        case 2:
            for (i = 0; i < size1; i++)
            {
                mul = mul * arr1[i];
            }
            printf("Multiplication of the array is : %d", mul);
            break;
        }
    }
}