#ifndef INSIDE_REDIRECTHUB_H
#define INSIDE_REDIRECTHUB_H

#include "../vendor/http/httplib.h"

using json = nlohmann::json;

class Routes {
public:
    static void setupRoutes(httplib::Server &svr);

private:
    static void handleInternalNetworkAnalysis(const httplib::Request &req, httplib::Response &res);
    static void handleNmapScan(const httplib::Request &req,  httplib::Response &res);
    static void handleHomeDetails(const httplib::Request &req, httplib::Response &res);
    static void handleNetworkReport(const httplib::Request &req, httplib::Response &res);
    static void handleVulnerabilityReport(const httplib::Request &req, httplib::Response &res);
};


#endif
