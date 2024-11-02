from setuptools import find_packages
from setuptools import setup

setup(
    name='cpp_pubsub',
    version='0.0.3',
    packages=find_packages(
        include=('cpp_pubsub', 'cpp_pubsub.*')),
)
