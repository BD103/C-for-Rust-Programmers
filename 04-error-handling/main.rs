use std::alloc::{Layout, alloc};

fn my_malloc(size: usize) -> Result<*mut (), &'static str> {
    let layout = Layout::from_size_align(size, 1).unwrap();
    let ptr = unsafe { alloc(layout) };

    if ptr.is_null() {
        return Err("Cannot allocate memory");
    }

    return Ok(ptr as *mut ());
}

fn main() {
    let result = my_malloc(8);

    match result {
        Ok(ptr) => {
            let ptr = ptr as *mut u64;
            unsafe {
                *ptr = 10;
            };
        }
        Err(error_message) => println!("Error: {error_message}"),
    }
}
