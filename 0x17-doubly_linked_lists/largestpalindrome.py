def is_palindrome(n):
    return str(n) == str(n)[::-1]

def largest_palindrome_from_3_digit_numbers():
    largest_palindrome = 0

    for num1 in range(100, 1000):
        for num2 in range(num1, 1000):
            product = num1 * num2

            if product > largest_palindrome and is_palindrome(product):
                largest_palindrome = product

    return largest_palindrome

if __name__ == "__main__":
    result = largest_palindrome_from_3_digit_numbers()

    with open("102-result", "w") as file:
        file.write(str(result))
