package com.Home.Car;

import java.sql.SQLOutput;
import java.util.Scanner;



public class car {

    private String model; //model is name of the car
    private String brand; // this means brand of car, example bmw
    private int year; //year is year that car makes

    public void setModel(String model) {
        this.model = model;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public void setYear(int year) {
        this.year = year;
    }


    public String getModel () {
        return model;
    }


    public String getBrand () {
        return brand;
    }


    public int  getYear () {
        return year;
    }

    public car() { }


    public car(String model, String brand, int year) {
        this.year = year;
        this.model= model;
        this.brand = brand;
    }

    public  void enter() {
         Scanner scan = new Scanner(System.in);
        System.out.println("What is the brand  of your car? " );
        setBrand(scan.nextLine());
        System.out.println("Tell me , what  is the model  of your car?");
        setModel(scan.nextLine());
        System.out.println(" what is the year of  your car?" );
        setYear(Integer.parseInt(scan.nextLine()));
    }

    public void out() {
       /* System.out.println("Brand of your car: " + getBrand());
        System.out.println("Model of your car: " + getModel());
        System.out.println("Year of your car: " + getYear()); */

        System.out.println("Your car is call: " + getBrand() + " " + getModel() + " ,with the year of " + getYear());


    }
}
