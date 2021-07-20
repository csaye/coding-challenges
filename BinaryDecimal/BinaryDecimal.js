function binaryDecimal(binary) {
    var num = 0;
    for (var char of binary) {
        num += num + parseInt(char);
    }
    return num;
}
