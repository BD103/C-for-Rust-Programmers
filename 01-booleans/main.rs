fn main() {
    let yes = true;
    let no = false;

    println!("Yes: {}", yes as u8);
    println!("No: {}", no as u8);

    if yes && no {
        println!("Uh oh, something went wrong :(");
    }
}
