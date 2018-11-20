#ifndef menuElement_h
#define menuElement_h

//Malli funktio-osoittimesta
typedef void (* menuLine)(int);
struct menuElement{
  menuLine mL;
  struct menuElement* t;
};
/*
 * Menu22
 */
//Rivin tulostus-funktiot
void menu22line1(int row);
void menu22line2(int row);
//Rivien tiedot
extern menuElement mEmenu22line1;
extern menuElement mEmenu22line2;
//Taulukko riveistä > eli valikko
extern menuElement Menu22[];
/*
 * Menu21
 */
//Rivin tulostus-funktiot
void menu21line1(int row);
void menu21line2(int row);
//Rivien tiedot
extern menuElement mEmenu21line1;
extern menuElement mEmenu21line2;
//Taulukko riveistä > eli valikko
extern menuElement Menu21[];
/*
 * Menu1
 */
//Rivin tulostus-funktiot
void menu1line1(int row);
void menu1line2(int row);
//Rivien tiedot
extern menuElement mEmenu1line1;
extern menuElement mEmenu1line2;
//Valikko Menu1
extern menuElement Menu1[];

#endif menuElement_h
