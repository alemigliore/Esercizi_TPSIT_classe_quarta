#Tisbury Treasure Hunt

def get_coordinate(record):
    '''
 
    :param record: tuple - a (treasure, coordinate) pair.
    :return: str - the extracted map coordinate.
    '''
    return record[1]
def convert_coordinate(coordinate):
    '''
 
    :param coordinate: str - a string map coordinate
    :return:  tuple - the string coordinate seperated into its individual components.
    '''
    return (coordinate[0], coordinate[1])
def compare_records(azara_record, rui_record):
    '''
 
    :param azara_record: tuple - a (treasure, coordinate) pair.
    :param rui_record: tuple - a (location, coordinate, quadrant) trio.
    :return: bool - True if coordinates match, False otherwise.
    '''
    return azara_record[1] == rui_record[1][0] + rui_record[1][1]
def create_record(azara_record, rui_record):
    '''
 
    :param azara_record: tuple - a (treasure, coordinate) pair.
    :param rui_record: tuple - a (location, coordinate, quadrant) trio.
    :return:  tuple - combined record, or "not a match" if the records are incompatible.
    '''
    if compare_records(azara_record, rui_record):
        return azara_record + rui_record
    return "not a match"
def clean_up(combined_record_group):
    '''
 
    :param combined_record_group: tuple of tuples - everything from both participants.
    :return: tuple of tuples - everything "cleaned", with excess coordinates and information removed.
    '''
    return "".join([str((r[0], r[2], r[3], r[4]))+"\n" for r in combined_record_group])
    