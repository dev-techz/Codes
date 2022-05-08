import java.lang.String;
import java.lang.System;

class operatorOverloading
{
    public static void main(String[] args)
	{	int a = 10;
		int b = 20;
		String str1 = "Dev";
		String str2 = "Kumar";
		int c = a+b;// Here Plus Is Doing Work Of Adding
		String str3 = str1 + " " + str2; // But Here Plus Is doing work of concordenation(Joining)
		System.out.print(str3+c);
	}
}