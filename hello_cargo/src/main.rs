fn main() {
    let mut sum: u64 = 0;

    for i in 0..1_000_000_000 {
        sum = sum.wrapping_add(i);
    }

    println!("Sum: {}", sum);
}