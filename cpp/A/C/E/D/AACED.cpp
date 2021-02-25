#include "AACED.h"
#include "A/AACEDA.h"
#include "B/AACEDB.h"
#include "C/AACEDC.h"
#include "D/AACEDD.h"
#include "E/AACEDE.h"

namespace AACED {

std::string run() {
  std::string out("AACED");
  out += std::string(SEPARATOR);
  out += AACEDA::run();
  out += std::string(SEPARATOR);
  out += AACEDB::run();
  out += std::string(SEPARATOR);
  out += AACEDC::run();
  out += std::string(SEPARATOR);
  out += AACEDD::run();
  out += std::string(SEPARATOR);
  out += AACEDE::run();
  return out;
}

}