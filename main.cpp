#include "graphe.h"

int main(){

Graphe s;
s.graphe.insert({"fefe",{"reee"}});
auto elem_found = s.graphe.find("fefe");
if(elem_found != s.graphe.end()){
    for (auto s : (*elem_found).second) {
           cout << s << endl;
    }
}

}
