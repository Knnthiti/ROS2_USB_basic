from setuptools import find_packages
from setuptools import setup

setup(
    name='usb_v1',
    version='0.0.0',
    packages=find_packages(
        include=('usb_v1', 'usb_v1.*')),
)
