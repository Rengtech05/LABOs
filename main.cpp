
#include <iostream>
#include <cmath> // Bibliothèque requise pour utiliser sqrt()

using namespace std;

int main() {

    const double dx = 3;  //km
    const double dy = 10; //-|-
    const double L1 = 6;  //-|-
    double dz = dy-L1;
    double c_carre;
    double t1;
    double t2;
    const double v1= 5; //   km/h
    const double v2= 2; //   -|-

    //calcul de hypothenuse
    c_carre = dx*dx + dz*dz;
    double resultat = sqrt(c_carre);

    //calcul du temp
    t1 = L1 / v1;
    t2 = resultat / v2;
    double t_total = t1 + t2;

    cout << "La longueur inconnu est de " << resultat<< " km. " << endl;
    cout << "Le temps necessaire total est de " << t_total<< " heures."<< endl;

    /* s/t = v; */
    /* EX: Calcul d'un carré
    double x^2 = pow(base, 2); */
}