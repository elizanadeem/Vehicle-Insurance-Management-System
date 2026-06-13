#pragma once
#ifndef SALESMAN_H
#define SALESMAN_H

#include "Staff.h"

class Salesman : public Staff {
private:
    double commissionRate;

public:
    Salesman();
};

#endif