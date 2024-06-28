#include <stdio.h>
#include <stdlib.h>

int main(void) {
     int i;
     for(i=1;i<=7;i++){
    	 printf("Hi ");
    	 if(i==5){
    		 continue; 
    	 }
    	 printf("Hello \n");
     }
     printf("Finished \n");
	return EXIT_SUCCESS;
}