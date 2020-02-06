#!/usr/bin/env python

import rospy
from Controller.msg import RCdata
from adafruit_motokit import MotorKit
from adafruit_servokit import ServoKit 

motorkit = Motorkit()
servokit = ServoKit()

def rc_callback(rc):
    servokit.servo[0].angle = rc.steering
    motorkit.motor1.throttle = rc.throttle
    motorkit.motor2.throttle = rc.throttle
    motorkit.motor3.throttle = rc.throttle
    motorkit.motor4.throttle = rc.throttle

    if 1 > LR > 0.2 or -1 < LR < -0.2:
        motorkit.motor1.throttle = -rc.throttle
        motorkit.motor2.throttle = rc.throttle
        motorkit.motor3.throttle = rc.throttle
        motorkit.motor4.throttle = -rc.throttle

rospy.init_node('CarController_sub')
sub = rospy.Subscriber('Controller', RCdata, rc_callback)
rospy.spin()