#include "ADDAD.h"
#include "A/ADDADA.h"
#include "B/ADDADB.h"
#include "C/ADDADC.h"
#include "D/ADDADD.h"
#include "E/ADDADE.h"

namespace ADDAD {

std::string run() {
  std::string out("ADDAD");
  out += std::string(SEPARATOR);
  out += ADDADA::run();
  out += std::string(SEPARATOR);
  out += ADDADB::run();
  out += std::string(SEPARATOR);
  out += ADDADC::run();
  out += std::string(SEPARATOR);
  out += ADDADD::run();
  out += std::string(SEPARATOR);
  out += ADDADE::run();
  return out;
}

}