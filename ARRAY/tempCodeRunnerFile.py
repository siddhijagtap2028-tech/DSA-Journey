import ipaddress
import math

print("=" * 60)
print("        SUBNETTING CALCULATOR")
print("=" * 60)

# Input IP Address
ip = input("Enter IP Address (Example: 192.168.10.0): ")

# Input Number of PCs
pcs = int(input("Enter Number of PCs Required: "))


host_bits = math.ceil(math.log2(pcs + 2))

prefix = 32 - host_bits

# Create Network
network = ipaddress.ip_network(f"{ip}/{prefix}", strict=False)

# Determine IP Class
first_octet = int(ip.split(".")[0])

if 1 <= first_octet <= 126:
    ip_class = "Class A"
elif 128 <= first_octet <= 191:
    ip_class = "Class B"
elif 192 <= first_octet <= 223:
    ip_class = "Class C"
elif 224 <= first_octet <= 239:
    ip_class = "Class D (Multicast)"
else:
    ip_class = "Class E"

# Display Result
print("\n" + "=" * 60)
print("              SUBNETTING RESULT")
print("=" * 60)

print(f"IP Address            : {ip}")
print(f"IP Class              : {ip_class}")
print(f"Required PCs          : {pcs}")
print(f"Prefix Length         : /{prefix}")
print(f"Subnet Mask           : {network.netmask}")
print(f"Wildcard Mask         : {network.hostmask}")
print(f"Network Address       : {network.network_address}")
print(f"Broadcast Address     : {network.broadcast_address}")
print(f"Total IP Addresses    : {network.num_addresses}")
print(f"Usable Hosts          : {network.num_addresses - 2}")

hosts = list(network.hosts())

if len(hosts) > 0:
    print(f"First Host Address    : {hosts[0]}")
    print(f"Last Host Address     : {hosts[-1]}")

print("=" * 60)

print("\nHost Allocation Table")
print("-" * 60)

count = 1
for host in hosts:
    print(f"PC {count:3d} --> {host}")
    count += 1

print("-" * 60)
print("Program Finished Successfully")