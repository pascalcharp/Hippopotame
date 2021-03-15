
/* 
 * File:   Pachyderme.h
 * Author: Pascal Charpentier
 *
 * Created on 15 mars 2021, 14:43
 */

#ifndef PACHYDERME_H
#define PACHYDERME_H

#include <string>

/**
 @class Pachyderme
 
 @brief Classe abstraite symbolisant un pachyderme.  Pourra être dérivée en 
 éléphant, hippopotame, etc.
 
 Elle contient deux méthodes virtuelles pures:
 
 reqPachydermeFormate() qui est partiellement implémentée.
 jeRetourneUnPointeur() qui n'est pas implémentée du tout.
 
 */

class Pachyderme
{
public:
  Pachyderme (double = 1000.0);
  virtual ~Pachyderme ();
  
  // *** Méthodes publiques qu'on voudra tester!!! ***
  
  void doublerLaMasse() ;
  
  //  *** Méthodes virtuelles pures ***
  
  // Celle-ci est partiellement implémentée
  virtual std::string reqPachydermeFormate() const = 0; 
  
  // Celle-ci n'est pas du tout implémentée
  virtual Pachyderme* jeRetourneUnPointeur() const = 0 ; 
  
private:
  double m_masse ; 

};

#endif /* PACHYDERME_H */

