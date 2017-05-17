using arr = string[10];
typedef string arr[10];

arr& fun(arr& arry);

auto fun(arr& arry) -> string(&)[10];

string sarr[10];

decltype(sarr)& fun(arr& arry);


