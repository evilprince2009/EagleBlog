#include <iostream>
#include "boost/asio.hpp"
#include "crow_all.h"

int main()
{
	const int port_address = 5500;
	crow::SimpleApp app;
	crow::mustache::set_base(".");
	

	CROW_ROUTE(app, "/")([]() {
		crow::mustache::context view_context;
		auto home_page = crow::mustache::load("index.html");
		
		return home_page.render();
		});

	app.port(port_address).multithreaded().run();
	return 0;
}
