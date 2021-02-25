#include "ABDBB.h"
#include "A/ABDBBA.h"
#include "B/ABDBBB.h"
#include "C/ABDBBC.h"
#include "D/ABDBBD.h"
#include "E/ABDBBE.h"

namespace ABDBB {

std::string run() {
  std::string out("ABDBB");
  out += std::string(SEPARATOR);
  out += ABDBBA::run();
  out += std::string(SEPARATOR);
  out += ABDBBB::run();
  out += std::string(SEPARATOR);
  out += ABDBBC::run();
  out += std::string(SEPARATOR);
  out += ABDBBD::run();
  out += std::string(SEPARATOR);
  out += ABDBBE::run();
  return out;
}

}