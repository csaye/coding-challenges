function binaryDecimal(binary) {
    var total = 0;
    for (var char of binary) {
      total += total + parseInt(char);
    }
    return total;
}
