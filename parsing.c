#include "shell.h"



    *copy_buffer = NULL;
    char *token;
	char *delim = " \n";
	int num_tokens = 0, i = 0;
	char **argv;

/* to copy what the user typed, let's allocate enough space for it */
	copy_buffer = malloc(sizeof(char) * num_read);

	/* copy the content of buffer to copy_buffer */
	strcpy(copy_buffer, buffer);

	/* get the number of tokens to be created */
	token = strtok(buffer, delim);
	
	while(token != NULL){
		num_tokens++;
		token = strtok(NULL, delim);
	}
	num_tokens++;
	

	argv = malloc(sizeof(char *) * num_tokens);

	/* get the tokens and save them as arguments in argv */
	token = strtok(copy_buffer, delim);
	while(token != NULL){
		/* allocate space for each token */
		argv[i] = malloc(sizeof(char) * strlen(token));
		strcpy(argv[i], token);    
		
		/* for debugging purposes */
		printf(">>>>>> %s\n", argv[i]);  
		/**********************************/  
		i++;
		token = strtok(NULL, delim);
	}
	argv[i] = NULL;
	 /* for debugging purposes */
		printf(">>>>>> %s\n", argv[i]);  
		/**********************************/ 
	printf("The user type %d number of tokens \n",  i);


