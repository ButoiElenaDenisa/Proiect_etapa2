#if !defined(ICLASIFICABIL_H)
#define ICLASIFICABIL_H

#include <vector>
#include "Apreciere.h"

class IClasificabil
{
protected:
    Apreciere const* aprecieri[100];
    int nrAprecieri;
public:
    virtual void adaugaApreciere(const Apreciere*) = 0;
    virtual float apreciereMedie() = 0;


};

#endif // ICLASIFICABIL_H
