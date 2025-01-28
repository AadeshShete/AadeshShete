import datetimeemi_choice = input("\nDo you want to opt for EMI payment? (yes/no): ").strip().lower()
if emi_choice == 'yes':
    interest_rate = 0.08  # 8% annual interest rate
    print("\nAvailable EMI Tenures:")
    print("1. 12 months")
    print("2. 24 months")
    print("3. 36 months")
    tenure_choice = int(input("Choose EMI tenure (1/2/3): "))
    tenure_months = {1: 12, 2: 24, 3: 36}.get(tenure_choice, 12)
    
    monthly_interest = interest_rate / 12
    emi_amount = (bike_total * monthly_interest * (1 + monthly_interest) ** tenure_months) / ((1 + monthly_interest) ** tenure_months - 1)
    total_emi_payment = emi_amount * tenure_months

    final_invoice += f"\nEMI Details:\n"
    final_invoice += f"EMI Tenure: {tenure_months} months\n"
    final_invoice += f"Monthly EMI: ${emi_amount:.2f}\n"
    final_invoice += f"Total Payment (including interest): ${total_emi_payment:.2f}\n"
    total_bike_price += total_emi_payment - bike_total

superbikes = [
    {"id": 1, "brand": "Ducati", "model": "Panigale V4", "engine": "1103cc", "price": 24000},
    {"id": 2, "brand": "Kawasaki", "model": "Ninja H2", "engine": "998cc", "price": 30000},
    {"id": 3, "brand": "BMW", "model": "S1000RR", "engine": "999cc", "price": 22000},
    {"id": 4, "brand": "Yamaha", "model": "YZF-R1", "engine": "998cc", "price": 20000},
    {"id": 5, "brand": "Suzuki", "model": "Hayabusa", "engine": "1340cc", "price": 20621},
    {"id": 6, "brand": "Honda", "model": "CBR1100XX", "engine": "1100cc", "price": 25000},  
    {"id": 7, "brand": "MV Agusta", "model": "F4", "engine": "1200cc", "price": 35000}  
]  

accessories = [
    {"name": "Helmet", "price": 250.00},
    {"name": "Riding Pants", "price": 200.00},
    {"name": "Riding Suit", "price": 500.00},
    {"name": "Riding Shoes", "price": 120.00},
    {"name": "Riding Gloves", "price": 50.00},
    {"name": "Motorcycle Jacket", "price": 350.00},  
    {"name": "Knee Guards", "price": 80.00}, 
    {"name": "Chain Lubricant", "price": 25.00},  
    {"name": "Handlebar Grips", "price": 40.00},  
    {"name": "Tire Pressure Gauge", "price": 30.00},  
]

print("Welcome to the Superbike Store!")
customer_name = input("Enter your name: ")

total_bike_price = 0
items_total = 0
bike_count = 0
items = []

final_invoice = f"\n=======================================\n"
final_invoice += f"              Superbike Store\n"
final_invoice += f"=======================================\n"
final_invoice += f"Customer Name: {customer_name}\n"
final_invoice += f"Date: {datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')}\n"
final_invoice += f"=======================================\n"

