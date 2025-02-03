#include <stdio.h>
#include <windows.h>
#include "Piano.h"

Note* creerNote(float frequence, float duree) {

	Note* note = malloc(sizeof(Note));
	
	note->frequence = frequence;
	note->duree = duree;

	return note;
	
}

void  simulerPiano(Note** notes, int nbrmax) {

	nbrmax = 12;
	
	while (1) {
		if (_kbhit()) {
			char touche = _getch();

			if (touche == 'a') {
				Beep(notes[0]->frequence, 400);
			}
			if (touche == 'z') {
				Beep(notes[1]->frequence, 400);
			}
			if (touche == 'e') {
				Beep(notes[2]->frequence, 400);
			}
			if (touche == 'r') {
				Beep(notes[3]->frequence, 400);
			}
			if (touche == 't') {
				Beep(notes[4]->frequence, 400);
			}
			if (touche == 'y') {
				Beep(notes[5]->frequence, 400);
			}
			if (touche == 'u') {
				Beep(notes[6]->frequence, 400);
			}
			if (touche == 'i') {
				Beep(notes[7]->frequence, 400);
			}
			if (touche == 'o') {
				Beep(notes[8]->frequence, 400);
			}
			if (touche == 'p') {
				Beep(notes[9]->frequence, 400);
			}
			if (touche == 'q') {
				Beep(notes[10]->frequence, 400);
			}
			if (touche == 's') {
				Beep(notes[11]->frequence, 400);
			}
		}
	}
}

void libererNote(float* frequence, float* duree) {



}




