#include<stdio.h>
#include<graphics.h>

int main(){

int in = 0;
int gd,gm=VGAMAX;
int a;
gd=DETECT;
initgraph(&gd,&gm,NULL);
line(200,200,100,100);
scanf("%d",&a);
//Wait for a key press

while (in == 0) {
    in = getchar();
}
return 0;
}
