#include "menuElement.h"

int menuRow=0;
menuElement *menu=Menu1;
void setup(){
  Serial.begin(9600);
  menu[0].mL(menuRow);
  menu[1].mL(menuRow);}
void loop(){
  if(Serial.available()){
    int x=Serial.read();
    switch(x){
      case 'a':menuRow++;break;
      case 'd':menuRow--;break;
      case 's':menu=menu[menuRow].t;break;
      case 10:menu[0].mL(menuRow);
              menu[1].mL(menuRow);
              break;
    }
  }

}
