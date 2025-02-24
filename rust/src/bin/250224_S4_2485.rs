/**
 * https://www.acmicpc.net/problem/2485
 */
use std::io;

fn main() {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp).expect("Fail to read line");
    let n: i32 = inp.trim().parse().expect("Fail to parse");

    inp.clear();
    io::stdin().read_line(&mut inp).expect("Fail to read line");
    let mut pointer: i32 = inp.trim().parse().expect("Fail to parse");
    
    let mut dist = Vec::new();
    let mut min: i32 = i32::MAX;
    for _ in 1..n {
        inp.clear();
        io::stdin().read_line(&mut inp).expect("Fail to read line");
        let locate: i32 = inp.trim().parse().expect("Fail to parse");

        let d = locate - pointer;
        dist.push(d);
        min = if min > d { d } else { min };
        pointer = locate;
    }
    for num in dist.iter() {
        if min < 2 { 
            break;
        }
        min = gcd(*num, min);
    }
    let mut res: i32 = 0;
    for dt in dist.iter() {
        res += dt / min - 1;
    }

    println!("{:?}", res);
}

fn gcd(a: i32, b: i32) -> i32 {
    let mut a_mut = a;
    let mut b_mut = b;
    while b_mut != 0 {
        let r = a_mut % b_mut;
        a_mut = b_mut;
        b_mut = r;
    }
    a_mut
}
