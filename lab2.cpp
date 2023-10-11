#include <stdlib.h>
#include <iostream>

// Определение структуры TwoInts с целыми числами a и b
struct TwoInts
{
    int a;
    int b;
};

// Определение структуры StructWithArray с массивом arr и указателем someNumber
struct StructWithArray
{
    int arr[4];
    int* someNumber;
};

int main()
{
    // Создание и инициализация экземпляра структуры TwoInts
    TwoInts i2 = { };
    i2.a = 5;
    i2.b = 7;

    // Вывод значений 
    std::cout << i2.a << std::endl;
    std::cout << i2.b << std::endl;
    
    // Создание и инициализация экземпляра структуры StructWithArray
    StructWithArray s = { };
    s.arr[0] = 10;

    // Создание еще одного экземпляра StructWithArray и инициализация первого элемента его массива arr
    StructWithArray s1 = { };
    s1.arr[0] = 15;

    // Создание указателя sPointer, который указывает на структуру s
    sPointer = &s;
    // Изменение первого элемента массива arr через указатель sPointer
    sPointer->arr[0] = 20;

    // Вывод значения первого элемента массива arr в структуре s
    std::cout << s.arr[0] << std::endl;
    // Изменение значения первого элемента массива arr в структуре s
    s.arr[0] = 25;
    // Вывод обновленного значения
    std::cout << s.arr[0] << std::endl;
    // Изменение значения через указатель sPointer и вывод
    sPointer->arr[0] = 30;
    std::cout << s.arr[0] << std::endl;

    // Переключение указателя sPointer на структуру s1
    sPointer = &s1;
    // Изменение первого элемента массива arr в структуре s1
    sPointer->arr[0] = 35;
    // Вывод значений первого элемента массива arr в структурах s и s1
    std::cout << s.arr[0] << std::endl;
    std::cout << s1.arr[0] << std::endl;

    // Создание массива структур structArray и инициализация первого элемента массива arr и указателя someNumber
    StructWithArray structArray[2] = { };
    structArray[0].arr[3] = 77;
    structArray[1].someNumber = &structArray[0].arr[3];

    // Установка указателя sPointer на структуру s и установка указателя pointer на третий элемент массива arr через sPointer
    sPointer = &s;
    int* pointer = &sPointer->arr[3];
    // Изменение третьего элемента массива arr в структуре s
    s.arr[3] = 72;
    // Вывод значения, на которое указывает указатель pointer
    std::cout << *pointer;

    // Создание структуры memory и заполнение нулями
    StructWithArray memory;
    memset(&memory, 0, sizeof(StructWithArray));

    return 0;
}
