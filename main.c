#include <stdio.h>
#include "shapes.h"

int main() {
    int size = 4;
    char fill = '*';
    drawTriUp(size, fill);
    drawSquare(size, fill);
    drawTriDown(size, fill);
    return 0;
}
