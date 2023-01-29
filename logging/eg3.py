import logging
import employee

logger = logging.getLogger(__name__) # create a new logger 
logger.setLevel(logging.DEBUG)

formatter = logging.Formatter('%(asctime)s:%(name)s:%(message)s')

file_handler = logging.FileHandler('sample.log')
file_handler.setLevel(logging.ERROR) # only capture level error
file_handler.setFormatter(formatter)

stream_handler = logging.StreamHandler() # for stream on the console
stream_handler.setFormatter(formatter)

logger.addHandler(file_handler)
logger.addHandler(stream_handler)

# logging.basicConfig(filename='sample.log',level=logging.DEBUG,
#                     format='%(asctime)s:%(name)s:%(message)s')

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
    try:
        return x/y
    except ZeroDivisionError as e:
        logger.error(e)

num1 = 20
num2 = 0

if __name__ == "__main__":

    result1 = add(num1,num2)
    logger.debug('Add: {} + {} = {}'.format(num1,num2,result1))

    result2 = sub(num1,num2)
    logger.debug('Subtract: {} - {} = {}'.format(num1,num2,result2))

    result3 = mul(num1,num2)
    logger.debug('Multiply: {} * {} = {}'.format(num1,num2,result3))

    result4 = div(num1,num2)
    logger.debug('Divide: {} / {} = {}'.format(num1,num2,result4))
