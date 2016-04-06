/xx/xx/xx/xxx
unsigned long func1()
{
	get_user(x,y);
	get_user(x,y);
	copy_from_user(xx,yy,1);
	get_user(x,z);
	copy_from_user(xx,yy,1);
	copy_from_user(xx,yy,2);
	get_user(x,s);
	get_user(x,s);
	copy_from_user(xx,qq,2);
	get_user(x,qq);
	get_user(x,yy);
}
unsigned long func2()
{
	get_user(x,y1);
	copy_from_user(xx,yy,2);
	get_user(x,y);
	copy_from_user(xx,qq,2);
}
unsigned long func3()
{
	case 1:
	get_user(x,y1);
	copy_from_user(xx,yy,2);
	get_user(x,y);
	copy_from_user(xx,qq,2);
}

unsigned long func4()
{
	case 1:
	get_user(x,y);
	copy_from_user(xx,yy,2);
	get_user(x,y);
	copy_from_user(xx,qq,2);
}
unsigned long func5()
{
	
	get_user(x,y);
	copy_from_user(xx,yy,2);
	case 1:
	get_user(x,y);
	get_user(x,y);
	copy_from_user(xx,qq,2);
	
}
unsigned long func6()
{
	get_user(x,y);
	case 1:
		get_user(x,y);
		copy_from_user(xx,yy,1);
	case 2:
		get_user(x,z);
		copy_from_user(xx,yy,1);
		copy_from_user(xx,yy,2);

	case 4:
		get_user(x,s);
		get_user(x,s);
		get_user(x,p);
		copy_from_user(xx,qq,2);
	default :
		get_user(x,z);
		
		get_user(x,z);
		get_user(x,p);
		get_user(x,z);
}
unsigned long func6()
{
	case 1:
		get_user(x,y);
		copy_from_user(xx,yy,1);
	case 2:
		get_user(x,z);
		copy_from_user(xx,yy,1);
		copy_from_user(xx,yy,2);

	case 4:
		get_user(x,s);
		get_user(x,s);
		get_user(x,p);
		copy_from_user(xx,qq,2);
	default :
		get_user(x,z);
		get_user(x,p);
		get_user(x,z);
}