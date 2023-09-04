//
// Created by SOTHOTH on 04.09.2023.
//

#ifndef OOP_CHAIR_H
#define OOP_CHAIR_H


#include "Furniture.h"

class Chair : public Furniture {
private:
    int backHeight;

public:
    Chair(int h, Quality q, int bh);
    int CalculateWoodRequired() const override;
    std::string Information() const override;
};


#endif //OOP_CHAIR_H
