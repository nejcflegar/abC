
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "naloga.h"

int poisciStudenta(Student** studentje, int stStudentov, int vpisna) {
    for(int i = 0; i< stStudentov; i++){
        if((**(studentje+i)).vpisna == vpisna){
            return i; 
        }

    }
    return -1;
}

int poisciPO(Student* student, char* predmet) {
    
    for(int i = 0; i < (*student).stPO; i++){
        if(strcmp(((*student).po + i)->predmet,predmet) == 0){
            return i;
        } }


    return -1;
}

int dodaj(Student** studentje, int stStudentov, int vpisna, char* predmet, int ocena) {
    
    int indexS = poisciStudenta(studentje, stStudentov, vpisna);
    if(indexS != -1){
        int indexPO = poisciPO(*(studentje + indexS), predmet);
            if(indexPO != -1){
                //(*studentje + indexS)->po[indexPO].ocena = ocena;
                ((*(studentje + indexS))->po + indexPO)->ocena = ocena;
                return stStudentov;

                //(*((*(*studentje+indexS)).po + indexPO)).ocena = ocena;
            }else{
                
                /*
                PO *p = (PO*)malloc(sizeof(PO));
                
                //Student *s = *studentje + indexS;                  sam ne niga . . .
                strcpy(p->predmet, predmet);
                p->ocena = ocena;
                */
                //(*(studentje + indexS))->po + (*(studentje + indexS)->stPO) = p;


                (*((*(studentje + indexS))->po +( (*(studentje + indexS))->stPO))).ocena = ocena;
                strcpy((*((*(studentje + indexS))->po +( (*(studentje + indexS))->stPO))).predmet,predmet);
                //printf("%s\n",(*((*(studentje + indexS))->po +( (*(studentje + indexS))->stPO))).predmet);
                //temp.ocena = ocena;
                //strcpy(temp.predmet, predmet);
                (*(studentje + indexS))->stPO++;
                //PO *temp2 = (*studentje + indexS)->po + (*studentje + indexS)->stPO;


                
                return stStudentov;

            }
    }else{
        Student *s = (Student*)malloc(sizeof(Student));
        s->vpisna = vpisna;
        s->po = (PO*)malloc(sizeof(PO)*10); //ena
        strcpy(s->po[0].predmet, predmet);
        s->po[0].ocena = ocena;
        s->stPO = 1;
        studentje[stStudentov] = s;
        stStudentov += 1; //dva
        return stStudentov; //tri

    }

    if(indexS == -1){
        return 1;
    }else{
        return 0;
    }
}
#ifndef test

int main() {

    return 0;
}

#endif

/*
void izpisi(Student** studentje, int stStudentov) {
    for (int i = 0;  i < stStudentov;  i++) {
        printf("%d: [", studentje[i]->vpisna);
        int stPO = studentje[i]->stPO;
        PO* po = studentje[i]->po;
        for (int j = 0;  j < stPO;  j++) {
            if (j > 0) {
                printf(", ");
            }
            printf("%s/%d", po[j].predmet, po[j].ocena);
        }
        printf("]\n");
    }
    printf("\n");
}

int main() {
    Student* studentje[] = {
        (Student[]) {333, (PO[]){{"FIZ", 10}, {"P1", 7}, {"P2", 8}, {"ODV", 9}, {"", 0}}, 4},
        (Student[]) {888, (PO[]){{"", 0}}, 0},
        (Student[]) {555, (PO[]){{"ARS", 6}, {"P2", 8}, {"ODV", 9}, {"", 0}}, 3},
        (Student[]) {111, (PO[]){{"OMA", 9}, {"", 0}}, 1},
        (Student[]) {777, (PO[]){{"P1", 10}, {"P2", 7}, {"", 0}}, 2},
        NULL
    };
    int stStudentov = sizeof(studentje) / sizeof(studentje[0]) - 1;

    izpisi(studentje, stStudentov);
    stStudentov = dodaj(studentje, stStudentov, 111, "ODV", 7);
    printf("%d\n",studentje[3]->stPO);
    izpisi(studentje, stStudentov);

    return 0;
}
*/
