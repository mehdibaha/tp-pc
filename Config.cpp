/*************************************************************************
                           <Config>  -  description
                             -------------------
    début                : 
    copyright            : (C) 
    e-mail               : 
*************************************************************************/

//---------- Réalisation du module <Config> (fichier Config.cpp) -----

/////////////////////////////////////////////////////////////////  INCLUDE
//-------------------------------------------------------- Include système

//------------------------------------------------------ Include personnel
#include "Config.h"

///////////////////////////////////////////////////////////////////  PRIVE
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//---------------------------------------------------- Variables statiques

//------------------------------------------------------ Fonctions privées
//static type nom ( liste de paramètres )
// Mode d'emploi :
//
// Contrat :
//
// Algorithme :
//
//{
//} //----- fin de nom

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
TypeZone ConvertZone(int numPlace)
// Algorithme :
//
{
    TypeZone typeZone;
    switch(numPlace)
    {
        case 1:
            typeZone = ETAT_P1;
            break;
        case 2:
            typeZone = ETAT_P2;
            break;
        case 3:
            typeZone = ETAT_P3;
            break;
        case 4:
            typeZone = ETAT_P4;
            break;
        case 5:
            typeZone = ETAT_P5;
            break;
        case 6:
            typeZone = ETAT_P6;
            break;
        case 7:
            typeZone = ETAT_P7;
            break;
        case 8:
            typeZone = ETAT_P8;
            break;
        default:
            break;
    }
    return typeZone;
} //----- fin de convertZone

