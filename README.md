# Lists

int palindrom(List l) {
	if (l.len <= 1)
		return 1;
	int i = l.len;
	l.reset();
	int a=*l;
	int st=0;
	while ((*l == a) && (i >= 0)) {
		
		st = l.start;
		i -= 2;
		
		for (int j = 0; j < i; j++) {
			l.next();
		}
		//a=*l;
		l.set_start(st);
		std:: cout << a << "    " << *l << std:: endl;
		l.next(); a=*l;
	}
	return (i < 0);
 
}
