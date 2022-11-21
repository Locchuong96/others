### Polymorphic objects stored in collections

When you create a collection to store object it will create a collection. For example `Shape`->`Oval`->`Circle` 

	Circle circle1(7.2,"circle1");
	Circle circle2(11.2,"circle2");
	Circle circle3(12.2,"circle3");
	Oval oval1(13.3,1.2,"Oval1");
	Oval oval2(31.3,15.2,"Oval2");
	Oval oval3(53.3,9.2,"Oval3");

	Shape shapes1[] {circle1,circle2,circle3,oval1,oval2,oval3};

Object sliced off, `Circle` will become `Shape`:

	for(Shape s: shapes1){
		std::cout << "Inside array, sizeof(shape): " << sizeof(s) << std::endl;
		// s.draw();
		Shape* shape_ptr = &s;
		shape_ptr->draw();
		std::cout << std::endl;
	}

Won't compiler storing in references.

	const Shape& shapes2[] {circle1,circle2,circle3,oval1,oval2,oval3};


Because the `Left assignability`, you can assign to an reference

	int a = 56;
	int&b = a; // create a reference referencing to value
	b = 56; // trying to change the value inside the reference

Storing in pointers: Works

	Shape* shape3[] = {&circle1,&circle2,&circle3,&oval1,&oval2,&oval3};
	for (Shape* shape_ptr:shapes3){
		std::cout << "Inside array,sizeof(shape_ptr): " << sizeof(shape_ptr) << std::endl;
		std::cout << "Inside array,sizeof(*shape_ptr): " << sizeof(*shape_ptr) << std::endl;
		shape_ptr->draw();
		std::cout << std::endl;
	}

Storing in smart pointers: Works

	# include <memory>
	std::shared_ptr<Shape> shapes4[] {std::make_shared<Circle>(12.2,"Circle4"),std::make_shared<Oval>(10.0,20.0,"Oval4")};
	for (auto& s: shapes4){
		s->draw();
	}