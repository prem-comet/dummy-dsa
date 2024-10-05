#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int coef;
    int exp;
} term;

void addpolymials(term poly1[],int size1,term poly2[], int size2, term result[]){
    int i=0, j=0,k=0;
    while(i< size1 && j<size2){
        if(poly1[i].exp>poly2[j].exp){
            result[k++]=poly1[i++];
        }else if (poly1[i].exp<poly2[j].exp){
            result[k++]=poly2[j++];
        }else {
            result[k].coef=poly1[i].coef+poly2[j].coef;
            result[k].exp=poly1[i].exp;
            if (result[k].coef!=0){
                k++;
            }
            i++;
            j++;
        }
    }
    while (i<size1){
        result[k++]=poly1[i++];
    }
    while (j<size2){
        result[k++]=poly2[j++];
        }
        result[k].coef=0;
        result[k].exp=0;
}

void printpolynomial(term poly[]){
    int i=0;
    while(poly[i].coef!=0 || poly[i].exp !=0){
        if(i!=0){
            printf("+");
        }
        printf("%d%d",poly[i].coef,poly[i].exp);
        i++;
    }
    printf("\n");
}

int main(){
    term poly1[]={{4,3}, {2,1},{1,0}};
    term poly2[]={{3,3},{3,2},{2,0}};
    term result[10];
    int size1=sizeof(poly1) / sizeof(poly1[0]);
    int size2=sizeof(poly2) / sizeof(poly2[0]);
    addpolymials(poly1,size1,poly2,size2,result);
    printpolynomial(result);
    return 0;
    }