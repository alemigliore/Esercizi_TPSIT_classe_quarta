#Resistor Color Duo

def value(colors):
    color_values = ["black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"]
    return color_values.index(colors[0])*10 + color_values.index(colors[1])