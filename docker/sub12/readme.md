**docker compose**

**deploy your sytem**

- redis: `docker run -d --name=redis redis`
- postgres: `docker run -d --name=db postgres:9.4 result-app`
- voting-app: `docker run -d --name=vote -p 5000:80 voting-app`
- result-app: `docker run -d --name=result -p 5001:80`
- worker: `docker run -d --name=worker worker`

**docker link**

- redis: `docker run -d --name=redis redis`
- postgres: `docker run -d --name=db postgres:9.4 --link db:db result-app`
- voting-app: `docker run -d --name=vote -p 5000:80 --link redis:redis voting-app`
- result-app: `docker run -d --name=result -p 5001:80`
- worker: `docker run -d --name=worker --link db:db --link redis:redis worker`

Check link in python

	def get_redis():
	   if not hasttr(g,'redis'):
	      g.redis = Redis(host="redis",db=0,socket_timeout=5)
	   return g.redis

Check link in nodejs

	pg.connect('postgres://postgres@db/postgres',function(err,client,done)){
	if (err) {
		console.error("Waiting for db")	;
	}
	callback(err,client);	
	});

Check link in worker
	
	try{
	 Jedis redis = connectToRedis("redis");
      	 Connection dbConn = connectToDB("db");
	 System.err.println("Watching vote queue");
	}

**docker compose**
run already build container
`docker-compose.yml`

	redis:
	   image:redis
	db:
	   image: postgres:9.4
	vote:
	   image: voting-app
	   ports:
		- 5000:80
	   links:
		- redis
	result:
	   image: result
	   ports:
		- 5000:80
	   links:
		- db
	workers:
	   image: worker
	   links:
		- db
		- redis

**docker-compose build**
this case the directory to build your container must be contain the `Dockerfile` and `source code`, if you `docker compose up` it will automaticlly create the image from `Dockerfile` build the container
`docker-compose.yml`

	redis:
	   image:redis
	db:
	   image: postgres:9.4
	vote:
	   build: ./vote
	   ports:
		- 5000:80
	   links:
		- redis
	result:
	   build: ./result
	   ports:
		- 5001:80
	   links:
		- db
	workers:
	   image: ./worker
	   links:
		- db
		- redis

**docker compose-versions**
docker have so many version for `docker-compose.yml`, if you want to use the new version of the `docker-compose.yml` file, then you have to specify it in th `yml` file, we add the `depends_on` property to make sure if your container need the other run first

version1

	redis:
	   image: redis
	db:
	   image: postgres:9.4
	vote:
	   image: voting-app
	   ports:
		- 5000:80
	   links:
		- redis

version2
	
	version: 2
	services:	
		redis:
		   image: redis
		db:
		   image: postgres:9.4
		vote:
		   image: voting-app
		   ports:
			- 5000:80
		   depends_on:
			- redis

version3
	
	version: 3
	services:	
		redis:
		   image: redis
		db:
		   image: postgres:9.4
		vote:
		   image: voting-app
		   ports:
			- 5000:80
		   depends_on:
			- redis

**docker compose multi network**
if you want to let your container in multi-network as `front-end` and `back-end` network

	version: 2
	services:	
		redis:
		   image: redis
		   networks:
			-back-end
		db:
		   image: postgres:9.4
		   networks:
			-back-end
		vote:
		   image: voting-app
		   networks:
			-front-end
			-back-end
		result:
		   image: result
		   networks:
			-front-end
			-back-end
	networks:
	   front-end:
	   back-end:


**example**

	version: "2"
	services:
	  redis:
	    # replace username/repo:tag with your name and image details
	    image: redis:alpine
	  clickcounter:
	    image: kodekloud/click-counter
	    ports:
	      - "8085:5000"


