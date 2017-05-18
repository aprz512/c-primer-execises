#ifndef exe_7_23_h
#define exe_7_23_h

#include <iostream>

class Screen {

public:
	typedef std::string::size_type pos;
	
	Screen() = default;
	
	Screen(pos w, pos h) : width(w), height(h), content(w * h, ' ')
	{
	}
	
	Screen(pos w, pos h, char c) : width(w), height(h), content(w * h, c)
	{
	}
	
	char get() const
	{
		return content[cursor];
	}
	
	char get(pos x, pos y) const
	{
		return content[y * width + x];
	}
	
	Screen &move(pos c, pos r)
	{
		cursor = r * width + c;
		return *this;
	}
	
	Screen &set(char ch)
	{
		content[cursor] = ch;
		return *this;
	}
	
	Screen &display()
	{
		std::cout << "not const" << std::endl;
		do_display();
		return *this;
	}
	
	const Screen &display() const
	{
		std::cout << "const" << std::endl;
		do_display();
		return *this;
	}
	
	void do_display() const
	{
		std::cout << content;
	}
	
private:
	pos width = 0;
	pos height = 0;
	pos cursor = 0;
	std::string content;

};

#endif
