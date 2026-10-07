struct Foo {
    field: u32,
}

fn main() {
    let value = Foo { field: 103 };
    let ptr = &value;

    println!("{}", value.field);
    println!("{}", ptr.field);
}
