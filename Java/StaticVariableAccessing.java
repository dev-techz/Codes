import java.lang.String;
import java.lang.System;

class StaticVariableAccessing
{	//Static Variable
	int a = 10;
	int b = 20;
	static int c = 10;
	static int d = 20;

    public static void main(String[] args)
	{	//static Area
	
		StaticVariableAccessing var=new StaticVariableAccessing();
		System.out.println(var.a);
		System.out.println(var.b);
		System.out.println(StaticVariableAccessing.c);
		System.out.println(StaticVariableAccessing.d); 
		var.instance();
			
	}
	void instance()
	{
		System.out.println(StaticVariableAccessing.c);
		System.out.println(StaticVariableAccessing.d);
	}