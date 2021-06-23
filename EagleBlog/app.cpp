#include <iostream>
#include "boost/asio.hpp"
#include "crow_all.h"

int main()
{
	const int port_address = 5500;
	crow::SimpleApp app;
	crow::mustache::set_base("./");
	
	CROW_ROUTE(app, "/")([]() {
		// crow::mustache::context view_context;
		auto home_page = crow::mustache::load("index.html");
		return home_page.render();
	});

	CROW_ROUTE(app, "/blogs")([](const crow::request& req, crow::response& res) {
		res.redirect("/");
		res.end();
	});

	CROW_ROUTE(app, "/about")([]() {
		auto about_page = crow::mustache::load("about.html");
		return about_page.render();
	});

	app.port(port_address).multithreaded().run();
	return 0;
}
