#include<iostream>
using namespace std;

class duck{
public :
    void head(){
        cout << "It has beak\n";
    }
    void reproduceandclass(){
        cout << "It lay egg \nIt's class is Aves\n";
    }
};
class beaver{
public :
    void tail(){
        cout << "It has wide tail\n";
    }
    void reproduceandclass(){
        cout << "It give birth \nIt's class is Mammals\n";
    }
};
class platypus : public beaver, public duck{
public :
    void reproduceandclass(){
        cout << "It lay egg \nIt's class is Mammals\n";
    }
};

int main(){

    duck *donald = new duck;
    cout << "Donald the Duck :\n";
    donald->head();
    donald->reproduceandclass();
    cout << endl;
    beaver *daggett = new beaver;
    cout << "Daggett the Beaver :\n";
    daggett->tail();
    daggett->reproduceandclass();
    cout << endl;
    platypus *perry = new platypus;
    cout << "Perry the Platypus :\n";
    perry->head();
    perry->tail();
    perry->reproduceandclass();
}
