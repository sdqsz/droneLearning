from example_interfaces.srv import AddTwoInts

import rclpy
from rclpy.node import Node

class ServicePublisher(Node):
    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(AddTwoInts,'add_two_ints',self.add_two_ints_callback)
    def add_two_ints_callback(self,request,response):
        response.sum = request.a+request.b
        self.get_logger.info(f'Incoming request: a:{request.a} b: {request.b}')
        return response

def main():
    rclpy.init()
    service = ServicePublisher()
    rclpy.spin(service)
    rclpy.shutdown()

if __name__=="__main__":
    main()