#Darts

import math
def score(x, y):
	distance = math.sqrt(x**2 + y**2)
	points = {
		distance <= 10: 1,
		distance <= 5: 5,
		distance <= 1: 10,
	}
	return points[True] if True in points else 0