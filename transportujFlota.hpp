#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
        if (towar == 0)
            return 0;

        Stocznia     stocznia;         
        unsigned int suma         = 0; 
        unsigned int ileZaglowcow = 0;

        while (suma < towar) {
            
            Statek* s = stocznia(); 
            unsigned int ile = s->transportuj();
            suma += ile;
            if (dynamic_cast< Zaglowiec* >(s) != nullptr)
                ++ileZaglowcow;   
            delete s;
        }
        return ileZaglowcow;
 
    return 0;
}