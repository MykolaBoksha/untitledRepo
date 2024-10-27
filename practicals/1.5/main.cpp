// prac1.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Mykola Boksha

#include <iostream>
int main()
{
 
    //ex 1
    int A1[] = { 0, 18, 24, 7, 15, 2, 52, -3 };
    int n1 = sizeof(A1) / sizeof(int);
    int P1;
    std::cout << "Enter P value: " << std::endl;
    std::cin >> P1;
    for (int i = 0; i < n1; i++)
    {
        if (A1[i] == P1)
        {
            std::cout << "Index of first appearence of P value in array is: " << i << std::endl;
        }
        else if (i == n1 - 1)
        {
            std::cout << "P value do not appear in array " << std::endl;
        }
    }

    //ex 2

    int A2[] = { 5, 4, 11, 22, 42, -42, -5, 0 };
    int n2 = sizeof(A2) / sizeof(int);
    int A2min = A2[0];
    for (int i = 0; i < n2; i++)
    {
        if ((A2[i] < A2min) && (A2[i] >= 0))
        {
            A2min = A2[i];
        }
    }
    std::cout << "The answer to task 2 is: " << A2min << std::endl;

    //ex 3

    int A3[] = { 4, 12, 42, -3, 54, 987, 11, -4 };
    int n3 = sizeof(A3) / sizeof(int);
    int A3min = A3[0];
    int A3max = A3[0];
    int MaxValueIndex, MinValueIndex = 0;
    for (int i = 0; i < n3; i++)
    {
        if (A3[i] < A3min)
        {
            A3min = A3[i];
            MinValueIndex = i;
        }
        else if (A3[i] > A3max)
        {
            A3max = A3[i];
            MaxValueIndex = i;
        }
    }
    int temp = A3[MaxValueIndex];
    A3[MaxValueIndex] = A3[MinValueIndex];
    A3[MinValueIndex] = temp;
    std::cout << "Values are succesfully changed their places" << std::endl;

    return 0;
}
}
