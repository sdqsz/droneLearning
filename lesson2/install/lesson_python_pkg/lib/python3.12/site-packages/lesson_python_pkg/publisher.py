import rclpy
from rclpy.node import Node
from std_msgs.msg import String
class MinimalPublisher(Node):
    def __init__(self):
        # Инициализация узла с именем 'minimal_publisher'
        super().__init__('minimal_publisher')
        # Создаём publisher: тип сообщения, имя топика, размер очереди
        self.publisher_ = self.create_publisher(String, 'topic', 10)
        period_timer = 0.5
        self.timer = self.create_timer(period_timer, self.timer_callback)

        self.counter=0
    def timer_callback(self):
        message = String()
        message.data = f'Counter: {self.counter}'
        self.publisher_.publish(message)
        self.get_logger().info(f'Publishing: "{message.data}"')
        self.counter+=1

def main(args = None):
    rclpy.init(args=args)
    test_publisher = MinimalPublisher()
    rclpy.spin(test_publisher)

    test_publisher.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()