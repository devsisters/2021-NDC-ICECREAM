#include "ABBDB.h"
#include "A/ABBDBA.h"
#include "B/ABBDBB.h"
#include "C/ABBDBC.h"
#include "D/ABBDBD.h"
#include "E/ABBDBE.h"

namespace ABBDB {

std::string run() {
  std::string out("ABBDB");
  out += std::string(SEPARATOR);
  out += ABBDBA::run();
  out += std::string(SEPARATOR);
  out += ABBDBB::run();
  out += std::string(SEPARATOR);
  out += ABBDBC::run();
  out += std::string(SEPARATOR);
  out += ABBDBD::run();
  out += std::string(SEPARATOR);
  out += ABBDBE::run();
  return out;
}

}