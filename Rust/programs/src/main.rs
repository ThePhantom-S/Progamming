use std::io;                        //importing standard input/output library.(for user input)

//mod datatypes;                      //importing datatypes file to use datatypes in the program.
//use datatypes::datatypes;            //importing datatypes function to use in the program

fn main() {
    let mut name = String::new();   //initializing a string. 
    println!("Hello, world!");      //display hello world.
    println!("Enter your name :");
    io::stdin()                     //getting input from the uesr.
    .read_line(&mut name)       //reading input
    .expect("Failed to read your input.");      //if input not read.
    println!("Hello {} Hope you are doing great.", name.trim());        //final output.
    
    //datatypes();                      //calling datatypes function to display datatypes in rust.
}
