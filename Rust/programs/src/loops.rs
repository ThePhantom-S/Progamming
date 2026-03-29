//loops in rust:
pub fn loop() {
    //for loop
    let arr = [10, 20, 30, 40, 50]; 
    for i in 0..arr.len() {
        println!("Element at index {}: {}", i, arr[i]);
    }
    //while loop
    let mut count = 0;
    while count < 5 {
        println!("Count: {}", count);
        count += 1;
    }
    //loop (infinite loop)
    let mut num = 0;
    loop {
        if num >= 5 {
            break; // exit the loop when num is 5 or greater
        }
        println!("Number: {}", num);
        num += 1;
    }
    //for-each loop
    let vec = vec![1, 2, 3, 4, 5];
    for element in &vec {
        println!("Element: {}", element);
    }
}