#include <stdio.h>

int main()
{
  int i,j,tamn=4;
  int matriza[4][4];
  int matrizb[4][4];
  printf("\n Olá, meu nome é Breno Santos de Souza e minha matricula na Unilasalle é 0050013687.\n");
  
  for(i=0;i<=3; i++)
  {
  for(j=0;j<=3; j++)
  {
   printf("Matriz A - Entre com a linha%d, coluna%d:", i+1,j+1);
   scanf("%d", &matriza[i][j]); 
  }
   printf("\n");
  }
   for(i=0;i<=3;i++)
  {
    for(j=0;j<=3;j++)
    {
    printf("Matriz B - Entre com a linha%d, coluna%d:",i+1,j+1);
    scanf("%d",&matrizb[i][j]);
    }
    printf("\n");
    }
    printf("...\n");
  
   printf("\n Seguem os Resultados:\n");
   printf("\n Soma das duas Matrizes:\n");
  
  for(i=0;i<=3;i++)
  {
   for(j=0;j<=3;j++)
   {
    printf("%d\t",matriza[i][j] + matrizb[i][j]); 
   }
    printf("\n");
  }
   printf("\n");
   printf("Diagonal Secundária da Matriz A:\n");
  
  for(i=0;i<=3;i++)
   
  {
    for(j=0;j<=3;j++)
    {
      if(j==tamn-1-i)
        printf("%d\t",matriza[i][j]);
      
      else
        printf("0\t");       
      }
        printf("\n"); 
      }
      
  printf("\n Multipicação das duas Matrizes:\n");
 
  for(i=0;i<=3;i++)  
  {
  for(j=0;j<=3;j++)
  {
   printf("%d\t", matriza[i][j] * matrizb[i][j]);
     }
    printf("\n");  
  
  }
  printf("\n..\n");
  {
  
  printf("\n A minha maior dificuldade para fazer esse programa foi calcular a Diagonal Secundaria.\n");
}
     
  return 0;
  
    }
      
      
      
      
  
  