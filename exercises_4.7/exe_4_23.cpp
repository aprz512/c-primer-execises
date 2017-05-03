string s = "word";

string pl = s + s[s.size() - 1] == 's' ? "" : "s";

s + 后面的加上括号，不然 前面的判断就成了 string + char 
