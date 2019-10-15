//
// Created by Isabel Blanco on 15/10/2019.
//

#ifndef EX2_CELL_HPP
#define EX2_CELL_HPP


class Cell {
    Cell *next;
    int element;

public:
    Cell(int);

    Cell *getNext() const;

    int getElement() const;


    void setNext(Cell *next);
    void setElement(int element);

    Cell(int element);

};

