def is_step_number(num_str):
    return all(abs(int(num_str[i]) - int(num_str[i + 1])) == 1 for i in range(len(num_str) - 1))

def convert_to_base(n, base):
    res = ""
    while n > 0:
        res = str(n % base) + res
        n //= base
    return res

n = int(input().strip())
step_numbers = [convert_to_base(n, base) for base in range(2, 11) if is_step_number(convert_to_base(n, base))]

print("\n".join(step_numbers) if step_numbers else -1)
