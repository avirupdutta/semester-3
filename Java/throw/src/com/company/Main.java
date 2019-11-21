package com.company;
import java.util.*;
public class Main {
    static void validate(int age)
    {
        if(age<18)
        {
            throw new ArithmeticException("not valid");
        }
        else
        {
            System.out.println("Welcome to vote !");
        }
    }
    public static void main(String[] args)
    {
        Scanner inp = new Scanner(System.in);
        System.out.println("Enter your age: ");
        int n= inp.nextInt();
        validate(n);
        System.out.println("rest of the code...");
    }
}
