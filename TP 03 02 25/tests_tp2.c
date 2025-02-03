#include <stdio.h>

#define mu_assert(message, test) do { if (!(test)) return message; } while (0)

#define mu_run_test(test) do { char *message = test(); tests_run++; if (message) return message; } while (0)


int tests_run = 0;


int carre(int a)
{

	return a * a;
}

static char* test_carre_positif() {

	int c = carre(3);

	mu_assert("le carre de 3 est 9\n",c == 3*3);

}

static char* test_carre_negatif() {

	int c = carre(-5);

	mu_assert("le carre de -5 est 25\n", c == -5 * -5);

}

static char* test_carre_nul(){

	int c = carre(0);

	mu_assert("le carre de 0 est 0\n", c == 0 * 0);
}

static char* all_tests() {

	mu_run_test(test_carre_positif);
	mu_run_test(test_carre_negatif);
	mu_run_test(test_carre_nul);
	


	return 0;

}



int main()
{
	char* result = all_tests(); // on lance tous les tests
	if (result != 0) // il y a eu une erreur
	{
		printf("%s\n", result); // on affiche le message d�erreur
	}
	else
	{
		printf("All tests passed.\n");
	}
	printf("Tests run: %d\n", tests_run); // on affiche le nombre de tests lanc�s
	return result != 0;
}
