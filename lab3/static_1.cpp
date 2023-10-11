#include <iostream>

//Переменная a объявлена как статическая внутри функции staticMemory. Это означает, что она сохраняет своё значение между вызовами функции. При первом вызове, a инициализируется значением 0, и оно сохраняется между вызовами функции. Поэтому каждый вызов staticMemory увеличивает a на 1 и выводит его текущее значение.

void staticMemory()
{
    static int a = 0;
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