#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
  	int matriz[9][9], testar[10], i, j, k, h, n, teste = 0;
   
  	scanf("%d",&n);
  
  	for(h = 1; h <= n; h++){
    	
    	teste = 0;
    	
    	for(i = 0; i < 9; i++){
      		for(j = 0; j < 9; j++)
    			scanf("%d",&matriz[i][j]);
    	}
     
	    for(i = 0 ; i < 9 && !teste; i++){
	      	memset(testar, 0, sizeof(testar));
	      	for(j = 0; j < 9 && !teste; j++){
	    		if(testar[matriz[i][j]])
	      			teste = 1;
	    		else
	      			testar[matriz[i][j]] = 1;
	      	}
	    }
	     
	    for(i = 0; i < 9 && !teste; i++){
	      	memset(testar, 0, sizeof(testar));
	      	for(j = 0; j < 9 && !teste; j++){
	    		if(testar[matriz[j][i]])
	      			teste = 1;
	    		else
	      			testar[matriz[j][i]] = 1;
	      	}
	    }
	     
	    for(i = 2; i < 9 && !teste; i+=3){
	      	memset(testar, 0, sizeof(testar));
	      	for(j = i - 2; j <= i && !teste; j++){
	    		for(k = i - 2; k <= i && !teste; k++){
	      			if(testar[matriz[j][k]])
	        			teste = 1;
	      			else
	        			testar[matriz[j][k]] = 1;
	    		}
	      	}
	    }

	    printf("Instancia %d\n",h);
	    printf("%s\n\n",(!teste)?"SIM":"NAO");
  	}
  	
  	return 0 ; 
}