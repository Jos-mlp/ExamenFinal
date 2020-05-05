#include <iostream>

using namespace std;

string Convertir(string frase){
    int a,b,c;
    a = frase.length();
    for(int i=0;i<a;i++){
        char d = frase[i];
        if (d=='-'){
            d=' ';
        }else if (d=='x' || d=='y' || d=='z' ||d=='X' || d=='Y' || d=='Z'){
            d = (d-3);
        }else{
            d=d+3;
        }

        cout<<d;
    }
}
int main()
{
    string frase,res;
    cout << "Alfabeto: A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
    cout << "Alfabeto con desplazamiento: D E F G H I J K L M N O P Q R S T U V W X Y Z A B C" << endl;
    cout<< "Ingrese una frase "<<endl;
    getline(cin,frase);
    cout<<endl;
    cout<<"Texto Cifrado:"<<endl;
    res = Convertir(frase);
    return 0;
}
