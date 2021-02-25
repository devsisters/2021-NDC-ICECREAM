#include "ABBBB.h"
#include "A/ABBBBA.h"
#include "B/ABBBBB.h"
#include "C/ABBBBC.h"
#include "D/ABBBBD.h"
#include "E/ABBBBE.h"

namespace ABBBB {

std::string run() {
  std::string out("ABBBB");
  out += std::string(SEPARATOR);
  out += ABBBBA::run();
  out += std::string(SEPARATOR);
  out += ABBBBB::run();
  out += std::string(SEPARATOR);
  out += ABBBBC::run();
  out += std::string(SEPARATOR);
  out += ABBBBD::run();
  out += std::string(SEPARATOR);
  out += ABBBBE::run();
  return out;
}

}