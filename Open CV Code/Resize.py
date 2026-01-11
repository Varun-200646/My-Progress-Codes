
import cv2

image_path = "new1.jpg"
image = cv2.imread(image_path)

if image is None:
    print(f"Error: could not load image at '{image_path}'. Check path and working directory.")
else:
    resized = cv2.resize(image, (400, 400))
    cv2.imshow("Image Before Resizing", image)
    cv2.imshow("Image after Resizing", resized)
    if not cv2.imwrite("resized_image.jpg", resized):
        print("Warning: failed to write resized_image.jpg")
    cv2.waitKey(0)
    cv2.destroyAllWindows()
