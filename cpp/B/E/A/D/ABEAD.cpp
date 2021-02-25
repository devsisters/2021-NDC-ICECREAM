#include "ABEAD.h"
#include "A/ABEADA.h"
#include "B/ABEADB.h"
#include "C/ABEADC.h"
#include "D/ABEADD.h"
#include "E/ABEADE.h"

namespace ABEAD {

std::string run() {
  std::string out("ABEAD");
  out += std::string(SEPARATOR);
  out += ABEADA::run();
  out += std::string(SEPARATOR);
  out += ABEADB::run();
  out += std::string(SEPARATOR);
  out += ABEADC::run();
  out += std::string(SEPARATOR);
  out += ABEADD::run();
  out += std::string(SEPARATOR);
  out += ABEADE::run();
  return out;
}

}