# EagleBlog
A basic Blog site with C++ and [CROW Framework](https://crowcpp.org/) in back end.

## If you wish to run this , you need to have properly installed
- Visual Studio 2019 Community
- Boost C++ Libraries

### Things to do before you run , you need to make few changes in ```crow_all.h``` header file.
- Add ```#include <boost/asio.hpp>```.
- Add those macros after all of your ```#include``` statement.
```
#if BOOST_VERSION >= 107000
#define GET_IO_SERVICE(s) ((boost::asio::io_context&)(s).get_executor().context())
#else
#define GET_IO_SERVICE(s) ((s).get_io_service())
#endif
```
- Replace 
```
boost::asio::io_service& get_io_service()
{
  return raw_socket().get_io_service();
}
```
with 
```
boost::asio::io_service& get_io_service()
{
  return GET_IO_SERVICE(socket_);
}
```
### Now go ahead and compile.
- If everything is ```200``` , you see something like this.

![copilation_success](https://github.com/evilprince2009/EagleBlog/blob/main/Screenshots/Successful%20Compile.png)
- After you load ```http://localhost:5500/``` in browser , you see a ```200``` response status in terminal.

![response_status_200](https://github.com/evilprince2009/EagleBlog/blob/main/Screenshots/Successful%20Response.png)
- Rendered HTML looks like this.

![rendered_page](https://github.com/evilprince2009/EagleBlog/blob/main/Screenshots/Rendered%20page.png)

## ⚡⚡ However C++ is Awesome !! ⚡⚡

### [Ibne Nahian](https://www.facebook.com/evilprince2009)
