#include <stdio.h>

int main(void){
    char menu[10];
    char c='d';
    int op=1;
    float next, total;

    
    printf("input your first number: ");
    scanf("%f", &total);
    getchar();    
    
    while(op!=0){
        printf("---------------\n '+' to sum\n '-' to subt\n '*' to mult\n '/' to div\n '=' to finish\n---------------\n INPUT: ");
        fgets(menu, sizeof(menu), stdin);
        printf("input a number: ");
        scanf("%f", &next);
        getchar();
        c=menu[0];
        if(c=='='){
            op=0;
            continue;
        }
        switch (c){
            case '+':
                total+=next;
                printf("total (parcial): %f\n", total);
                break;
            case '-':
                total-=next;
                printf("total (parcial): %f\n", total);
                break;
            case '*':
                total*=next;
                printf("total (parcial): %f\n", total);
                break;
            case '/':
                total/=next;
                printf("total (parcial): %f\n", total);
                break;
        
            default:
                printf("invalid");
                break;
        }
    }
    printf("result: %.2f", total);    
    return 0;
}