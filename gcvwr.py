# Read input
gcvwr, truck_weight, num_items = map(int, input().split())
items = list(map(int, input().split()))

# Calculate remaining towing capacity
remaining_capacity = gcvwr - truck_weight

# Calculate maximum allowed weight of trailer and items
max_weight = remaining_capacity * 0.9

# Calculate maximum possible weight of trailer
max_trailer_weight = max_weight - sum(items)

# Print result
print(int(max_trailer_weight))
