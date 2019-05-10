.data

.global dodawanie
.global odejmowanie
.global mnozenie
.global dzielenie

.type dodawanie, @function
dodawanie:
    mov $111, %rax
ret

.type odejmowanie, @function
odejmowanie:
    mov $222, %rax
ret

.type mnozenie, @function
mnozenie:
    mov $333, %rax
ret

.type dzielenie, @function
dzielenie:
    mov $444, %rax
ret
