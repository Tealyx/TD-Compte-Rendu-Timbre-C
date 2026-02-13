# TD-1-Calcul-Timbres

---

# 📬 Calcul du nombre de timbres

Projet réalisé dans le cadre d’un **TD de programmation en langage C**.  
Ce programme permet de calculer automatiquement le **nombre de timbres nécessaires** pour envoyer une lettre en fonction du nombre de feuilles A4.

---

## 🎯 Objectifs du projet

- Mettre en pratique les bases du **langage C**
- Manipuler les **variables et constantes**
- Utiliser les **structures conditionnelles (`if / else if`)**
- Réaliser des **calculs simples**
- Travailler l’affichage formaté avec `printf`

---

## 🧱 Structure du programme

- **Entrée utilisateur**
  - Saisie du nombre de feuilles A4
- **Calcul du poids**
  - Poids de l’enveloppe : 5g
  - + (nombre de feuilles × 5g)
- **Détermination des timbres**
  - < 20g → 1 timbre  
  - 20g à 100g → 2 timbres  
  - 101g à 250g → 4 timbres  
  - 251g à 500g → 6 timbres  
  - 501g à 2000g → 8 timbres  
- **Calcul du prix**
  - nombre de timbres × 1.39€
- **Affichage final**
  - Poids total
  - Nombre de timbres
  - Prix total

---

## 🛠️ Technologies utilisées

- **Langage C**
- Bibliothèque standard `stdio.h`

Aucune bibliothèque externe n’a été utilisée.

---

## 🧪 Tests réalisés

| Cas testé | Pages | Poids total | Timbres | Prix |
|-----------|--------|------------|----------|------|
| Cas < 20g | 2 | 15g | 1 | 1.39€ |
| Cas entre 20g et 100g | 5 | 30g | 2 | 2.78€ |
| Cas > 100g | 30 | 155g | 4 | 5.56€ |
| Cas limite (2000g) | 399 | 2000g | 8 | 11.12€ |

---

## 🚀 Lancer le projet

1. Cloner le dépôt
2. Compiler le programme :

```bash
gcc main.c -o timbres
```

3. Exécuter :

```bash
./timbres
```

Aucune installation particulière n’est nécessaire en dehors d’un compilateur C.

---

## ✍️ Auteur

Projet réalisé par **Tealyx**  
Dans le cadre des études **INSA / UPHF**

---

## 🤖 Utilisation de l’intelligence artificielle

Une intelligence artificielle a été utilisée uniquement pour :

- améliorer la rédaction du README
- générer des commentaires explicatifs

Le programme en C a été entièrement conçu, écrit et testé manuellement.

Ce projet est à but **pédagogique** et sert d’entraînement aux bases de la programmation en C.
