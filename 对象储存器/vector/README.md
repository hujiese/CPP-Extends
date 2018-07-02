## vector 测试代码说明 ##
### 01.bittest.cpp ###
用于测试“位操作”容器，容器每个元素都是一个bit，测试结果如下:

![](https://i.imgur.com/0k9WJP6.png)

### 02.valarray.cpp ###
用于测试valarray，结果如下:

![](https://i.imgur.com/kVFNl0U.png)

### 03.vector.cpp ###
用于测试vector的常用函数和迭代器:

	vector::reserve()
	vector::iterator
	vector::begin()
	vector::end()
	vector::size()
	vector::capacity()
	vector::max_size()
	vector::resize()

测试结果如下：

![](https://i.imgur.com/UBwpBdW.png)

### 04.vector_empty.cpp ###
主要测试vector的:

	vector::push_back()
	vector::empty()
	vector::back()
	vector::pop_back()

测试结果如下：

![](https://i.imgur.com/s5vLAsb.png)

### 05.vector_traverse.cpp ###
遍历容器vector的各种方法:

	vector::iterator
	vector::at()
	for_each()
	count_if()

测试结果如下：

![](https://i.imgur.com/EiSyKDD.png)

### 06.vector\_find_and\_serach.cpp ###
使用算法对vector查找：
	
	find()
	find_if()

测试结果如下：

![](https://i.imgur.com/fiXYG9K.png)

### 07.vector_sort.cpp ###
使用算法对vector排序:

	sort()
	for_each()

测试结果如下：

![](https://i.imgur.com/roDwzl0.png)

### 08.vector_instert.cpp###
使用insert插入元素:

	vector::insert()
	for_each()

测试结果如下：

![](https://i.imgur.com/UZ0uaeN.png)

### 09.vector_erase.cpp ###

主要测试vectro的删除操作：

	for_each()
	vector::clear()
	vector::erase()

测试结果如下：

![](https://i.imgur.com/xXT8f5V.png)

### 10.vector_swap.cpp ###
主要测试vector的swap()函数:

	vector::swap()

测试结果如下：

![](https://i.imgur.com/rctk81i.png)