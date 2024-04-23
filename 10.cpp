#include <iostream>

void print(int counter)
{
    
    counter++;
    if (counter > 10) return;
    std::cout << counter << " ";
    print(counter);
}

int main() {
    int i = 0;
    print(i);



}