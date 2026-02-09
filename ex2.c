#include <stdio.h>
void main()
{
  FILE *fichier;
  int compteur=0;
  fichier=fopen("essai.dat","r");
  while(getc(fichier)!=EOF)
    compteur++;
  fclose(fichier);
  printf("La taille du fichier est %d octet \n",compteur);
}
