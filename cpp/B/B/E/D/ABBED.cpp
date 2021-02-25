#include "ABBED.h"
#include "A/ABBEDA.h"
#include "B/ABBEDB.h"
#include "C/ABBEDC.h"
#include "D/ABBEDD.h"
#include "E/ABBEDE.h"

namespace ABBED {

std::string run() {
  std::string out("ABBED");
  out += std::string(SEPARATOR);
  out += ABBEDA::run();
  out += std::string(SEPARATOR);
  out += ABBEDB::run();
  out += std::string(SEPARATOR);
  out += ABBEDC::run();
  out += std::string(SEPARATOR);
  out += ABBEDD::run();
  out += std::string(SEPARATOR);
  out += ABBEDE::run();
  return out;
}

}