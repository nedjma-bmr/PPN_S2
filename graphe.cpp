#include "graphe.h"

//---------- la liste des sommets du graphe
vector<string> Graphe::List_sommets()
{
    vector<string> list_sommet;
    for (auto iter = graphe.begin(); iter != graphe.end(); ++iter)
    {
        list_sommet.push_back((*iter).first);
    }
    return list_sommet;
}

//----------- lists des voisins d'un noeud
vector<string> Graphe::List_voisins(string sommet)
{
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


