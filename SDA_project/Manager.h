#pragma once
#ifndef MANAGER_H
#define MANAGER_H

#include "Staff.h"

class Manager : public Staff {
private:
    int accessLevel;

public:
    Manager();
};

#endif