from setuptools import find_packages
from setuptools import setup

setup(
    name='ros_phoenix',
    version='0.0.0',
    packages=find_packages(
        include=('ros_phoenix', 'ros_phoenix.*')),
)
