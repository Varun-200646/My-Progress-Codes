import cv2

user = input("Enter the Location of Image")
image = cv2.imread(user)

ch = int(input("Enter 1 if you want to Show else Enter 2 to Save the image"))

if ch == 1:
    gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    cv2.imshow("Grayscale Image",gray)
    cv2.waitKey(0)
    cv2.destroyAllWindows()

elif ch == 2:
     gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
     path = input("Enter the name of the file you want to save it as")
     Success = cv2.imwrite(path,gray)

else:
     print("Some error has occured")