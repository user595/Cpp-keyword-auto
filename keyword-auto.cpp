//requires C++14 for auto keyword for reference specifiers
#include <iostream>
using namespace std;

class foo { 
          int x_ = 0; //instance variable
        public: 
          foo(int const x = 0) :x_{ x } {} //const
          auto& get() { return x_; } //requires C++14
        }; 
int main()
{
    cout<<"Begin\n";
    foo f(42); 
    auto x = f.get(); //auto keyword 
    x = 100; 
    std::cout << f.get() << std::endl; // prints 42
    cout<<"\nEnd\n";
    return 0;
}