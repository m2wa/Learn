import math
def get_coordinate():
    while True:
        try:
            x = float(input("Enter x-coordinate: "))
            y = float(input("Enter y-coordinate: "))
            return (x, y)
        except ValueError:
            print("Invalid input! Please enter numeric values for x and y.")

def calculate_distance(coord1, coord2):
    x1, y1 = coord1
    x2, y2 = coord2
    return math.sqrt((x2 - x1)**2 + (y2 - y1)**2)

def main():
    print("Coordinate Distance Calculator")
    coordinates = []
    
    while True:
        coord = get_coordinate()
        coordinates.append(coord)
        
        cont = input("Do you want to add another coordinate? (y/n): ").lower()
        if cont != 'y':
            break

    if len(coordinates) < 2:
        print("Not enough coordinates to calculate distances.")
        return

    total_distance = 0
    print("\nDistances between consecutive coordinates:")
    for i in range(len(coordinates) - 1):
        dist = calculate_distance(coordinates[i], coordinates[i + 1])
        total_distance += dist
        print(f"Distance between {coordinates[i]} and {coordinates[i+1]}: {dist:.2f}")

    print(f"\nTotal Journey Distance: {total_distance:.2f}")

if __name__ == "__main__":
    main()