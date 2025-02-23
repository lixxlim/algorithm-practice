/**
 * https://www.acmicpc.net/problem/1735
 */
use std::io;

fn main() {
    let mut inp1 = String::new();
    let mut inp2 = String::new();
    io::stdin().read_line(&mut inp1).unwrap();
    io::stdin().read_line(&mut inp2).unwrap();

    let nums1: Vec<i64> = inp1
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    let nums2: Vec<i64> = inp2
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let a = nums1[0];
    let b = nums1[1];
    let c = nums2[0];
    let d = nums2[1];

    let res_a = (a * d) + (c * b);
    let res_b = b * d;
    let res_gcd = gcd(res_a, res_b);

    println!("{} {}", res_a / res_gcd, res_b / res_gcd);
}

fn gcd(a: i64, b: i64) -> i64 {
    let mut _a = a;
    let mut _b = b;
    while _b != 0 {
        let r = _a % _b;
        _a = _b;
        _b = r;
    }
    _a
}
