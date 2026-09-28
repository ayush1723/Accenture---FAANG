import cv2 as cv


videoframes= cv.VideoCapture(0)
while True:
    isTrue,frame=videoframes.read()
    cv.imshow('video',frame)

    if cv.waitKey(20) & 0xFF==ord('d'):
        break


capture.release()
cv.destroyAllWindows()
