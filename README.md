# TD-Compte-Rendu-Timbre-C

---

📬 Calcul du nombre de timbres

Projet réalisé dans le cadre d’un TD de programmation en langage C.
Ce programme permet de calculer automatiquement le nombre de timbres nécessaires pour envoyer une lettre en fonction du nombre de feuilles A4.

---

🎯 Objectifs du projet

Mettre en pratique les bases du langage C

Manipuler les variables et constantes

Utiliser les structures conditionnelles (if / else if)

Réaliser des calculs simples

Travailler l’affichage formaté avec printf

---

🧱 Fonctionnement du programme

Le programme suit les étapes suivantes :

Demande à l’utilisateur le nombre de feuilles A4 à envoyer

Calcule le poids total :

Poids enveloppe (5g)

(nombre de feuilles × 5g)

Détermine le nombre de timbres selon les tranches de poids :

< 20g → 1 timbre

20g à 100g → 2 timbres

101g à 250g → 4 timbres

251g à 500g → 6 timbres

501g à 2000g → 8 timbres

Calcule le prix total :

nombre de timbres × 1.39€

Affiche le résultat final

---

🛠️ Technologies utilisées

Langage C

Bibliothèque standard stdio.h

Aucune bibliothèque externe n’a été utilisée.

---

🧪 Tests réalisés

Plusieurs cas ont été testés afin de vérifier le bon fonctionnement :

Cas < 20g

Cas entre 20g et 100g

Cas > 100g

Cas limite (2000g)

Les résultats obtenus correspondent aux attentes.

---

🚀 Lancer le projet

Cloner le dépôt

Compiler le programme :

gcc main.c -o timbres


Exécuter :

./timbres


Aucune installation particulière n’est nécessaire en dehors d’un compilateur C.

---

✍️ Auteur

Projet réalisé par Tealyx
Dans le cadre des études INSA / UPHF.

---

🤖 Utilisation de l’intelligence artificielle

Une intelligence artificielle a été utilisée uniquement pour :

améliorer la rédaction du README

générer des commentaires explicatifs dans le code

Le programme en C a été entièrement conçu, écrit et testé manuellement par l’auteur.

Ce projet est à but pédagogique et permet de s’entraîner aux bases de la programmation en C.
