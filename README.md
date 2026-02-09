# TP1 : Gestion de Fichiers

Ce dépôt contient les solutions pour le TP1 sur la gestion de fichiers en langage C.

##  Description

Ce travail pratique couvre les opérations fondamentales de manipulation de fichiers en C, incluant la copie de fichiers texte, le comptage de caractères, et la gestion de fichiers binaires.

##  Structure du Projet

```
.
├── ex.c          # Code source de l'exercice 1
├── ex1comp            # Exécutable compilé de l'exercice 1
├── ex2.c          # Code source de l'exercice 2
├── ex2comp            # Exécutable compilé de l'exercice 2
├── ex3.c          # Code source de l'exercice 3
├── ex3comp            # Exécutable compilé de l'exercice 3
├── essai.dat            # Fichier texte source (utilisé par ex1 et ex2)
├── copie.dat            # Fichier copie généré par l'exercice 1
├── nombre.dat           # Fichier binaire utilisé par l'exercice 3
└── README.md            # Ce fichier
```

##  Exercices

### Exercice 1 : Copier un fichier texte dans un autre

**Objectif :** Créer un programme qui copie le contenu d'un fichier texte (`essai.dat`) dans un autre fichier (`copie.dat`).

**Fichiers impliqués :**
- `ex1.c` - Code source
- `essai.dat` - Fichier source à copier
- `copie.dat` - Fichier destination

**Utilisation :**
```bash
./ex1comp
```

**Vérification :** Après exécution, vérifier la présence du fichier `copie.dat` dans le répertoire et comparer son contenu avec `essai.dat`.

---

### Exercice 2 : Calculer et afficher le nombre de caractères d'un fichier ASCII

**Objectif :** Créer un programme qui compte et affiche le nombre total de caractères dans un fichier texte ASCII.

**Fichiers impliqués :**
- `ex2.c` - Code source
- `essai.dat` - Fichier à analyser (ou n'importe quel fichier ASCII du répertoire)

**Utilisation :**
```bash
./ex2comp
```

**Résultat :** Le programme affiche le nombre total de caractères présents dans le fichier.

---

### Exercice 3 : Créer et relire un fichier binaire de 10 entiers

**Objectif :** Créer un programme qui :
1. Crée un fichier binaire contenant 10 entiers
2. Relit et affiche le contenu de ce fichier binaire

**Fichiers impliqués :**
- `ex3.c` - Code source
- `nombre.dat` - Fichier binaire contenant les entiers

**Utilisation :**
```bash
./ex3comp
```

**Fonctionnement :** Le programme écrit 10 entiers dans un fichier binaire, puis les relit et les affiche.
EXERCICES :
Exercice 1 : Copier un fichier texte dans un autre : créer un fichier "essai.dat" sous l’éditeur. Tester le
programme en vérifiant après exécution la présence du fichier copié dans le directory.
Exercice 2 : Calculer et afficher le nombre de caractères d'un fichier ASCII (Utiliser n'importe quel
fichier du répertoire).
Exercice 3 : Créer et relire un fichier binaire de 10 entiers.
##  Compilation

Si vous souhaitez recompiler les programmes :

```bash
# Exercice 1
gcc ex1.c -o exercice1

# Exercice 2
gcc ex2.c -o exercice2

# Exercice 3
gcc ex.c -o exercice3
```

##  Notes

- Les fichiers `.dat` sont inclus dans le dépôt pour faciliter les tests
- `essai.dat` doit être créé manuellement sous l'éditeur avant l'exécution de l'exercice 1
- Les programmes utilisent les fonctions standard de manipulation de fichiers en C (`fopen`, `fclose`, `fgetc`, `fputc`, `fread`, `fwrite`)

##  Prérequis

- Compilateur GCC
- Système d'exploitation compatible UNIX/Linux (ou environnement Windows avec MinGW)


**Date :** 2026  
**Sujet :** Gestion de Fichiers - TP1
