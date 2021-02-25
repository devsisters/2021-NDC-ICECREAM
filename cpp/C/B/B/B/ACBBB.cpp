#include "ACBBB.h"
#include "A/ACBBBA.h"
#include "B/ACBBBB.h"
#include "C/ACBBBC.h"
#include "D/ACBBBD.h"
#include "E/ACBBBE.h"

namespace ACBBB {

std::string run() {
  std::string out("ACBBB");
  out += std::string(SEPARATOR);
  out += ACBBBA::run();
  out += std::string(SEPARATOR);
  out += ACBBBB::run();
  out += std::string(SEPARATOR);
  out += ACBBBC::run();
  out += std::string(SEPARATOR);
  out += ACBBBD::run();
  out += std::string(SEPARATOR);
  out += ACBBBE::run();
  return out;
}

}