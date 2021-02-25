#include "ADDAE.h"
#include "A/ADDAEA.h"
#include "B/ADDAEB.h"
#include "C/ADDAEC.h"
#include "D/ADDAED.h"
#include "E/ADDAEE.h"

namespace ADDAE {

std::string run() {
  std::string out("ADDAE");
  out += std::string(SEPARATOR);
  out += ADDAEA::run();
  out += std::string(SEPARATOR);
  out += ADDAEB::run();
  out += std::string(SEPARATOR);
  out += ADDAEC::run();
  out += std::string(SEPARATOR);
  out += ADDAED::run();
  out += std::string(SEPARATOR);
  out += ADDAEE::run();
  return out;
}

}