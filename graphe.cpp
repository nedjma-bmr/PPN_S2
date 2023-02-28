#include "graphe.h"

// lists des voisins d'un noeud
vector<string> Graphe::List_voisins(string sommet){
    vector<string> list = {};
    auto voisins = graphe.find(sommet);
    if (voisins != graphe.end())
    {
        for (auto s : (*voisins).second)
        {
            list.push_back(s);
        }
    }

    return list;
}
