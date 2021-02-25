#include "AACAD.h"
#include "A/AACADA.h"
#include "B/AACADB.h"
#include "C/AACADC.h"
#include "D/AACADD.h"
#include "E/AACADE.h"

namespace AACAD {

std::string run() {
  std::string out("AACAD");
  out += std::string(SEPARATOR);
  out += AACADA::run();
  out += std::string(SEPARATOR);
  out += AACADB::run();
  out += std::string(SEPARATOR);
  out += AACADC::run();
  out += std::string(SEPARATOR);
  out += AACADD::run();
  out += std::string(SEPARATOR);
  out += AACADE::run();
  return out;
}

}