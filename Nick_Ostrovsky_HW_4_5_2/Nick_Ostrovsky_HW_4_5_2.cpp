#include <iostream>
#include <string>

void publication(int* array, int size);
void journey(int* array, int size);



int main()
{
    std::cout << "Let's take a journey!\n";
    int array_a[] = { 1, 3, 6, 5, 9, 8 };
    int array_b[] = { 94, 67, 18, 44, 55, 12, 6, 42 };
    int array_c[] = { 16, 11, 9, 10, 5, 6, 8, 1, 2, 4 };

    int size_a = sizeof(array_a) / sizeof(array_a[0]);
    int size_b = sizeof(array_b) / sizeof(array_b[0]);
    int size_c = sizeof(array_c) / sizeof(array_c[0]);
    
    publication (array_c, size_c);
    journey (array_c, size_c);
   
}

void journey(int* array, int size)

{
    
    std::string income = "barracuda";
    int index = 0;
    std::cout << 0 << " " << "You are at heap root: " << array[index] << std::endl;
    while (income != "exit")
    
    {
        std::cout << "Please, enter your direction or exit (up, left, right, exit): " << std::endl;
        std::cin >> income;
        if ((income == "up"))
        {
            index = ((index - 1) / 2);
            if (index >= 0)
            {
                int a = floor((log2(index * 2 + 2)));
                std::cout << "Level" << a << " "  << " element: " << array[index] << " index " << index << std::endl;
            }
            
            else { std::cout << "Error. No parent element." << std::endl; }
        }
        if ((income == "left"))
        {
            index = (index * 2 + 1);
            if (index < size )
            {
                int a = floor((log2(index * 2 + 2)));
                std::cout << "Level" << a << " " << "Left child element: " << array[index] << " index " << index << std::endl;
            }

            else { std::cout << "Error. No child element." << std::endl; }
        }

        if ((income == "right"))
        {
            index = (index * 2 + 2);
            if (index < size)
            {
                int a = floor((log2(index * 2 + 2)));
                std::cout << "Level: " << a << " " << "Right child element: " << array[index] << " index " << index << std::endl;
            }

            else { std::cout << "Error. No child element." << std::endl; }
        }
    }
    return;
}

void publication(int* array, int size)
{
    std::cout << "Initial array:" << std::endl;
    for (int j = 0; j < size; j++)
    {
        std::cout << array[j] << " ";

    }

    std::cout << std::endl;
    std::cout << "Heap structure:" << std::endl;

    std::cout << 0 << " " << "root" << array[0] << std::endl;
    for (int i = 0; i < size / 2; i++)
    {
        //  std::cout << (i - 1) / 2 << " " << "parent" << array[(i)] << std::endl ;

        if ((i * 2 + 1) < size)
        {
            int a = floor((log2(i * 2 + 2)));
            std::cout << a << " " << "left" << "(" << array[i] << ")" << array[((i * 2 + 1))] << std::endl;
        }
        if ((i * 2 + 2) < size)
        {
            std::cout << floor((log2(i * 2 + 2))) << " " << "right" << "(" << array[i] << ")" << array[((i * 2 + 2))] << std::endl;
        }
    }

}