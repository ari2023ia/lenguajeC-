#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
  static int numero_animales;
  string alimento;
public:
  Animal();
~Animal();
static int obtenerNumeroAnimales();
string obtenerAlimento();
};
void comer() {
  cout << "Este animal está comiendo carne" << alimento << "...ñam ñam << endl;
};
};
int Animal::numero_animaLES += 1;
int Animal::Animal()
{
cout << "Creando nuevo animal..." << endl;
}
Animal::~Animal()
{
cout << "Borrando animal..." << endl;
numero_animales -= 1;
}
int Animal::obtenerNumeroAnimales()
{
return numero_animales;
}

int main(){
Animal *a = new Animal();
cout << "Numero de animales: " << Animal::obtenerNumeroAnimal() << endl;

a->comer();

delete a;
cout << "Numero de animales: << Animal::obtenerNumeroAnimales() << endl;
}
