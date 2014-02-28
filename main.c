/*

							Calcolatrice in C
					Di Cristian Cosenza / Esercitazione C
					
					GNU Licnese / Open Source License

*/

// == [INCLUDE ] == 
#include <stdio.h>
#include <stdlib.h>


// == [VAR] ==
int
	// Scelta
	scelta,
	
	// Numeri
	numero1,
	numero2,

	// Somma
	risultato
;

// == [DEFINE] ==
#define _OPZ_SOMMA		(1)
#define _OPZ_SOTTRAI	(2)
#define _OPZ_MOLTIPLICA	(3)
#define _OPZ_DIVIDI		(4)
#define _OPZ_ANNULLA	(0)
#define _OPZ_INVALIDA	(-1)

#define _FUNC_ESCI		func_annulla

// == [PRAGMA] ==
#pragma tabsize 0

int main(int argc, char *argv[]) 
{
	// Proprietà della console
	system("color 0F");
	
	// Setto i valori a valore nullo
	scelta = _OPZ_INVALIDA;
	numero1 = 0;
	numero2 = 0;
	risultato = 0;
	
	
	// Inizio
	printf("\n\t\t\tCalcolatrice in C\n");
	printf("\t\tDi Cristian Cosenza / Esercitazione C\n");
	printf("- Digita:\n");
	printf("\t1 -Per sommare\n");
	printf("\t2 -Per sottrarre\n");
	printf("\t3 -Per moltiplicare\n");
	printf("\t4 -Per dividere (solo numeri interi!)\n");
	printf("\t0 -Per uscire\n\n");
	
	// Selezione
	printf("Digita un'opzione:");
	scanf("%d", &scelta);
	
	switch(scelta)
	{
		case _OPZ_ANNULLA: goto func_annulla;
		case _OPZ_SOMMA:goto func_addizione;
		case _OPZ_SOTTRAI: goto func_sottrazione;
		case _OPZ_MOLTIPLICA: goto func_moltiplicazione;
		case _OPZ_DIVIDI: goto func_divisione;
		default: 
		{
			printf("/!\ Scegli un opzione valida! /!\\ \n\n");
			break;
		}
	}
	
	// Funzioni: Addizione
	func_addizione:
		printf("Inserisci il primo numero:");
		scanf("%d", &numero1);
		printf("Inserisci il secondo numero:");
		scanf("%d", &numero2);
		risultato = 0;
		risultato = numero1 + numero2;
		printf("\nIl risultato e': %d (%d + %d)", risultato, numero1, numero2);
		goto _FUNC_ESCI;
		
	// Funzioni: Sottrazione
	func_sottrazione:
		printf("Inserisci il primo numero:");
		scanf("%d", &numero1);
		printf("Inserisci il secondo numeroe:");
		scanf("%d", &numero2);
		risultato = 0;
		risultato = numero1 - numero2;
		printf("\nIl risultato e': %d (%d - %d)", risultato, numero1, numero2);
		goto _FUNC_ESCI;
		
	// Funzioni: Moltiplicazione
	func_moltiplicazione:
		printf("Inserisci il primo numero:");
		scanf("%d", &numero1);
		printf("Inserisci il secondo numero:");
		scanf("%d", &numero2);
		risultato = 0;
		risultato = numero1 * numero2;
		printf("\nIl risultato e: %d (%d * %d)", risultato, numero1, numero2);
		goto _FUNC_ESCI;
		
	// Funzioni: Dividi
	func_divisione:
		printf("Inserisci il primo numero:");
		scanf("%d", &numero1);
		if(numero1 == 0)
		{
			printf("/!\ NON PUOI DIVIDERE PER ZERO /!\\");
			printf("Inserisci il primo numero:");
			scanf("%d", &numero1);
		}
		printf("Inserisci il secondo numero:");
		scanf("%d", &numero2);
		risultato = 0;
		risultato = numero1 / numero2;
		printf("\nIl risultato e: %d (%d / %d)", risultato, numero1, numero2);
		goto _FUNC_ESCI;
		
	// Funzioni: Annulla / Esci
	func_annulla:
		 printf("\n\nHai usato \"Calcolatrice in C\" di Cristian Cosenza!\n");
		 printf("Ciao!\n\n");
		 system("pause");
		
	getchar();
	return 0;
}
