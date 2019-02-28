/*
Create the interface for a Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area 
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

namespace acc {
	class Rectangle
	{
	public:
		Rectangle(int h, int w);
		int get_area()const;
	private:
		int area, height, width;
		void calculate_area();

	};
}