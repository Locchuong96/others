import logging

#logging.basicConfig(level=logging.INFO)
logging.basicConfig(filename='test.log',format='%(asctime)s:%(levelname)s:%(message)s',level=logging.INFO)

def add(x,y):
    '''Add function'''
    return x+y

def sub(x,y):
    '''Subtract function'''
    return x-y

def mul(x,y):
    '''Multiply function'''
    return x*y

def div(x,y):
    '''Divide function'''
    return x/y

num1 = 20
num2 = 10

if __name__ == "__main__":

    result1 = add(num1,num2)
    logging.info('Add: {} + {} = {}'.format(num1,num2,result1))

    result2 = sub(num1,num2)
    logging.info('Subtract: {} - {} = {}'.format(num1,num2,result2))

    result3 = mul(num1,num2)
    logging.info('Multiply: {} * {} = {}'.format(num1,num2,result3))

    result4 = div(num1,num2)
    logging.info('Divide: {} / {} = {}'.format(num1,num2,result4))
