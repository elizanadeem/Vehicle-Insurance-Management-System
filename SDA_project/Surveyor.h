#pragma once
#ifndef SURVEYOR_H
#define SURVEYOR_H

#include "Staff.h"

class Surveyor : public Staff {
private:
    string certificationNo;

public:
    Surveyor();
};

#endif