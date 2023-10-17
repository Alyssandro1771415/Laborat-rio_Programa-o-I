#include<stdio.h>
#include<stdlib.h>

int main(){

    int repeticao,pessoas,pulos,vez=0,count,cas=0,*p,i,final;
    scanf("%d",&repeticao);
    while(repeticao){

        cas++;
        scanf("%d %d",&pessoas,&pulos);

        if(pessoas >= 1 && pessoas <= 10000 && pulos >=1 && pulos <=1000){

            p = (int*) calloc((pessoas+1),sizeof(int));

            for(i=1;i<=pessoas;i++){
                p[i]=i;
            }

            count=pessoas;
            vez=pulos;

            while(count!=1){
                for(i=1;i<=pessoas;i++){
                    if(p[i]!=0){
                        vez--;
                        if(vez==0){
                            p[i]=0;
                            vez=pulos;
                            count--;
                            if(count<1){
                                p[pessoas]=pessoas;
                                final=pessoas;
                                count=1;
                                break;
                            }

                        }else
                            final=i;
                    }
                }
            }
            printf("Case %d: %d\n",cas,p[final]);
            free(p);
            repeticao--;

        }
    }
}