#include "graphe.h"

int main()
{

    Graphe s;
    s.graphe.insert({"1", {"2", "3"}});
    s.graphe.insert({"2", {"1", "3"}});
    s.graphe.insert({"3", {"2", "1"}});

    auto elem_found = s.graphe.find("1");
    if (elem_found != s.graphe.end())
    {
        for (auto s : (*elem_found).second)
        {
            cout << s << endl;
        }
    }

    // avec la fonction list_voisins()
    cout << "with the function" << endl;

    for (auto e : s.List_voisins("2"))
    {
        cout << e << endl;
    }
}
