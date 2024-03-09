#include <chrono>
#include <iostream>

int main()
{
  // Get the current system time
  auto now = std::chrono::system_clock::now();

  // Convert the system time to a time_t object
  std::time_t now_t = std::chrono::system_clock::to_time_t(now);

  // Convert the time_t object to a tm struct
  std::tm* now_tm = std::localtime(&now_t);

  // std::time_t now_t = std::time(nullptr); // get current system time
  // std::tm *now_tm =
  //     std::localtime(&now_t); // convert to struct tm representing local time

  std::cout << sizeof(now_t) << " " << now_t << std::endl;

  int year = now_tm->tm_year + 1900; // year since 1900
  int month = now_tm->tm_mon + 1; // month (0-11)
  int day = now_tm->tm_mday; // day of the month (1-31)
  int hour = now_tm->tm_hour; // hour (0-23)
  int min = now_tm->tm_min; // minute (0-59)
  int sec = now_tm->tm_sec; // second (0-60)

  // Print the current datetime in format yyyy-mm-dd hh:mm:ss
  std::cout << year << "-" << month << "-" << day << " " << hour << ":" << min
            << ":" << sec << std::endl;

  return 0;
}
