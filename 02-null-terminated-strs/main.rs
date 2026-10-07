fn reverse(forward: &[u8]) -> Box<[u8]> {
    let len = forward.len();
    let mut reversed = Box::<[u8]>::new_uninit_slice(len);

    for i in 0..len {
        reversed[i].write(forward[len - 1 - i]);
    }

    unsafe { reversed.assume_init() }
}

// fn reverse(s: &str) -> String {
//     s.chars().rev().collect()
// }

fn main() {
    let forward = "Hello!";
    let reversed = reverse(forward.as_bytes());

    println!("{}", str::from_utf8(&reversed).unwrap());
}
