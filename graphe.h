#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
struct Graphe
{
    // table de hashage qui va stocker le graphe
    unordered_map<string, vector<string>> graphe;

    // retourner la liste des sommets du graphe
    vector<string> List_sommets();

    // retourne la liste des voisins d'un sommet donné
    vector<string> List_voisins(string sommet);

    // Ajouter une une arrête
    void AddArc(string sommet1, string sommet2);

    // Calculer les degrés des sommets
    map<string,int> calculate_degrees();

    // Calculer l'ordre de dégenerescence 
    vector<string> degeneracy_ordering();
     

};
