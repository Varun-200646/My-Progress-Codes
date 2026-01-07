import cv2

image = cv2.imread("new.jpg")

if image is not None:
    Success = cv2.imwrite("Output.jpg",image)
    if Success:
        print("Image Saved Successfully")
    else:
        print("Failed to Save Image")
else:
    print("Failed to Load Image")