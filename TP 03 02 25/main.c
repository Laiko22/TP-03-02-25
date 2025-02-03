#include <stdio.h>
#include "Piano.h"
#include <stdlib.h>


int main() {

	int nbrmax = 12;


	float frequencies[12] = { 261.63, 277.18, 293.66, 311.13, 329.63, 349.23, 369.99,392.00, 415.30, 440.00, 466.16, 493.88 };
	Note** note = malloc(sizeof(Note*)*12);

	for (int i = 0; i < 12; i++) {

		Note* n = creerNote(frequencies[i], 400);

		note[i] = n;

	}
	simulerPiano(note,nbrmax);

	return 0;
}