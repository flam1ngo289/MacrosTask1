#include <iostream>
#define MODE 2

int add(int &a, int &b){
    return a + b;
}

int main(int argc, const char * argv[]) {
#ifdef MODE
#if MODE == 0
std::cout << "Работаю в режиме тренировки" << std::endl;

#elif MODE == 1
    std::cout << "Работаю в боевом режиме" << std::endl;
    int a, b;
    
    std::cout << "Введите число 1: ";
    std::cin >> a;
    
    std::cout << "Введите число 2: ";
    std::cin >> b;
    
    std::cout << "Результат сложения: " << add(a,b) << std::endl;
    
#else
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif
#else
#error "Необходимо определить MODE"
#endif

    return 0;
}


