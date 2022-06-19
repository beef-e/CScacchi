#include <stdio.h>
#include <stdlib.h>

void settingScacchiera();

//KNIGHTS
char wKnight1[2]; 	//THE 1 MEANS IT STARTS ON THE WHITE TILE
char wKnight2[2];
char bKnight1[2];
char bKnight2[2];

//ROOKS
char wRook1[2];		//THE 1 MEANS IT STARTS ON THE WHITE TILE
char wRook2[2];
char bRook1[2];
char bRook2[2];

//BISHOPS
char wBish1[2];		//THE 1 MEANS IT STARTS ON THE WHITE TILE
char wBish2[2];
char bBish1[2];
char bBish2[2];

//QUEENS
char wQueen[2];
char bQueen[2];

//KINGS
char wKing[2];
char bKing[2];

//PAWNS GO FROM A TO H, FROM LEFT TO RIGHT IF PLAYING AS WHITE
typedef char Pedone[2];
Pedone wPawn [8];
Pedone bPawn [8];



struct piastrella{
	int colore;
	int pezzo;
};

struct piastrella one[8];	//INIZIO DEI PEZZI BIANCHI
struct piastrella two[8];
struct piastrella three[8];
struct piastrella four[8];
struct piastrella five[8];
struct piastrella six[8];
struct piastrella seven[8];
struct piastrella eight[8];	//INIZIO DEI PEZZI NERI


int main(){
	settingScacchiera();
}






void settingScacchiera(){
	//SETTO I BIANCHI
		//SETTO IL COLORE DELLE PRIME DUE FILE
	for (int i; i<8; i++){
		one[i].colore=1;
		two[i].colore=1;
	}
	
		//SETTO I PEDONI
	for (int i; i<8; i++){
		two[i].pezzo=1;
	}
	
		//SETTO GLI ALTRI PEZZI BIANCHI
	one[0].pezzo=4;//TORRE
	one[1].pezzo=2;//CAVALLI
	one[2].pezzo=3;//ALFIERI
	one[3].pezzo=5;//REGINA
	one[4].pezzo=6;//RE
	one[5].pezzo=3;//ALFIERI
	one[6].pezzo=2;//CAVALLI
	one[7].pezzo=4;//TORRE
	
	
	
	
	//SETTO I NERI
		//SETTO IL COLORE DELLE PRIME DUE FILE
	for (int i; i<8; i++){
		seven[i].colore=1;
		eight[i].colore=1;
	}
	
		//SETTO I PEDONI
	for (int i; i<8; i++){
		seven[i].pezzo=1;
	}
	
		//SETTO GLI ALTRI PEZZI NERI
	eight[0].pezzo=4;//TORRE
	eight[1].pezzo=2;//CAVALLI
	eight[2].pezzo=3;//ALFIERI
	eight[3].pezzo=5;//REGINA
	eight[4].pezzo=6;//RE
	eight[5].pezzo=3;//ALFIERI
	eight[6].pezzo=2;//CAVALLI
	eight[7].pezzo=4;//TORRE
}