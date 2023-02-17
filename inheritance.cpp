#include <iostream>
using namespace std;

class Base {
    public:
        Base() {
            cout << "Base" << endl;
        }
        virtual ~Base() {
            cout <<"~Base" << endl;
        }
        virtual void f() = 0;
};

class Derived : public Base {
    public:
        Derived() {
            cout << "Derived" << endl;
        }

        ~Derived() {
            cout << "~Derived" << endl;
        }

        void f() {
            cout << "Hello!" << endl;
        }
};

class Derived1 : public Base {
    public:
        Derived1() {
            cout << "Derived" << endl;
        }

        ~Derived1() {
            cout << "~Derived" << endl;
        }

        void f() {
            cout << "Hello1!" << endl;
        }
};

void callF(Base *p) {
    p->f();
}

int main(void) {
    Derived *p = new Derived();
    Derived1 *p1 = new Derived1();
    callF(p);
    callF(p1);
    delete p;
    delete p1;
}