import cv2

image = cv2.imread("new.jpg")

if image is None:
    print("Error in finding Image")
else:
    print("Image Found")


cv2.imshow("Originial Image",image)
cv2.waitKey(0)
cv2.destroyAllWindows()