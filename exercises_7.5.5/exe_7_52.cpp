去掉构造函数
所有的成员变为public
去掉类内初始值

调整成员顺序，符合显示初始化过程

struct Sales_data {
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};
