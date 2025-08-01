def filtra_pares(p_tuple):
    newTuple = ()

    for i in range(len(p_tuple)):
        if p_tuple[i] % 2 == 0:
            newTuple += (p_tuple[i],)

    return newTuple

inputTuple = (2,5,6,7,9,1,8,8)
finalTuple = filtra_pares(inputTuple)
print(finalTuple)
