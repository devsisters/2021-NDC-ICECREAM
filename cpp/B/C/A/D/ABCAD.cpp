#include "ABCAD.h"
#include "A/ABCADA.h"
#include "B/ABCADB.h"
#include "C/ABCADC.h"
#include "D/ABCADD.h"
#include "E/ABCADE.h"

namespace ABCAD {

std::string run() {
  std::string out("ABCAD");
  out += std::string(SEPARATOR);
  out += ABCADA::run();
  out += std::string(SEPARATOR);
  out += ABCADB::run();
  out += std::string(SEPARATOR);
  out += ABCADC::run();
  out += std::string(SEPARATOR);
  out += ABCADD::run();
  out += std::string(SEPARATOR);
  out += ABCADE::run();
  return out;
}

}