#  My First Class in Orthodox Canonical Form

You think you know integers and floating-point numbers. How cute.

Until today, every number you used in your code was basically either an integer or a
floating-point number, or any of their variants (short, char, long, double, and so forth).
After reading the article above, it’s safe to assume that integers and floating-point num-
bers have opposite caracteristics.

But today, things will change. You are going to discover a new and awesome number
type: fixed-point numbers! Forever missing from the scalar types of most languages,
fixed-point numbers offer a valuable balance between performance, accuracy, range and
precision. That explains why fixed-point numbers are particularly applicable to computer
graphics, sound processing or scientific programming, just to name a few.


# The real subject

Create a class in Orthodox Canonical Form that represents a fixed-point number:

- Private members:
	- An integer to store the fixed-point number value.
	- A static constant integer to store the number of fractional bits. Its value
will always be the integer literal 8.

- Public members:
	- A default constructor that initializes the fixed-point number value to 0.
	- A copy constructor
	- A copy assignment operator overload.
	- A destructor
	- A member function int getRawBits( void ) const; that returns the raw value of the fixed-point value.
	- A member function void setRawBits( int const raw ); that sets the raw value of the fixed-point number.
