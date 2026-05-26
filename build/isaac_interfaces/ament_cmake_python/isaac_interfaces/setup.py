from setuptools import find_packages
from setuptools import setup

setup(
    name='isaac_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('isaac_interfaces', 'isaac_interfaces.*')),
)
