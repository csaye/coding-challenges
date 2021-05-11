for (var i = 2; i < 100; i++) {
    var isPrime = true;
    var upperBound = Math.sqrt(i);

    for (var j = 2; j <= upperBound; j++) {
        if (i % j === 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) console.log(i);
}
