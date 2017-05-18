#ifndef exe_7_23_h
#define exe_7_23_h

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
	
private:
	pos width = 0;
	pos height = 0;
	pos cursor = 0;
	std::string content;

};

#endif
