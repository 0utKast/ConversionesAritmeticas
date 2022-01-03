/*#include <iostream>
#include <typeinfo> // para typeid()

int main()
{
    int i{ 7 };
    double d{ 2.5 };
    std::cout << typeid(i + d).name() << ' ' << i + d << '\n'; // nos muestra el tipo de i + d

    return 0;
}*/



/*#include <iostream>
#include <typeinfo> // para typeid()

int main()
{
    short a{ 6 };
    short b{ 7 };
    std::cout << typeid(a + b).name() << ' ' << a + b << '\n'; // nos muestra el tipo de a + b

    return 0;
}*/


#include <iostream>
#include <typeinfo> // para typeid()

int main()
{
    std::cout << typeid(5u - 10).name() << ' ' << 5u - 10; // 5u significa trata 5 como un int unsigned

    return 0;
}




















/*#include <iostream>

int main()
{
    std::cout << 3 + 2.5 <<"\n";
}*/

