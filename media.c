#include <stdio.h>
/* Este é um exemplo de comentário dentro do código*/
int main()
{
  float n1,n2,n3,n4,n5,n6,n7,n8,m;
    printf("\nDigite as notas do aluno:\n");
  scanf("%f%f%f%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8);
  m=(n1+n2+n3+n4+n5+n6+n7+n8)/8;
  printf("\nA media do aluno é: %.2f",m);

}
