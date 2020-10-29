let a = 0;
let b = 1;
print(a);
print(b);

for (let i = 0; i < 10; i++) {
    let c = a + b;
    a = b;
    b = c;
    print(c);
}
