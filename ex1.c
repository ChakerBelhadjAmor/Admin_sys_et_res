#include <stdio.h>
void main()
{
  FILE *fichier1,*fichier2;
  char c;
  printf("Copie en cours ....\n");
  fichier1=fopen("essai.dat","r");
  fichier2=fopen("copie.dat","w");
  while((c=(char)getc(fichier1))!=EOF)
    putc(c,fichier2);
  fclose(fichier1);
  fclose(fichier2);
  printf("Copie terminée!");
}
