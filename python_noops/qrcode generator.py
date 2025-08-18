import qrcode

data =input("Enter the data to be encoded in the QR code: ")
img = qrcode.make(data)
img = img.resize((300, 300))  # Resize the image to 300x300 pixels
img.save()
print("QR code generated and saved as 'qrcode.png'.")
 # Display the QR code
 #now i will creat an app from this