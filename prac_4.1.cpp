//Write a program to fill polygon using following methods: Flood fill


#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<dos.h>  
void flood(int,int,int,int);  
int main(int argc , char const *argv[]){  
    int gd=DETECT,gm;  
    initgraph(&gd,&gm,(char*)"");  
    rectangle(50,50,250,250);  
    flood(55,55,10,0);  
    getch();  
}  
void flood(int x,int y,int fillColor, int defaultColor)  
{  
    if(getpixel(x,y)==defaultColor)  
    {  
        delay(1);  
        putpixel(x,y,fillColor);  
        flood(x+1,y,fillColor,defaultColor);  
        flood(x-1,y,fillColor,defaultColor);  
        flood(x,y+1,fillColor,defaultColor);  
        flood(x,y-1,fillColor,defaultColor);  
    }  
}  