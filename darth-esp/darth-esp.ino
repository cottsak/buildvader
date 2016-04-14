// broad overview:
// timer to invoke method checkBuild() every 5s
// post to TeamCity api for http://teamcity-path.com/httpAuth/app/rest/buildTypes/id:someid/builds?count=1
// inspect response for "status":"SUCCESS"
// if success set GPIO2 HIGH for GREEN
// else set GPIO2 LOW for RED (default on startup)




void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
