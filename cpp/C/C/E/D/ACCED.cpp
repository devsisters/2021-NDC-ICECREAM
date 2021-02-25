#include "ACCED.h"
#include "A/ACCEDA.h"
#include "B/ACCEDB.h"
#include "C/ACCEDC.h"
#include "D/ACCEDD.h"
#include "E/ACCEDE.h"

namespace ACCED {

std::string run() {
  std::string out("ACCED");
  out += std::string(SEPARATOR);
  out += ACCEDA::run();
  out += std::string(SEPARATOR);
  out += ACCEDB::run();
  out += std::string(SEPARATOR);
  out += ACCEDC::run();
  out += std::string(SEPARATOR);
  out += ACCEDD::run();
  out += std::string(SEPARATOR);
  out += ACCEDE::run();
  return out;
}

}