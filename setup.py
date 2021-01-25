## ! DO NOT MANUALLY INVOKE THIS setup.py, USE CATKIN INSTEAD

import os
from distutils.core import setup
from catkin_pkg.python_setup import generate_distutils_setup

# fetch values from package.xml
setup_args = generate_distutils_setup(
    packages=['robot_msgs'],
    package_dir={'': 'src',  'srv': 'srv'})

# define $LCMPATH for discovery of custom LCM types, use : for separation
with open(os.path.expanduser('~/.bashrc'), 'r+') as file:
    if 'export LCMPATH=' not in file.read():
        file.write('export LCMPATH=/src/catkin_src/robot_msgs/src/robot_msgs')
setup(**setup_args)
