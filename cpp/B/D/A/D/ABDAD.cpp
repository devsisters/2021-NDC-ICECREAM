#include "ABDAD.h"
#include "A/ABDADA.h"
#include "B/ABDADB.h"
#include "C/ABDADC.h"
#include "D/ABDADD.h"
#include "E/ABDADE.h"

namespace ABDAD {

std::string run() {
  std::string out("ABDAD");
  out += std::string(SEPARATOR);
  out += ABDADA::run();
  out += std::string(SEPARATOR);
  out += ABDADB::run();
  out += std::string(SEPARATOR);
  out += ABDADC::run();
  out += std::string(SEPARATOR);
  out += ABDADD::run();
  out += std::string(SEPARATOR);
  out += ABDADE::run();
  return out;
}

}