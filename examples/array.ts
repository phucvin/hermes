function testarray(n: number) {
    let a : number[] = [n];
    a.push(n);
    return a;
}

print(testarray(1));