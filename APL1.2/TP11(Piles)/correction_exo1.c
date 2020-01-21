/*correction*/

char pop(maillio** premier)
	maillions *p;
	if(*premier === NULL){
		printf("pile vide");
		exit(1);
	}

	else{

		p = *premier
		char c = (*premier)->valeur;
		*premier = (*premier)->suivant;
		free(p);
		return c;
	}
