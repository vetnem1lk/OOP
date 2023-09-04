//
// Created by SOTHOTH on 04.09.2023.
//

#ifndef OOP_FURNITURE_H
#define OOP_FURNITURE_H

#include <string>

enum class Quality { Low, Medium, High };

class Furniture {
protected:
    int height;
    Quality quality;

public:
    Furniture(int h, Quality q);
    virtual int CalculateWoodRequired() const;
    virtual double CalculateCost() const;
    virtual std::string Information() const;
    static std::string QualityToString(Quality q);
};


#endif //OOP_FURNITURE_H
