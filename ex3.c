#include <stdio.h>
void main()
{ 
  FILE *fichier;
  int i,n;
  fichier=fopen("nombre.dat","wb+");
  for(i=0;i<10;i++){
    printf("N=");
    scanf("%d",&n);
    putw(n,fichier);
  }
  rewind(fichier);
  while((n=getw(fichier))!=EOF)
    printf ("%d\n",n);
  fclose(fichier);
}
