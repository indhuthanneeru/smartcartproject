
#ifndef CART_H
#define CART_H
#include <stdio.h>

void customer_menu(char *card);
void add_to_cart();
void display_cart();
void delete_items_cart();

extern FILE *fp;
extern char item[20];
extern int quantity;
extern int price;
#endif
                                                                                                                      
    
