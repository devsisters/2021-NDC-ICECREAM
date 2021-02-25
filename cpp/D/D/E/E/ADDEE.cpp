#include "ADDEE.h"
#include "A/ADDEEA.h"
#include "B/ADDEEB.h"
#include "C/ADDEEC.h"
#include "D/ADDEED.h"
#include "E/ADDEEE.h"

namespace ADDEE {

std::string run() {
  std::string out("ADDEE");
  out += std::string(SEPARATOR);
  out += ADDEEA::run();
  out += std::string(SEPARATOR);
  out += ADDEEB::run();
  out += std::string(SEPARATOR);
  out += ADDEEC::run();
  out += std::string(SEPARATOR);
  out += ADDEED::run();
  out += std::string(SEPARATOR);
  out += ADDEEE::run();
  return out;
}

}