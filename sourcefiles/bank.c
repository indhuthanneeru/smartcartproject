#include <stdio.h>
#include "cart.h"
#include <stdlib.h>
#include <string.h>
#include "bank.h"

//FILE *fp;

char place[20];
char ifsc[20];
char bank[20];
int acc_no;
int balance;
int pin;

void bank_menu(char *card)
{
    int amount;

    printf("ENTER BILL AMOUNT : ");
    scanf("%d",&amount);

    pay_bill(atoi(card),amount);
}

void pay_bill(int acc_no,int amount)
{
    FILE *fd;

    int found = 0;
    int t_acc,t_bal,t_pin;

    char t_place[20];
    char t_ifsc[20];
    char t_bank[20];

    fp = fopen("bank.txt","r");

    if(fp == NULL)
    {
        printf("FILE NOT FOUND\n");
        return;
    }

    fd = fopen("temp.txt","w");

    while(fscanf(fp,"%[^|]|%[^|]|%[^|]|%d|%d|%d\n",
          t_place,t_ifsc,t_bank,&t_acc,&t_bal,&t_pin) != EOF)
    {
        if(t_acc == acc_no)
        {
            found = 1;

            if(t_bal >= amount)
            {
                t_bal -= amount;

                printf("PAYMENT SUCCESS\n");
                printf("REMAINING BALANCE : %d\n",t_bal);
            }
            else
            {
                printf("INSUFFICIENT BALANCE\n");
            }
        }

        fprintf(fd,"%s|%s|%s|%d|%d|%d\n",
                t_place,t_ifsc,t_bank,t_acc,t_bal,t_pin);
    }

    fclose(fp);
    fclose(fd);

    remove("bank.txt");
    rename("temp.txt","bank.txt");

    if(found == 0)
    {
        printf("ACCOUNT NOT FOUND\n");
    }
}                                                                                                       
