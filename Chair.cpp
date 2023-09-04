#include "Chair.h"

Chair::Chair(int h, Quality q, int bh) : Furniture(h, q), backHeight(bh) {}

int Chair::CalculateWoodRequired() const {
    return Furniture::CalculateWoodRequired() + 2 * backHeight + 5;
}

std::string Chair::Information() const {
    return "Chair\n" + Furniture::Information() + "Back Height: " + std::to_string(backHeight) + " cm\n";
}
