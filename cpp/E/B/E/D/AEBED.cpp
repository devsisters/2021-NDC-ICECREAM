#include "AEBED.h"
#include "A/AEBEDA.h"
#include "B/AEBEDB.h"
#include "C/AEBEDC.h"
#include "D/AEBEDD.h"
#include "E/AEBEDE.h"

namespace AEBED {

std::string run() {
  std::string out("AEBED");
  out += std::string(SEPARATOR);
  out += AEBEDA::run();
  out += std::string(SEPARATOR);
  out += AEBEDB::run();
  out += std::string(SEPARATOR);
  out += AEBEDC::run();
  out += std::string(SEPARATOR);
  out += AEBEDD::run();
  out += std::string(SEPARATOR);
  out += AEBEDE::run();
  return out;
}

}