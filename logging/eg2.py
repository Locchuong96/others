import logging

logging.basicConfig(filename='employee.log',format='%(asctime)s:%(levelname)s:%(message)s',level=logging.INFO)

class Employee:
    '''A sample Employee class'''
    def __init__(self,first,last):
        self.first = first
        self.last = last
        logging.info('Created employee: {} - {}'.format(self.fullname,self.email))

    @property
    def email(self):
        return '{}.{}@email.com'.format(self.first,self.last)

    @property
    def fullname(self):
        return '{} {}'.format(self.first,self.last)

if __name__ == "__main__":

    emp_1 = Employee('John','Smith')
    emp_2 = Employee('Corey','Schafer')
    emp_3 = Employee('Jame','Watson')
