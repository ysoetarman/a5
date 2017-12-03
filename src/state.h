#ifndef STATE_H
#define STATE_H

enum class Colour { LBlue, DBlue, Orange, Green, Red, Purple, Yellow, Brown };
enum class Status { Empty, Temp, Solid };
enum class Move { Down, Left, Right };
enum class Rotate { Clockwise, Counterclockwise };
enum class Type { I, J, L, S, Z, T, O, Single };

struct State {
  Status status;
  Type type;
};

#endif
