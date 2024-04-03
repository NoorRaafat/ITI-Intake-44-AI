start,length= input("Please enter the start:"),input("please enter the length ")
if start.isdigit() and length.isdigit():
    start=int(start)
    length=int(length)


    def numbers_arr(start, length):
        arr_ofnumbers = list(range(start, start + length))
        print(arr_ofnumbers)
        "calling "


numbers_arr(start, length)
