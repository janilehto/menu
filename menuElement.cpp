#include <Arduino.h>
#include "menuElement.h"
/*
 * Menu22
 */
//Funktio joka piirtää yhden rivin valikkoon
void menu22line1(int row){
  Serial.print("Menu 22 Line 1 param: ");
  Serial.println(row);
}
//Funktio joka piirtää yhden rivin valikkoon
void menu22line2(int row){
  Serial.print("Menu 22 Line 2 param: ");
  Serial.println(row);
}

menuElement mEmenu22line1{
  &menu22line1
  //Linkki puuttuu
};

menuElement mEmenu22line2{
  &menu22line2
  //Linkki puuttuu
};
menuElement Menu22[]={
  mEmenu22line1,
  mEmenu22line2
};

/*
 * Menu21
 */
//Funktio joka piirtää yhden rivin valikkoon
void menu21line1(int row){
  Serial.print("Menu 21 Line 1 param: ");
  Serial.println(row);
}
//Funktio joka piirtää yhden rivin valikkoon
void menu21line2(int row){
  Serial.print("Menu 21 Line 2 param: ");
  Serial.println(row);
}

menuElement mEmenu21line1{
  &menu21line1
  //Linkki puuttuu
};

menuElement mEmenu21line2{
  &menu21line2
  //Linkki puuttuu
};
menuElement Menu21[]={
  mEmenu21line1,
  mEmenu21line2
};
/*
 * Menu1
 */
//Funktio joka piirtää yhden rivin valikkoon
void menu1line1(int row){
  Serial.print("Menu 1 Line 1 param: ");
  Serial.println(row);
}
//Funktio joka piirtää yhden rivin valikkoon
void menu1line2(int row){
  Serial.print("Menu 1 Line 2 param: ");
  Serial.println(row);
}
//struct jossa tekstin luonti ja linkki seuraavaan valikkoon
menuElement mEmenu1line1{
  &menu1line1,
  Menu21
};
menuElement mEmenu1line2{
  &menu1line2,
  Menu22
};

//Valikko Menu1
menuElement Menu1[]={
  mEmenu1line1,
  mEmenu1line2
};
