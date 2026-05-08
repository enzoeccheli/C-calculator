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
        c=menu[0];
        if(c=='='){
            op=0;
            break;
        }
        printf("input a number: ");
        scanf("%f", &next);
        getchar();
        switch (c){
            case '+':
                total+=next;
                printf("total (parcial): %.2f\n", total);
                break;
            case '-':
                total-=next;
                printf("total (parcial): %.2f\n", total);
                break;
            case '*':
                total*=next;
                printf("total (parcial): %.2f\n", total);
                break;
            case '/':
                if(next!=0){
                    total/=next;
                    printf("total (parcial): %.2f\n", total);
                }else{
                    printf("Div 0, error\n");
                }
                    break;
        
            default:
                printf("MENU ERROR - INPUT A VALID OP CHAR OR NUMBER\n");
                break;
        }
    }
    printf("result: %.2f", total);    
    return 0;
}