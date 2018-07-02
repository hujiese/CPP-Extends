## list 测试代码说明 ##
### 01.list.cpp ###
主要测试list的初始化构造函数等操作:

	list::push_front()
	list::list()
	list::iterator
	list::reverse_iterator
	list::begin()
	list::end()
	list::size()
	list::max_size()
	list::resize()
	list::rbegin()
	list::rend()
	list::front()
	list::back()
	for_each()

### 02.list_empty.cpp ###
主要测试empty函数:

	list::empty()

### 03.list\_get_element.cpp ###
测试list使用迭代器获取元素 ###

	list::iterator
	for_each()
编译运行结果如下:

![](https://i.imgur.com/Cx9xBva.png)

### 04.list\_assign.cpp ###
主要测试list的赋值操作:

	list::reverse()
	list::assign()

编译运行结果如下:

![](https://i.imgur.com/YNM5C96.png)


### 05.list_swap.cpp ###
主要测试list的交换操作:

	list::swap()

### 06.list_erase.cpp ###
主要测试list的删除操作:

	list::erase()

### 07.list_operator.cpp ###
主要测试list的比较运算符重载

### 08.list\_merge_sort.cpp ###
list的归并和排序:

	list::merge()
	list::sort()

编译运行结果如下:

![](https://i.imgur.com/3EZjZZX.png)

### 09.list\_remove_if.cpp ###
主要测试list的remove和remove_if操作:

	list::remove()
	list::remove_if()

### 10.list_splice.cpp ###

测试list的splice操作:

	list::splice()

编译运行结果如下:

![](https://i.imgur.com/YJAFgrV.png)

### 11.list_unique.cpp ###

list的unique操作:

	list::unique()