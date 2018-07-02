## deque 测试代码说明 ##
### 01.deque.cpp ###
主要测试deque的初始化和遍历:

	deque::deque()
	deque::resize()
	deque::begin()
	deque::end()
	deque::size()
	deque::max_size()
	for_each()

编译运行结果如下：

![](https://i.imgur.com/ob8ZrYp.png)

### 02.deque_push.cpp ###
主要测试deque的插值和赋值操作:

	list::push_front()
	list::push_back()
	for_each()
	[]

编译运行结果如下：

![](https://i.imgur.com/vcjMC1A.png)

### 03.deque_basic_func.cpp ###
主要测试deque的迭代器重载:

	deque::iterator
	deque::reverse_iterator
	deque::begin()
	deque::end()
	deque::rbegin()
	deque::rend()
	deque::empty()
	deque::assign()
	for_each()

编译运行结果如下：

![](https://i.imgur.com/vvq3q7q.png)

### 04.deque_advance_func.cpp ###
deque的插入和删除操作:

	deque::insert()
	deque::swap()
	deque::erase()
	deque::clear()
	find()