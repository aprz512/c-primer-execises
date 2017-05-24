索引 vector 中的 int 元素，不明白！
题目的意思，应该是用什么类型可以表示 vector 的索引？
真的讨厌翻译，老子要去学英语

使用 vector<int>::size_type，因为规定了 size_type 可以表示vector最大容量
