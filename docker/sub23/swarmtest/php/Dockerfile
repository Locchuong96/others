FROM php:7

WORKDIR /app/

COPY ./index.php /app/index.php

EXPOSE 8085

ENTRYPOINT ["php"]

CMD ["-S","0.0.0.0:8085","index.php"]
