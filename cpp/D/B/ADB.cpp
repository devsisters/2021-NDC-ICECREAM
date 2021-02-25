#include "ADB.h"
#include "A/ADBA.h"
#include "B/ADBB.h"
#include "C/ADBC.h"
#include "D/ADBD.h"
#include "E/ADBE.h"

namespace ADB {

std::string run() {
  std::string out("ADB");
  out += std::string(SEPARATOR);
  out += ADBA::run();
  out += std::string(SEPARATOR);
  out += ADBB::run();
  out += std::string(SEPARATOR);
  out += ADBC::run();
  out += std::string(SEPARATOR);
  out += ADBD::run();
  out += std::string(SEPARATOR);
  out += ADBE::run();
  return out;
}

}