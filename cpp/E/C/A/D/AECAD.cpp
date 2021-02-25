#include "AECAD.h"
#include "A/AECADA.h"
#include "B/AECADB.h"
#include "C/AECADC.h"
#include "D/AECADD.h"
#include "E/AECADE.h"

namespace AECAD {

std::string run() {
  std::string out("AECAD");
  out += std::string(SEPARATOR);
  out += AECADA::run();
  out += std::string(SEPARATOR);
  out += AECADB::run();
  out += std::string(SEPARATOR);
  out += AECADC::run();
  out += std::string(SEPARATOR);
  out += AECADD::run();
  out += std::string(SEPARATOR);
  out += AECADE::run();
  return out;
}

}