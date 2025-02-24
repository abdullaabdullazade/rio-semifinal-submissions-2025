def is_palindrome(num):
    # Преобразуем число в строку и проверяем, совпадает ли оно с перевернутым
    return str(num) == str(num)[::-1]

def main():
    # Читаем входные данные
    l, r = map(int, input().split())
    
    # Проходим по всем числам от l до r
    for num in range(l, r + 1):
        if is_palindrome(num):
            print("Palindrome!")
        else:
            print(num)

if __name__ == "__main__":
    main()
