// @brief функции генерации различных данных
//
// Дата: 20.04.2021
// Дата создания: 20.04.2021

#pragma once

#ifndef GENERATORS_H
#define GENERATORS_H

#include <irsdefs.h>
#include <irscpp.h>
#include <irsnetdefs.h>

#include <cstdlib>
#include <random>

namespace irs
{

  inline string generate_str(size_t length)
  {
    srand(time(NULL));

    const string characters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string result = "";
    
    for (size_t i = 0; i < length; i++) {
      result += characters[rand() % characters.length()];
    }
    
    return result;
  }
  
} // namespace irs

#endif // GENERATORS_H
