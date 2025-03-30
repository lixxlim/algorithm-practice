/**
 * https://www.acmicpc.net/problem/4673
 */

fn main() {
    let mut arr: [usize; 10000] = [0; 10000];
    for i in 1..9999 {
        let sf = get_selfnum(i);
        if sf < 10000 {
            arr[sf - 1] += 1;
        }
    }
    for i in 0..9999 {
        if arr[i] == 0 {
            println!("{}", i + 1);
        }
    }
}

fn get_selfnum(mut i: usize) -> usize {
    let mut sum = i;
    while i > 0 {
        sum += i % 10;
        i /= 10;
    }
    sum 
}