while True:
    print("\nAvailable Superbikes:")
    print(f"{'ID':<5}{'Brand':<15}{'Model':<20}{'Engine':<10}{'Price':<15}")
    print("-" * 65)
    for bike in superbikes:
        print(f"{bike['id']:<5}{bike['brand']:<15}{bike['model']:<20}{bike['engine']:<10}${bike['price']:<15}")

    bike_id = int(input("\nEnter the ID of the bike you want to purchase (or 0 to exit): "))
    if bike_id == 0:
        break

    selected_bike = None
    for bike in superbikes:
        if bike['id'] == bike_id:
            selected_bike = bike
            break

    if not selected_bike:
        print("Invalid bike ID. Please try again.")
        continue

    bike_count += 1
    tax_rate = 0.10  
    tax_amount = selected_bike['price'] * tax_rate
    bike_total = selected_bike['price'] + tax_amount
    total_bike_price += bike_total

    final_invoice += f"\nBike {bike_count} Details:\n"
    final_invoice += f"Brand: {selected_bike['brand']}\n"
    final_invoice += f"Model: {selected_bike['model']}\n"
    final_invoice += f"Engine: {selected_bike['engine']}\n"
    final_invoice += f"Price: ${selected_bike['price']:}\n"
    final_invoice += f"Tax (10%): ${tax_amount:}\n"
    final_invoice += f"Total Price for this Bike: ${bike_total:}\n"

    emi_choice = input("\nDo you want to opt for EMI payment? (yes/no): ").strip().lower()
    if emi_choice == 'yes':
        interest_rate = 0.08  # 8% annual interest rate
        print("\nAvailable EMI Tenures:")
        print("1. 12 months")
        print("2. 24 months")
        print("3. 36 months")
        tenure_choice = int(input("Choose EMI tenure (1/2/3): "))
        tenure_months = {1: 12, 2: 24, 3: 36}.get(tenure_choice, 12)
        
        monthly_interest = interest_rate / 12
        emi_amount = (bike_total * monthly_interest * (1 + monthly_interest) ** tenure_months) / ((1 + monthly_interest) ** tenure_months - 1)
        total_emi_payment = emi_amount * tenure_months

        final_invoice += f"\nEMI Details:\n"
        final_invoice += f"EMI Tenure: {tenure_months} months\n"
        final_invoice += f"Monthly EMI: ${emi_amount:.2f}\n"
        final_invoice += f"Total Payment (including interest): ${total_emi_payment:.2f}\n"

    repeat = input("\nDo you want to purchase another bike? (yes/no): ").strip().lower()
    if repeat != 'yes':
        break

print("\nAvailable Accessories:")
print(f"{'Item':<20}{'Price':<10}")
print("-" * 30)
for accessory in accessories:
    print(f"{accessory['name']:<20}${accessory['price']:<10}")

for accessory in accessories:
    quantity = int(input(f"Enter quantity for {accessory['name']} (or 0 to skip): "))
    if quantity > 0:
        items.append({"name": accessory["name"], "price": accessory["price"], "quantity": quantity})

while True:
    item_name = input("\nEnter custom item name for additional accessories (or type 'done' to finish): ")
    if item_name.lower() == "done":
        break
    price = float(input(f"Enter price for {item_name}: "))
    quantity = int(input(f"Enter quantity for {item_name}: "))
    items.append({"name": item_name, "price": price, "quantity": quantity})

print("\nPayment Methods:")
print("1. Cash")
print("2. Net Banking")
print("3. Credit Card")
payment_choice = int(input("Select payment method (1/2/3): "))
payment_method = ["Cash", "Net Banking", "Credit Card"][payment_choice - 1] if 1 <= payment_choice <= 3 else "Unknown"

items_tax_rate = 0.05
for item in items:
    items_total += item['price'] * item['quantity']
items_tax = items_total * items_tax_rate

final_invoice += "\n=======================================\n"
final_invoice += f"Accessories:\n"
final_invoice += f"{'Item':<20}{'Qty':<5}{'Price':<10}{'Total':<10}\n"
final_invoice += f"-" * 40 + "\n"
for item in items:
    total_price = item['price'] * item['quantity']
    final_invoice += f"{item['name']:<20}{item['quantity']:<5}${item['price']:<10}{total_price:<10}\n"
final_invoice += f"-" * 40 + "\n"
final_invoice += f"{'Total Amount for Accessories':<30}${items_total:}\n"
final_invoice += f"{'Tax (5% on Accessories)':<30}${items_tax:}\n"
final_invoice += f"{'Payment Method':<30}{payment_method}\n"
final_invoice += f"-" * 40 + "\n"
final_invoice += f"{'Total Amount (Bike+Accessories)':<30}${total_bike_price + items_total + items_tax:}\n"
final_invoice += "=" * 40
final_invoice += "\n\nThank you for shopping with Superbike Store!\nVisit us again for more amazing deals!\n"

# Print final invoice
print(final_invoice)
