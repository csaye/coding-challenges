for (let i = 2; i < 100; i++) {
    let isPrime = true;
    let upperBound = Math.sqrt(i);

    for (let j = 2; j <= upperBound; j++) {
        if (i % j === 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) print(i);
}
