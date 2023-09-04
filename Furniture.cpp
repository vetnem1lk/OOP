#include "Furniture.h"

Furniture::Furniture(int h, Quality q) : height(h), quality(q) {}

int Furniture::CalculateWoodRequired() const {
    int woodRequired = 0;
    switch (quality) {
        case Quality::Low:
            woodRequired = 4 * height + 12;
            break;
        case Quality::Medium:
        case Quality::High:
            woodRequired = 5 * height + 14;
            break;
    }
    return woodRequired;
}

double Furniture::CalculateCost() const {
    int woodRequired = CalculateWoodRequired();
    double cost = 0;
    switch (quality) {
        case Quality::Low:
            cost = woodRequired * 2;
            break;
        case Quality::Medium:
            cost = woodRequired * 3;
            break;
        case Quality::High:
            cost = woodRequired * 4;
            break;
    }
    return cost;
}

std::string Furniture::Information() const {
    return "Height: " + std::to_string(height) + " cm\nQuality: " +
           QualityToString(quality) + "\nWood Required: " + std::to_string(CalculateWoodRequired()) +
           " units\nCost: $" + std::to_string(CalculateCost()) + "\n";
}

std::string Furniture::QualityToString(Quality q) {
    switch (q) {
        case Quality::Low:
            return "Low";
        case Quality::Medium:
            return "Medium";
        case Quality::High:
            return "High";
    }
    return "";
}