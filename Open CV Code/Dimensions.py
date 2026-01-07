import cv2

image = cv2.imread("new.jpg")

if image is not None:
    h , w, c = image.shape
    print(f"Image Loaded with Height: {h}, Width: {w} Channel = {c} ")

else:
    print("Image not Found")