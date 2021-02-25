#include "ACBED.h"
#include "A/ACBEDA.h"
#include "B/ACBEDB.h"
#include "C/ACBEDC.h"
#include "D/ACBEDD.h"
#include "E/ACBEDE.h"

namespace ACBED {

std::string run() {
  std::string out("ACBED");
  out += std::string(SEPARATOR);
  out += ACBEDA::run();
  out += std::string(SEPARATOR);
  out += ACBEDB::run();
  out += std::string(SEPARATOR);
  out += ACBEDC::run();
  out += std::string(SEPARATOR);
  out += ACBEDD::run();
  out += std::string(SEPARATOR);
  out += ACBEDE::run();
  return out;
}

}