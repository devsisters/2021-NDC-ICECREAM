#include "ABED.h"
#include "A/ABEDA.h"
#include "B/ABEDB.h"
#include "C/ABEDC.h"
#include "D/ABEDD.h"
#include "E/ABEDE.h"

namespace ABED {

std::string run() {
  std::string out("ABED");
  out += std::string(SEPARATOR);
  out += ABEDA::run();
  out += std::string(SEPARATOR);
  out += ABEDB::run();
  out += std::string(SEPARATOR);
  out += ABEDC::run();
  out += std::string(SEPARATOR);
  out += ABEDD::run();
  out += std::string(SEPARATOR);
  out += ABEDE::run();
  return out;
}

}