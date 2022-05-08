
import java.lang.String;
import java.lang.System;

class InstanceVariableAccessing
{		//Instance Variable
		int a = 10;
		int b = 20;

    public static void main(String[] args)
	{	//static Area
		 
		 InstanceVariableAccessing var=new InstanceVariableAccessing();
		 
		System.out.println(var.a);
		System.out.println(var.b);
		
	}
}