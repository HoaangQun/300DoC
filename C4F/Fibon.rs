use std::io::{self, Write};

fn fbo(n: u32) -> u32 {
    if n == 0 {
        0
    } else if n == 1 {
        1
    } else {
        fbo(n-1) + fbo(n-2)
    }
}

fn main() {
    print!("Nhap vao vi tri trong day Fibonacci: ");
    io::stdout().flush().unwrap();

    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Type error");

    let n: u32 = input.trim().parse().expect("Cannot switch");

    println!("Gia tri tai vi tri thu {} la {}", n, fbo(n))

}