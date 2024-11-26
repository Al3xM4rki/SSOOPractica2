#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handle_exitSignal(int signal){
    printf("\nSaliendo de la minishell...\n");
    exit(0);
}

int main(){
    signal(SIGINT, handle_exitSignal);
    while (1){
        printf("msh> ");
        fflush(stdout); //nos asegura que el prompt se imprime antes de esperar entrada siempre

        //ejemplo de entrada
        char comando[10];
        scanf("%s", comando);
        printf("%s\n", comando);
    }

}
