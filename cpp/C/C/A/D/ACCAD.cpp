#include "ACCAD.h"
#include "A/ACCADA.h"
#include "B/ACCADB.h"
#include "C/ACCADC.h"
#include "D/ACCADD.h"
#include "E/ACCADE.h"

namespace ACCAD {

std::string run() {
  std::string out("ACCAD");
  out += std::string(SEPARATOR);
  out += ACCADA::run();
  out += std::string(SEPARATOR);
  out += ACCADB::run();
  out += std::string(SEPARATOR);
  out += ACCADC::run();
  out += std::string(SEPARATOR);
  out += ACCADD::run();
  out += std::string(SEPARATOR);
  out += ACCADE::run();
  return out;
}

}