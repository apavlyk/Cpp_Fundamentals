#include <iostream>
#include "move_class.h"

Move::Move(double a, double b)
{
	x = a;
	y = b;
}
void Move::showmove() const
{
	std::cout << "X is equal " << x << std::endl;
	std::cout << "Y is equal " << y << std::endl;
}
Move Move::add(const Move & m) const
{
	Move new_move(m.x, m.y);
	return new_move;
}
// this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it
void Move::reset(double a, double b) // resets x,y to a, b
{
	x = a;
	y = b;
}