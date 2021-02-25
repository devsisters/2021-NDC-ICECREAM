#include "AEAED.h"
#include "A/AEAEDA.h"
#include "B/AEAEDB.h"
#include "C/AEAEDC.h"
#include "D/AEAEDD.h"
#include "E/AEAEDE.h"

namespace AEAED {

std::string run() {
  std::string out("AEAED");
  out += std::string(SEPARATOR);
  out += AEAEDA::run();
  out += std::string(SEPARATOR);
  out += AEAEDB::run();
  out += std::string(SEPARATOR);
  out += AEAEDC::run();
  out += std::string(SEPARATOR);
  out += AEAEDD::run();
  out += std::string(SEPARATOR);
  out += AEAEDE::run();
  return out;
}

}