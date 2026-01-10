import cv2

image = cv2.imread("new1.jpg")

if image is not None:
    cropped =image[100:200, 50:150]
    cv2.imshow("Original Image", image)
    cv2.imshow("Cropper Image", cropped)
    cv2.waitKey(0)
    cv2.destroyAllWindows()
else:
    print("Error: could not load image at 'new1.jpg'. Check path and working directory.")
