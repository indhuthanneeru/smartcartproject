#include "delay.h"
void delay_us(int dlyus){
	for(dlyus*=12;dlyus>0;dlyus--);
}

void delay_ms(int dlyms){
	for(dlyms*=12000;dlyms>0;dlyms--);
}

void delay_s(int dlys){
	for(dlys*=12000000;dlys>0;dlys--);
}

