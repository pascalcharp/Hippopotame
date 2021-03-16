/**
 @file pachydermetesteur
 @brief Exemple de tests pour une classe abstraite
 * 
 * On va créer une classe dérivée de notre classe abstraite, et faire le 
 * minimum d'implémentation des méthodes virtuelles pures.
 *
 */

#include "gtest/gtest.h"
#include "Pachyderme.h"

/**
 * @class PachydermeDerivee
 * 
 * Cette classe sert seulement à tester certaines méthodes de notre classe
 * abstraite Pachyderme.
 * 
 * On va donc "implémenter" les deux méthodes virtuelles pures de Pachyderme
 * afin d'avoir une classe instantiable.
 * 
 */

class PachydermeDerivee : public Pachyderme {
  
  public:
    
  PachydermeDerivee(double p_masse = 1000) : Pachyderme(p_masse) {}
  
  // On doit absolument "implémenter" les méthodes virtuelles pures
  
  // Celle-ci, déjà partiellement implémentée ne fait rien d'autre
  // que retourner le résultat de la méthode de base.
  
  std::string reqPachydermeFormate() const override {
    return Pachyderme::reqPachydermeFormate() ; 
  }
  
  // Celle-ci sera implémentée dans les autres classes dérivées, donc on lui
  // fournit juste un implémentation bidon qui ne fait rien et ne SERA PAS TESTÉE!!
  
  Pachyderme* jeRetourneUnPointeur() const override {
    return nullptr ; // Aucune importance, on ne la teste pas!!!
  }
};

/**
 * Méthode testée: constructeur
 * Comportement attendu: aucune exception n'est lancée
 */

TEST(PachydermeDerivee, ConstructeurNoThrow) {
  EXPECT_NO_THROW(PachydermeDerivee p(1546)) ; 
}

/**
 * Méthode testée: constructeur
 * Comportement attendu: le constructeur affecte la valeur appropriée à l'attribut
 * m_masse.
 */

TEST(PachydermeDerivee, ConstructeurAffecteMasseOK) {
  PachydermeDerivee p(666) ; 
  EXPECT_EQ(666, p.reqMasse()) ; 
}

/**
 Méthode testée: reqPachydermeFormate
 Comportement attendu: retourne une string contenant le poids correct du pachyderme
 */

TEST(PachydermeDerivee, reqPachydermeFormate) {
  PachydermeDerivee p(3425) ; 
  EXPECT_EQ("Je suis un pachyderme imposant.  Je pèse: 3425 kg! WOW!!", p.reqPachydermeFormate ()) ; 
}

/**
 * Méthode testée: doublerLaMasse
 * Comportement attendu: la méthode reqPachydermeFormate retournera une string
 * affichant le double du poids fourni au constructeur
 */

TEST(PachydermeDerivee, doublerLaMasse) {
  PachydermeDerivee p(2000) ; 
  
  p.doublerLaMasse () ; 
  EXPECT_EQ("Je suis un pachyderme imposant.  Je pèse: 4000 kg! WOW!!", p.reqPachydermeFormate ()) ; 
}