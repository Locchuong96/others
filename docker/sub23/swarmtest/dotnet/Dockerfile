FROM mcr.microsoft.com/dotnet/nightly/sdk:6.0

WORKDIR /app

COPY ./bin/Debug/net6.0/publish/*.* /app/

EXPOSE 5000

ENTRYPOINT ["dotnet","dotnet.dll"]
