#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stock.h"
#include "cart.h"
FILE *fp;

char item[20];
char rfid[20];
int quantity;
int price;

void manager_menu(char *card)
{
    int found = 0;
    fp = fopen("stock.txt","r");

    if(fp == NULL)
    {
        printf("FILE NOT FOUND\n");
        return;
    }

    while(fscanf(fp,"%[^|]|%[^|]|%d|%d\n",item,rfid,&quantity,&price) != EOF)
    {
        if(strcmp(card,rfid) == 0)
        {
            found = 1;

            printf("\nITEM FOUND\n");
            printf("ITEM : %s\n",item);
            printf("QUANTITY : %d\n",quantity);
            printf("PRICE : %d\n",price);

            printf("ENTER NEW QUANTITY : ");
            scanf("%d",&quantity);

            break;
        }
    }

    fclose(fp);

    if(found == 0)
    {
        printf("CARD NOT FOUND\n");
    }
}

void delete_stock(char *card)
{
    printf("DELETE PROCESS FOR CARD : %s\n",card);
}
                            
