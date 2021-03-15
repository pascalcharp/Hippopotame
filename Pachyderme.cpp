/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pachyderme.cpp
 * Author: Pascal Charpentier
 * 
 * Created on 15 mars 2021, 14:43
 */

#include "Pachyderme.h"
#include <sstream>

/**
 * @brief Constructeur
 * @param p_masse Masse initiale du pachyderme
 */

Pachyderme::Pachyderme (double p_masse) : m_masse(p_masse) { }

/**
 * @brief Méthode publique qui multiplie la masse par deux.  On voudrait 
 * certainement tester cette méthode.
 */

void Pachyderme::doublerLaMasse() {
  m_masse *= 2 ; 
}

/**
 * @brief Méthode virtuelle pure pour l'affichage des infos du pachyderme. Vu
 * qu'elle est partiellement implémentée, on pourrait vouloir la tester.
 * @return Une string indiquant la masse du pachyderme
 */

std::string  Pachyderme::reqPachydermeFormate() const {
  std::ostringstream os ; 
  os << "Je suis un pachyderme imposant.  Je pèse: " << m_masse << " kg! WOW!!" ; 
  return os.str() ; 
}


Pachyderme::~Pachyderme () { }

