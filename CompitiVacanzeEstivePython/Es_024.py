#Etl

def transform(in_dict: {}) -> {}:
    return {m.lower(): n for n in in_dict for m in in_dict[n]}