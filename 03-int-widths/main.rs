use std::mem::size_of;

fn main() {
    assert_eq!(size_of::<u8>(), 1);
    assert_eq!(size_of::<u16>(), 2);
    assert_eq!(size_of::<u32>(), 4);
    assert_eq!(size_of::<u64>(), 8);
    assert_eq!(size_of::<i8>(), 1);
    assert_eq!(size_of::<i16>(), 2);
    assert_eq!(size_of::<i32>(), 4);
    assert_eq!(size_of::<i64>(), 8);

    println!("usize: {} bytes", size_of::<usize>());
    println!("isize: {} bytes", size_of::<isize>());
}
