from gpiozero import Robot
from time import sleep

motor = Robot(left=(17,18), right=(27,22))

motor.forward()
sleep(2)
motor.right(0.4)
sleep(3)
motor.stop()
