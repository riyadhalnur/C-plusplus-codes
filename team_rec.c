#include <stdio.h>

struct Team {
    char name[100];
    int wins;
    int losses;
    int ties;
} t[20];

int main() {
    int i;

    for(i=0; i<20; i++) {
        sprintf(t[i].name, "Team %d", i);
        t[i].wins = i;
        t[i].losses = i;
        t[i].ties = i;
    }

    for(i=0; i<20; i++) {
            if(t[i].losses == 0) {
                printf("Unbeaten team: %s\n", t[i].name);
            }
    }

    return 0;

}
