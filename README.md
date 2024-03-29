# robot_msgs #

### What is this repository for? ###
* Robot related messages and services for control and management

### To generate python LCM type definitions

```bash
cd src
lcm-gen -p ../lcmtypes/*.lcm
```

### To generate C++ LCM type definitions

```bash
mkdir -p include/lcmtypes
cd include/lcmtypes
lcm-gen -x ../../lcmtypes/*.lcm --cpp-std=c++11
```
This is for consistent include style. Note that not only is `include/` listed in the include dir, but also `include/lcmtypes`.

### To create install python only library

```bash
cd src
python3 setup.py sdist bdist_wheel
```
This will create a file:

 ```src/dist/robot_msgs-0.1.tar.gz```

That can be pip3 installed without any other catkin dependencies.

### Note on other system lcmtypes

`drake` comes with several bundles of lcmtypes. The headers can be found in `/opt/drake/include/lcmtypes`; the python class definitions can be found in e.g.
```
/opt/drake/lib/python3.6/site-packages/drake/lcmt_viewer_draw.py
/opt/drake/lib/python3.6/site-packages/robotlocomotion/pose_t.py
```
