#include "ADDBB.h"
#include "A/ADDBBA.h"
#include "B/ADDBBB.h"
#include "C/ADDBBC.h"
#include "D/ADDBBD.h"
#include "E/ADDBBE.h"

namespace ADDBB {

std::string run() {
  std::string out("ADDBB");
  out += std::string(SEPARATOR);
  out += ADDBBA::run();
  out += std::string(SEPARATOR);
  out += ADDBBB::run();
  out += std::string(SEPARATOR);
  out += ADDBBC::run();
  out += std::string(SEPARATOR);
  out += ADDBBD::run();
  out += std::string(SEPARATOR);
  out += ADDBBE::run();
  return out;
}

}