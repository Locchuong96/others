**logging level**

5 standard loigging level:

- DEBUG `logging.debug` (did not printing out the console): Detailed information, typically of interest only when dianosting problems (only for debug, this should not be use when running)

you can set debug printing out the console by `logging.basicConfig(level=logging.DEBUG)`

- INFO: confirmation that things are working as expected

- WARNING (default printing out the console): An indication that something unexpected happened, or indicate of some problem in the near future (e.g 'disk space low'). The software is still working as expected.

- ERROR: Due to a more serious problem, the software has not been able to perform some function.

- CRITICAL: A serious error, indicating that the program itself maybe unable to continue running

you can set specific level printout the console by command, example to let `INFO` level print out the console `logging.basicConfig(level=logging.INFO)`

**export  logfile**

To export logging file we need to give the `filename` by `logging.basicConfig(filename='test.log',level=logging.DEBUG)`

**set format**

To set the format we need to give the `format` by `logging.basicConfig(filename='test.log',format='%(asctime)s')`

**Note**
when you call 2 script and each one have calling `logging.basicConfig`, `root` logger is only set by the first one running.

# references

[logging formatter](https://docs.python.org/2/library/logging.html#logging.Formatter)

[Python Tutorial: Logging Basics - Logging to Files, Setting Levels, and Formatting](https://www.youtube.com/watch?v=-ARI4Cz-awo&list=PLMdgUBu5wWKxObYWmWbwxDhlBXqUObLNY)

[Python Tutorial: Logging Advanced - Loggers, Handlers, and Formatters](https://www.youtube.com/watch?v=jxmzY9soFXg&list=PLMdgUBu5wWKxObYWmWbwxDhlBXqUObLNY&index=3)
