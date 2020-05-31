# robot_msgs #

### What is this repository for? ###
* Robot related messages and services for control and management

### To generate python LCM type definitions

```bash
cd src
lcm-gen -p ../lcmtypes/*.lcm
```

### To create install python only library
```bash
cd src
python3 setup.py sdist bdist_wheel
```
This will create a file:

 ```src/dist/robot_msgs-0.1.tar.gz```

That can be pip3 installed without any other catkin dependencies.

* Creator: [Jay M. Wong, jmwong@draper.com](mailto:jmwong@draper.com)
