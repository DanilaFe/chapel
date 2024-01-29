// run it with
//  cd sort-random-rust
//  cargo build --release
//  target/release/sort-random-rust
use rand::prelude::*;
use rand::distributions::Standard;
use std::time::Instant;

fn main() {
    let n = 1024*1024*128;
    let t1 = Instant::now();
    let mut values: Vec<u64> = rand::thread_rng().sample_iter(Standard).take(n).collect();
    let gen_duration = t1.elapsed();
    println!("{:?} MiB/s", 8.0*(n as f64)/gen_duration.as_secs_f64()/1024.0/1024.0);

    let start = Instant::now();
    values.sort_unstable();
    let duration = start.elapsed();

    println!("{:?} MiB/s", 8.0*(n as f64)/duration.as_secs_f64()/1024.0/1024.0);
}

