#ifndef menuElement_h
#define menuElement_h

//Malli funktio-osoittimesta
typedef void (* menuLine)(int);
struct menuElement{
  menuLine mL;
  struct menuElement* t;
};
//Rivin tulostus-funktiot
void menu2line1(int row);
void menu2line2(int row);
//Rivien tiedot
extern menuElement mEmenu2line1;
extern menuElement mEmenu2line2;
//Taulukko riveistä > eli valikko
extern menuElement Menu21[];
//Rivin tulostus-funktiot
void menu1line1(int row);
void menu1line2(int row);
//Rivien tiedot
extern menuElement mEmenu1line1;
extern menuElement mEmenu1line2;
//Valikko Menu1
extern menuElement Menu1[];

#endif menuElement_h
