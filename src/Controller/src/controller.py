#!/usr/bin/env python

import json
import rospy
from serial import Serial
from Controller.msg import RCdata

rospy.init_node('CarController_pub')
pub = rospy.Publisher('RCrecv', RCdata)
rate = rospy.Rate(10.0)

ser = Serial("/dev/ttyACM0", 115200, timeout=1)
for i in range(1, 20):
    data = ser.readline().decode('utf-8').rstrip('\n\r')

while True:
    data = ser.readline().decode('utf-8').rstrip('\n\r')
    dict = json.loads(data)
    STR = (dict['str']-1250)/500*120 + 30
    THR = (dict['thr']-1500)/500
    LR = (dict['LR']-1500)/500
    REC = dict['REC']

    if THR > 1: THR = 1
    if THR < -1: THR = -1

    if LR > 1: LR = 1
    if LR < -1: LR = -1

    msg = RCdata(0.0, 0.0, 0.0, 0)
    
    msg.steering = STR
    msg.throttle = THR
    msg.sidemove = LR
    msg.record = REC
    
    print("str: {}, thr: {}, LR: {}, REC: {}".format(STR, THR, LR, REC))

    pub.publish(msg)
    rate.sleep()

