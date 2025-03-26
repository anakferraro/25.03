#include <stdio.h>

int main(void) {
    char modo;
    char secar = 0, enxaguar_secar = 0, todos = 0;
    
   
    printf("Digite o modo desejado:\n 1:Secar\n 2:Enxaguar e secar\n 3:Todos\n (0 para encerrar)\n");
    modo= getchar();
    getchar ();
     
    
    while ( modo != '0') {
        switch (modo) {
            case '1':
            secar++;
            printf("\nRoupa secando.\n");
        break;
            case '2':
            enxaguar_secar++;
            printf("\nRoupa enxaguando e secando.\n");
        break;
             case '3':
            todos++;
            printf("\nCiclo completo.\n");
        break;
        }
        
        printf ("\nDigite o modo desejado ou 0 para encerrar:\n");
        modo = getchar();
        getchar ();
        
    }
  return 0;
}