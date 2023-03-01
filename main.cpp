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

    //--------------Tests-----------------------------------//
    // avec la fonction list_voisins()
    cout << "List des voisins de 2" << endl;

    for (auto e : s.List_voisins("2"))
    {
        cout << e << endl;
    }

    // liste des sommets
    cout << "liste des sommets" << endl;
    for (auto e : s.List_sommets())
    {
        cout << e << endl;
    };
    /// add arc
    cout << "Ajout d'un arc" << endl;
    s.AddArc("4", "5");

    /// list des sommets
    cout << "liste des sommets" << endl;
    for (auto e : s.List_sommets())
    {
        cout << e << endl;
    };

    /// voisins de 4
    cout << "List des voisins de 4" << endl;

    for (auto e : s.List_voisins("4"))
    {
        cout << e << endl;
    }

    //calculer les degrés des sommets du graphe
    cout << "lise des degrés de sommets du graphe" << endl;
    for (auto e : s.calculate_degrees())
    {
        cout << "sommet:" << e.first<< " " << "degré:" << e.second << endl;
    }
    














}
