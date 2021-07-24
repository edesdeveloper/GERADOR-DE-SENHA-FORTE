#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

const char alpha_numerico[] = "0123456789" "!@#$%^&*" "abcdefghijklmnopqrstuvwxyz" "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int strlen = sizeof(alpha_numerico)-1;

char GeradorAleatorio(){
  return alpha_numerico[rand()%strlen];
}

int main()
{
      int tam, c=0, s=0;

      srand(time(0));

      cout<<"Entre com o tamanho da senha: ";
      cin>>tam;
      cout<<endl<<endl;

      cout<<"Sua senha é: ";
      N:
      char C;
      string D;

      for(int i=0; i<tam; i++){

        C=GeradorAleatorio();
        D+=C;

        if(isdigit(C)){
            c++;
        }
        if(C=='!' || C=='@' || C=='$' || C=='%' || C=='^' || C=='&' || C=='*' || C=='#'){
          s++;
        }
      
      }
      
      if(tam>2 && (s==0 || c==0)){
        goto N;
      }

      cout<<D;
      cout<<endl<<endl;

  return 0;
}