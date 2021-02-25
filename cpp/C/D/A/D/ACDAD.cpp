#include "ACDAD.h"
#include "A/ACDADA.h"
#include "B/ACDADB.h"
#include "C/ACDADC.h"
#include "D/ACDADD.h"
#include "E/ACDADE.h"

namespace ACDAD {

std::string run() {
  std::string out("ACDAD");
  out += std::string(SEPARATOR);
  out += ACDADA::run();
  out += std::string(SEPARATOR);
  out += ACDADB::run();
  out += std::string(SEPARATOR);
  out += ACDADC::run();
  out += std::string(SEPARATOR);
  out += ACDADD::run();
  out += std::string(SEPARATOR);
  out += ACDADE::run();
  return out;
}

}