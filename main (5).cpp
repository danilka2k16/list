#include <iostream>
using namespace std;

/*Реализовать класс pair_int:
-Конструктор
-Конструктор копирования
-swap
-"==","!="
- get_first / get_second
- set_first / set_second*/

class pair_int{
    private:
        int _first,_second;
    public:
        pair_int();
        pair_int(int,int);
        pair_int( pair_int&);
        void swap();
        bool operator == (pair_int&);
        bool operator != (pair_int&);
        int get_first();
        int get_second();
        void set_first(int);
        void set_second(int);
};

pair_int::pair_int(){
    set_first(0);
    set_second(0);
}
pair_int::pair_int(int first,int second){
    set_first(first);
    set_second(second);
}
pair_int::pair_int(pair_int&p){
    set_first(p.get_first());
    set_second(p.get_second());
}
void pair_int::swap(){
    int temp=get_first();
    set_first(get_second());
    set_second(temp);
}
bool pair_int:: operator == ( pair_int&p) {
    if (get_first()==p.get_first() && get_second()==p.get_second())
        return true;
    else
        return false;
}
bool pair_int:: operator != ( pair_int&p) {
    return !(*this==p);
}
int pair_int::get_first(){
    return _first;
}
int pair_int::get_second(){
    return _second;
}
void pair_int::set_first(int first){ //инкапсуляция
     _first=first;
}
void pair_int::set_second(int second){
    _second=second;
}


int main()
{
    pair_int p(4,5);
    pair_int pp(p);
    cout << "pair first!" <<p.get_first()<<" "<<p.get_second() <<endl;
    cout << "pair second!" <<pp.get_first()<<" "<<pp.get_second() <<endl;
    cout << "equal:" << (p==pp) <<endl;
    cout << "unequal:" << (p!=pp) <<endl;
    pp.set_first(6);
    cout << "pair first!" <<p.get_first()<<" "<<p.get_second() <<endl;
    cout << "pair second!" <<pp.get_first()<<" "<<pp.get_second() <<endl;
    cout << "equal:" <<(p==pp)<<endl;
    cout << "unequal:" <<(p!=pp)<<endl;
    p.swap();
    pp.swap();
    cout << "pair first!" <<p.get_first()<<" "<<p.get_second() <<endl;
    cout << "pair second!" <<pp.get_first()<<" "<<pp.get_second() <<endl;
    return 0;
}
