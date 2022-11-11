#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili
 //definisco le variabili
    double a=0;
    double b=0;
    double c=0;
 //utente impone variabili

cin >> a >> b >> c;

//Qui va scritto il codice per eseguire i calcoli richiesti
 //area triangolo
 double trg = (a*b)/2;
 //area quadrato
 double qdr = a*a;
 //area rettangolo
 double rtg = a*b;
 //area trapezio
 double trp = ((a+b)*c)/2;
 // risultati
 
 //cout << trp << "\ " << endl;
 cout << trg << endl;
 cout << qdr << endl;
 cout << rtg << endl;
 cout << trp << endl;
 
 return 0;

}
