#include <iostream>

//Переменная a объявлена как глобальная переменная вне функции staticMemory. Это означает, что a видна во всем файле и сохраняет свое значение между вызовами функции staticMemory. Работает это так же, как и в static_1.

int a = 0;

//Добавим модификатор static, чтобы ограничить видимость только для этого файла
//static int a = 0;
 
void staticMemory()
{
    std::cout << "a: " << a << std::endl;
    a += 1;
}

int main()
{
    staticMemory(); // prints 0
    staticMemory(); // prints 1
    staticMemory(); // prints 2
    return 0;
}