# converte temperatura de celsius para fahrenheit
def to_fahrenheit(temp_celsius):
    f = (1.8*float(temp_celsius))+32
    return f

# converte temperatura de fahrenheit para celsius
def to_celsius(temp_fahrenheit):
    c = (float(temp_fahrenheit)-32)/1.8
    return c