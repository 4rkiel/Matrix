#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <time.h>


typedef struct posi_s {
	int x;
	int y;
	int n;
} posi;



int rand_posi (int x){
	return rand() % x;
}



char rand_char (){

	int r;
	int c = 1;

	while(c){

		r = rand() % 123;
		
		c = (r >= '0' && r <= '9') || (r >= 'a' && r <= 'z') 
			|| (r >= 'A' && r <= 'Z');
	}

	return c;
}



void loop (){



	while (1){

			// Get term size

			struct winsize w;
			ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

			int width = w.ws_row;
			int height = w.ws_col;



			
			// sleep

			usleep(42);
	}

	return;
}



int main (){

	// random seed

	srand(time(NULL));


	

	return EXIT_SUCCESS;
}
