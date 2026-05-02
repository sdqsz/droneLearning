from setuptools import find_packages, setup

package_name = 'lesson_python_service'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='sdqsz',
    maintainer_email='sdqszxnobody@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'service = lesson_python_service.service_server:main',
            'client = lesson_python_service.service_client:main'
            'fib_action_server = lesson_python_service.fibonacci_action_server:main'
            'fib_action_client = lesson_python_service.fibonacci_action_client:main'
        ],
    },
)
