#include "AD.h"
#include "A/ADA.h"
#include "B/ADB.h"
#include "C/ADC.h"
#include "D/ADD.h"
#include "E/ADE.h"

namespace AD {

std::string run() {
  std::string out("AD");
  out += std::string(SEPARATOR);
  out += ADA::run();
  out += std::string(SEPARATOR);
  out += ADB::run();
  out += std::string(SEPARATOR);
  out += ADC::run();
  out += std::string(SEPARATOR);
  out += ADD::run();
  out += std::string(SEPARATOR);
  out += ADE::run();
  return out;
}

}