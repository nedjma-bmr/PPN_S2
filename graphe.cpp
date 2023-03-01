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

//---------- Ajouter une une arrête au graphe
void Graphe::AddArc(string sommet1, string sommet2)
{
    ///--- pour le premier sommet
    auto iter = graphe.find(sommet1);
    if (iter != graphe.end())
    {
        (*iter).second.push_back(sommet2);
    }
    else
    {
        graphe.insert({sommet1, {sommet2}});
    }

    ///--- pour le deuxième sommet
    auto iter2 = graphe.find(sommet2);
    if (iter2 != graphe.end())
    {
        (*iter2).second.push_back(sommet1);
    }
    else
    {
        graphe.insert({sommet2, {sommet1}});
    }
}


//------ Calculer les degrés des sommets d'un graphe
    map<string,int> Graphe::calculate_degrees(){
        map<string,int> degrees;
        for( auto iter = graphe.begin() ; iter != graphe.end(); ++iter){
            degrees[(*iter).first] = List_voisins((*iter).first).size();
        }
        return degrees;
    }
       
