#include "ACCBB.h"
#include "A/ACCBBA.h"
#include "B/ACCBBB.h"
#include "C/ACCBBC.h"
#include "D/ACCBBD.h"
#include "E/ACCBBE.h"

namespace ACCBB {

std::string run() {
  std::string out("ACCBB");
  out += std::string(SEPARATOR);
  out += ACCBBA::run();
  out += std::string(SEPARATOR);
  out += ACCBBB::run();
  out += std::string(SEPARATOR);
  out += ACCBBC::run();
  out += std::string(SEPARATOR);
  out += ACCBBD::run();
  out += std::string(SEPARATOR);
  out += ACCBBE::run();
  return out;
}

}