string::size_type find_char(const string &s, char c, string::size_type &occurs)


s 是常量是因为不需要改变s，occurs不是，是要对occurs改变（统计次数）

s occurs 是引用，是因为s避免拷贝，occurs要改变实参的值
c 值传递可满足

s是普通引用，可能会出现改变s的操作

occurs 是常量引用，则occurs无法改变值
