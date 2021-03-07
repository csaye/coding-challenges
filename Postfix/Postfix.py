exp = input('Enter a postfix expression: ')
elems = exp.split()

stack = []
for elem in elems:
    try:
        num = int(elem)
        stack.append(num)
    except:
        b = stack.pop()
        a = stack.pop()
        if elem == '+': stack.append(a + b)
        elif elem == '-': stack.append(a - b)
        elif elem == '*': stack.append(a * b)
        elif elem == '/': stack.append(a / b)

print(stack[0])
