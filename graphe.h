#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;
struct Graphe
{
    // table de hashage qui va stocker le graphe
    unordered_map<string, vector<string>> graphe;

    // retourne la liste des voisins d'un sommet donné
    vector<string> List_voisins(string sommet);
};
