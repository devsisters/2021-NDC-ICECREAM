#include "ADEAD.h"
#include "A/ADEADA.h"
#include "B/ADEADB.h"
#include "C/ADEADC.h"
#include "D/ADEADD.h"
#include "E/ADEADE.h"

namespace ADEAD {

std::string run() {
  std::string out("ADEAD");
  out += std::string(SEPARATOR);
  out += ADEADA::run();
  out += std::string(SEPARATOR);
  out += ADEADB::run();
  out += std::string(SEPARATOR);
  out += ADEADC::run();
  out += std::string(SEPARATOR);
  out += ADEADD::run();
  out += std::string(SEPARATOR);
  out += ADEADE::run();
  return out;
}

}