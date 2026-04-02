#include <iostream>
#include <vector>
#include <string>
using namespace std;
class souris{
private:
    double poids;
    string couleur;
    unsigned int age;
    unsigned int esperancevie ;
    bool clonee;
public:
    souris(double m,string c,unsigned int a=0, unsigned int e=36):
        poids(m),couleur(c),age(a),esperancevie(e),clonee(false){cout<<"une nouvelle souris!"<<endl;}
    souris(souris const& autre):
        poids(autre.poids),couleur(autre.couleur),age(autre.age),esperancevie(autre.esperancevie*4/5),clonee(true){ cout<<"clonage d une souris"<<endl;}
    ~souris() { cout<<"fin d une souris"<<endl;}
    void afficher( ) {
        cout<<"une souris"<<couleur;
        if( clonee=true) { cout<<"clonee,";}
        cout<<"de"<<age<<"mois et iesant"<<poids<<"gramme"<<endl;}
        void viellir( ){
    age++;
    if( clonee && age>esperancevie/2){ couleur ="verte";}}
    void evolue( ){ while( age<esperancevie){ viellir();}}

    };
int main() {
    souris S1(50.0,"blanche",2);
    souris S2(45.0,"grise",5);
    souris S3(S2);
    S1.afficher();
    S2.afficher();
 S3.afficher();
 S1.evolue();
 S2.evolue();
 S3.evolue();
  return 0;
}

