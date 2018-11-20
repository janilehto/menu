//Malli funktio-osoittimesta
typedef void (* menuLine)(int);
struct menuElement{
  menuLine mL;
  struct menuElement* t;
};

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
//Funktio joka piirtää yhden rivin valikkoon
void menu2line1(int row){
  Serial.print("Menu 2 Line 1 param: ");
  Serial.println(row);
}
//Funktio joka piirtää yhden rivin valikkoon
void menu2line2(int row){
  Serial.print("Menu 2 Line 2 param: ");
  Serial.println(row);
}
menuElement mEmenu2line1{
  &menu2line1
  //Linkki puuttuu
};
menuElement mEmenu2line2{
  &menu2line2
  //Linkki puuttuu
};
menuElement Menu21[]={
  mEmenu2line1,
  mEmenu2line2
};
//struct jossa tekstin luonti ja linkki seuraavaan valikkoon
menuElement mEmenu1line1{
  &menu1line1,
  Menu21
};
menuElement mEmenu1line2{
  &menu1line2
  //Linkki puuttuu
};

//Valikko Menu1
menuElement Menu1[]={
  mEmenu1line1,
  mEmenu1line2
};

void setup(){
  Serial.begin(9600);
}

int menuRow=0;
menuElement *menu=Menu1;
void loop(){
  if(Serial.available()){
    int x=Serial.read();
    switch(x){
      case 'a':menuRow++;break;
      case 'd':menuRow--;break;
      case 's':menu=menu[menuRow].t;
    }
  }
  menu[0].mL(menuRow);
  menu[1].mL(menuRow);
}
