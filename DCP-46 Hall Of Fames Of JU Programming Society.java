

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;


class MyClass
{
	public static void main (String[] args) throws java.lang.Exception
	{
	
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt() ;
        BigInteger a,b;
        while(n-- > 0){
            a = sc.nextBigInteger();
            b = sc.nextBigInteger();
            System.out.println((a.add(b)).divide(BigInteger.valueOf(2)));
        }
    }

}

