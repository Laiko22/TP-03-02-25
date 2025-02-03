#ifndef PIANO_H
#define PIANO_H

typedef struct {

	float frequence;
	float duree;

}Note;

Note* creerNote(float frequence, float duree);

void libererNote(float frequence, float duree);

void  simulerPiano(Note** notes, int nbrmax);

#endif 

