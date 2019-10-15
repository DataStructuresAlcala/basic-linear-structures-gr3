//
// Created by Isabel Blanco on 15/10/2019.
//

#include "Cell.hpp"

Cell *Cell::getNext() const {
    return next;
}

void Cell::setNext(Cell *next) {
    Cell::next = next;
}

void Cell::setElement(int element) {
    Cell::element = element;
}

Cell::Cell(int element) : element(element) {}
