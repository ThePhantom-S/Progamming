//datatypes in rust:
pub fn main() {
    //scalar types
    let x: i32 = 5; //integer
    let y: f64 = 3.14; //floating-point
    let z: bool = true; //boolean
    let c: char = 'A'; //character

    println!("Integer: {}", x);
    println!("Floating-point: {}", y);
    println!("Boolean: {}", z);
    println!("Character: {}", c);

    //compound types
    let tup: (i32, f64, char) = (500, 6.4, 'Z'); //tuple
    let (a, b, c) = tup; //destructuring a tuple

    println!("Tuple: ({}, {}, {})", a, b, c);

    let arr: [i32; 5] = [1, 2, 3, 4, 5]; //array
    println!("Array: {:?}", arr);
}