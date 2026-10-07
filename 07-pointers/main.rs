fn main() {
    let mut array = [0, 1, 2, 3, 4, 5];

    for x in array.iter_mut() {
        *x = 5 - *x;
    }

    for i in 0..6 {
        print!("{}", array[i]);
    }
}
